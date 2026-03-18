/*
 * XREFs of ?GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z @ 0x1C01909AC
 * Callers:
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C018A754 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C018AB64 (-DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInput.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C0192370 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 * Callees:
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C018B718 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerOffset(struct _KTHREAD **this, unsigned __int16 a2, struct tagPOINT *a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct tagPOINT *v9; // rdi

  result = (__int64)CTouchProcessor::FindNodeById(this, a2, 0, 0);
  v9 = (struct tagPOINT *)result;
  if ( result )
  {
    if ( !a3 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7, v8);
    *a3 = v9[24];
    return 1LL;
  }
  return result;
}
