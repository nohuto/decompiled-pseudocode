/*
 * XREFs of _NtGdiPATHOBJ_bEnum@8 @ 0x21A730
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     ?_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z @ 0x1F40D8 (-_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QAEPAU_PATHOBJ@@PAU1@@Z @ 0x215F66 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QAEPAU_PATHOBJ@@PAU1@@Z.c)
 */

BOOL __stdcall NtGdiPATHOBJ_bEnum(int a1, ULONG a2)
{
  BOOL v2; // ebx
  POINTFIX *v3; // esi
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  UMPDOBJ *v8; // edi
  PATHOBJ *v9; // eax
  _DWORD *v10; // edi
  ULONG *v11; // edi
  PATHDATA ppd; // [esp+10h] [ebp-28h] BYREF
  struct UMPDOBJ *v13; // [esp+1Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  memset(&ppd, 0, sizeof(ppd));
  v2 = 0;
  v3 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v13 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0;
  ++*((_DWORD *)ThreadCurrentObj + 57);
  v8 = ThreadCurrentObj;
  v9 = (PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>(ThreadCurrentObj, a1);
  if ( v9 )
  {
    if ( (*((_DWORD *)v8 + 55) & 0x100) == 0 || v9[1].fl )
    {
      v2 = PATHOBJ_bEnum(v9, &ppd);
    }
    else
    {
      if ( gfUMPDDebug )
        _DbgPrint(
          "clientcore\\windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_bEnum:ppath == NULL.\n",
          3879);
      v2 = 0;
    }
    if ( ppd.count > 0x4E2000 )
    {
      --*((_DWORD *)v8 + 57);
      return 0;
    }
    v3 = (POINTFIX *)UMPDOBJ::_AllocUserMem(v8, (char *)(8 * ppd.count), 0);
    if ( v3 )
    {
      ms_exc.registration.TryLevel = 0;
      memcpy(v3, ppd.pptfx, 8 * ppd.count);
      ms_exc.registration.TryLevel = -2;
      ppd.pptfx = v3;
    }
    else
    {
      v2 = 0;
    }
  }
  if ( !v3 )
    memset(&ppd, 0, sizeof(ppd));
  ms_exc.registration.TryLevel = 1;
  v10 = (_DWORD *)a2;
  if ( a2 >= _MmUserProbeAddress )
    v10 = (_DWORD *)_MmUserProbeAddress;
  *v10 = ppd.flags;
  v11 = v10 + 1;
  *v11 = ppd.count;
  v11[1] = (ULONG)ppd.pptfx;
  ms_exc.registration.TryLevel = -2;
  --*((_DWORD *)v13 + 57);
  return v2;
}
