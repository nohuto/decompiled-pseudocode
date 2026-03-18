/*
 * XREFs of _NtGdiPATHOBJ_vGetBounds@8 @ 0x21ABE1
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QAEPAU_PATHOBJ@@PAU1@@Z @ 0x215F66 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QAEPAU_PATHOBJ@@PAU1@@Z.c)
 */

int __stdcall NtGdiPATHOBJ_vGetBounds(int a1, ULONG a2)
{
  struct _RECTFX *v2; // ebx
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  PATHOBJ *v7; // eax
  struct UMPDOBJ *v8; // [esp+10h] [ebp-30h]
  struct _RECTFX prectfx; // [esp+14h] [ebp-2Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+28h] [ebp-18h]

  v2 = (struct _RECTFX *)a2;
  memset(&prectfx, 0, sizeof(prectfx));
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v8 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return -1073741811;
  ++*((_DWORD *)ThreadCurrentObj + 57);
  v7 = (PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>(ThreadCurrentObj, a1);
  if ( v7 )
  {
    PATHOBJ_vGetBounds(v7, &prectfx);
    ms_exc.registration.TryLevel = 0;
    if ( a2 >= _MmUserProbeAddress )
      v2 = (struct _RECTFX *)_MmUserProbeAddress;
    *v2 = prectfx;
    ms_exc.registration.TryLevel = -2;
  }
  --*((_DWORD *)v8 + 57);
  return 0;
}
