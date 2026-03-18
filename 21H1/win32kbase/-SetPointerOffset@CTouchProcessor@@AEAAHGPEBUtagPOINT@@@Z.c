/*
 * XREFs of ?SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z @ 0x1C01A19B8
 * Callers:
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C0192974 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C019A5A0 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 * Callees:
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C0193938 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerOffset(
        struct _KTHREAD **this,
        unsigned __int16 a2,
        const struct tagPOINT *a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  struct tagPOINT *v6; // rdi

  result = (__int64)CTouchProcessor::FindNodeById(this, a2, 0, 0);
  v6 = (struct tagPOINT *)result;
  if ( result )
  {
    if ( !a3 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
    v6[24] = *a3;
    return 1LL;
  }
  return result;
}
