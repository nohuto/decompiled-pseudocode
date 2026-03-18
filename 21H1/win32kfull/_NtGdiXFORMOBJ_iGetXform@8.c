/*
 * XREFs of _NtGdiXFORMOBJ_iGetXform@8 @ 0x21B391
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _XFORMOBJ_iGetXform@8 @ 0x8B07C (_XFORMOBJ_iGetXform@8.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QAEPAU_XFORMOBJ@@PAU1@@Z @ 0x216082 (--$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QAEPAU_XFORMOBJ@@PAU1@@Z.c)
 */

int __stdcall NtGdiXFORMOBJ_iGetXform(int a1, ULONG a2)
{
  XFORML *v2; // ebx
  int v3; // esi
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  XFORMOBJ *v8; // eax
  ULONG Xform; // eax
  struct UMPDOBJ *v10; // [esp+10h] [ebp-3Ch]
  XFORML v11; // [esp+18h] [ebp-34h] BYREF
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  v2 = (XFORML *)a2;
  v3 = -1;
  memset(&v11, 0, sizeof(v11));
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v10 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return -1;
  ++*((_DWORD *)ThreadCurrentObj + 57);
  v8 = (XFORMOBJ *)UMPDOBJ::GetDDIOBJ<_XFORMOBJ>(ThreadCurrentObj, a1);
  if ( v8 )
  {
    Xform = XFORMOBJ_iGetXform(v8, a2 != 0 ? &v11 : 0);
    if ( Xform == -1 || !a2 )
    {
      v3 = Xform;
    }
    else
    {
      ms_exc.registration.TryLevel = 0;
      if ( a2 >= _MmUserProbeAddress )
        v2 = (XFORML *)_MmUserProbeAddress;
      qmemcpy(v2, &v11, sizeof(XFORML));
      ms_exc.registration.TryLevel = -2;
      v3 = Xform;
    }
  }
  --*((_DWORD *)v10 + 57);
  return v3;
}
