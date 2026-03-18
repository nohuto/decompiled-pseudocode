/*
 * XREFs of NtGdiXFORMOBJ_iGetXform @ 0x1C01443E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0087F2C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     XFORMOBJ_iGetXform @ 0x1C008ED30 (XFORMOBJ_iGetXform.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z @ 0x1C01444E8 (--$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiXFORMOBJ_iGetXform(__int64 a1, ULONG64 a2)
{
  ULONG Xform; // r14d
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v7; // rbx
  XFORMOBJ *v8; // rax
  __int128 v10; // [rsp+28h] [rbp-40h] BYREF
  __int64 v11; // [rsp+38h] [rbp-30h]

  Xform = -1;
  v10 = 0LL;
  v11 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v7 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0xFFFFFFFFLL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  v8 = (XFORMOBJ *)UMPDOBJ::GetDDIOBJ<_XFORMOBJ>(ThreadCurrentObj, a1);
  if ( v8 )
  {
    Xform = XFORMOBJ_iGetXform(v8, (XFORML *)((unsigned __int64)&v10 & -(__int64)(a2 != 0)));
    if ( Xform != -1 )
    {
      if ( a2 )
      {
        if ( a2 >= MmUserProbeAddress )
          a2 = MmUserProbeAddress;
        *(_OWORD *)a2 = v10;
        *(_QWORD *)(a2 + 16) = v11;
      }
    }
  }
  --*((_DWORD *)v7 + 105);
  return Xform;
}
