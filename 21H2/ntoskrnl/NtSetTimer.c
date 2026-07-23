/*
 * XREFs of NtSetTimer @ 0x1403764F0
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x140270E84 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x14027184C (PoCaptureReasonContext.c)
 *     ExpSetTimer @ 0x140376640 (ExpSetTimer.c)
 */

NTSTATUS __cdecl NtSetTimer(
        HANDLE TimerHandle,
        PLARGE_INTEGER DueTime,
        PTIMER_APC_ROUTINE TimerApcRoutine,
        PVOID TimerContext,
        BOOLEAN ResumeTimer,
        LONG Period,
        PBOOLEAN PreviousState)
{
  PLARGE_INTEGER v9; // rbx
  bool v10; // si
  char PreviousMode; // r15
  __int64 v12; // rax
  __int64 v13; // rdx
  BOOLEAN v14; // cl
  _QWORD *v15; // r14
  int v16; // eax
  NTSTATUS v17; // ebx
  NTSTATUS result; // eax
  _BYTE v19[8]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v20; // [rsp+58h] [rbp-40h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-38h] BYREF

  v9 = DueTime;
  v20 = 0LL;
  v19[0] = 0;
  P[0] = 0LL;
  v10 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v12 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)DueTime < 0x7FFFFFFF0000LL )
      v12 = (__int64)DueTime;
    v20 = *(_QWORD *)v12;
    v9 = (PLARGE_INTEGER)&v20;
    P[1] = &v20;
    v13 = 1LL;
    v14 = ResumeTimer;
  }
  else
  {
    v14 = ResumeTimer;
    v13 = 1LL;
    if ( ResumeTimer )
      v10 = PoPowerDownActionInProgress != 0;
  }
  if ( Period < 0 )
    return -1073741580;
  if ( !v14
    || v10
    || (LOBYTE(v13) = PreviousMode, result = PoCaptureReasonContext(0LL, v13, 0LL, 1, (__int64)v19, P), result >= 0) )
  {
    v15 = P[0];
    LOBYTE(v13) = PreviousMode;
    v16 = ExpSetTimer(TimerHandle, v13, v9, TimerApcRoutine, TimerContext, P[0], v19[0], Period, 0, PreviousState);
    v17 = v16;
    if ( (v16 < 0 || v16 == 1073741861) && v15 )
      PoDestroyReasonContext(v15);
    if ( v17 >= 0 && v10 )
      return 1073741861;
    return v17;
  }
  return result;
}
