/*
 * XREFs of xxxClientFreeWindowClassExtraBytes @ 0x1C008F2E4
 * Callers:
 *     xxxConsoleControl @ 0x1C0027F08 (xxxConsoleControl.c)
 *     xxxFreeWindow @ 0x1C008B600 (xxxFreeWindow.c)
 *     xxxTooltipWndProc @ 0x1C00BB110 (xxxTooltipWndProc.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00BB6EC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxSwitchWndProc @ 0x1C01F5B40 (xxxSwitchWndProc.c)
 *     xxxMenuWindowProc @ 0x1C023C570 (xxxMenuWindowProc.c)
 *     xxxSBWndProc @ 0x1C0246EA0 (xxxSBWndProc.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FB24 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FBDC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C008FCA0 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C008FCD8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

void __fastcall xxxClientFreeWindowClassExtraBytes(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  _QWORD v4[5]; // [rsp+30h] [rbp-28h] BYREF
  char v5; // [rsp+60h] [rbp+8h] BYREF
  char v6; // [rsp+68h] [rbp+10h] BYREF
  int v7; // [rsp+70h] [rbp+18h] BYREF
  __int64 v8; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0LL;
  v7 = 0;
  v3 = *(_QWORD *)(a1 + 40) - *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 464);
  v4[1] = a2;
  v4[0] = v3;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v6);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v5);
  EtwTraceBeginCallback(124LL);
  KeUserModeCallback(124LL, v4, 16LL, &v8, &v7);
  EtwTraceEndCallback(124LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v5);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v6);
}
