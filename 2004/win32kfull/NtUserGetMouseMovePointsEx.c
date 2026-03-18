/*
 * XREFs of NtUserGetMouseMovePointsEx @ 0x1C01FB6C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     _GetMouseMovePointsEx @ 0x1C01DA43C (_GetMouseMovePointsEx.c)
 */

__int64 __fastcall NtUserGetMouseMovePointsEx(int a1, ULONG64 a2, volatile void *a3, unsigned int a4, int a5)
{
  __int64 v5; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  ULONG64 v13; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int MouseMovePoints; // ebx
  __int64 v18; // r8
  __int128 v20; // [rsp+38h] [rbp-40h] BYREF
  __int64 v21; // [rsp+48h] [rbp-30h]
  __int128 v22; // [rsp+50h] [rbp-28h]
  __int64 v23; // [rsp+60h] [rbp-18h]

  v5 = a4;
  v20 = 0LL;
  v21 = 0LL;
  EnterSharedCrit(0LL, 1LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a1 != 24 || (unsigned int)v5 > 0x40 )
  {
    v12 = 87LL;
    goto LABEL_10;
  }
  v10 = grpdeskRitInput;
  if ( *(_QWORD *)(ThreadWin32Thread + 448) != grpdeskRitInput )
  {
    v12 = 5LL;
LABEL_10:
    UserSetLastError(v12, v10, v11);
    MouseMovePoints = -1;
    goto LABEL_11;
  }
  v13 = a2 + 24;
  if ( a2 + 24 < a2 || v13 > MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v22 = *(_OWORD *)a2;
  v23 = *(_QWORD *)(a2 + 16);
  v20 = v22;
  v21 = v23;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v13);
  ProbeForWrite(a3, 24 * v5, CurrentProcessWow64Process != 0 ? 1 : 4);
  MouseMovePoints = GetMouseMovePointsEx((__int16 *)&v20, (__int64)a3, v5, a5);
LABEL_11:
  UserSessionSwitchLeaveCrit(v16, v15, v18);
  return MouseMovePoints;
}
