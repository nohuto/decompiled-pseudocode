/*
 * XREFs of ?ShouldDeliverWheelEventToInputDest@CMouseProcessor@@AEBA_NAEBVCWheelEvent@1@AEBVCInputDest@@@Z @ 0x1C01BE7DC
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01BDDE8 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     IsShellProcess @ 0x1C0045050 (IsShellProcess.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C006E4BC (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C00712D4 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CMouseProcessor::ShouldDeliverWheelEventToInputDest(
        CMouseProcessor *this,
        const struct CMouseProcessor::CWheelEvent *a2,
        const struct CInputDest *a3,
        __int64 a4)
{
  char v4; // bl
  __int64 v7; // rcx
  struct tagTHREADINFO *ThreadInfo; // rax
  struct tagTHREADINFO *v9; // rax

  v4 = 0;
  if ( !*(_DWORD *)a3 )
    return 0;
  if ( *((_DWORD *)a2 + 6) == 2 || (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 2) != 0 )
    return 1;
  v7 = *(unsigned int *)(*((_QWORD *)a2 + 1) + 112LL);
  if ( (v7 & 8) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, a2, a3, a4);
  if ( CInputDest::IsCompositionInput(a3) )
    return 1;
  ThreadInfo = CInputDest::GetThreadInfo(a3);
  if ( !ThreadInfo || (*(_DWORD *)(*((_QWORD *)ThreadInfo + 52) + 820LL) & 0x30) != 0 )
  {
    v9 = CInputDest::GetThreadInfo(a3);
    if ( !v9 || !(unsigned int)IsShellProcess(*((_QWORD *)v9 + 52)) )
      return 1;
  }
  return v4;
}
