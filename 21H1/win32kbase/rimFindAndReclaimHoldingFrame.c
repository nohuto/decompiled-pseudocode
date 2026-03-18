/*
 * XREFs of rimFindAndReclaimHoldingFrame @ 0x1C0179F2C
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C01794B0 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     rimFindHoldingFrame @ 0x1C0056DA0 (rimFindHoldingFrame.c)
 *     ?DropCompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMHOLDINGFRAME@@_NW4InputTracing_RimCompletionReason@@@Z @ 0x1C0178984 (-DropCompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMHOLDINGFRAME@@_NW4InputTracing_R.c)
 *     rimReclaimHoldingFrame @ 0x1C017A6E8 (rimReclaimHoldingFrame.c)
 */

_QWORD *__fastcall rimFindAndReclaimHoldingFrame(__int64 a1, __int64 a2, int a3)
{
  _QWORD *result; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx

  result = rimFindHoldingFrame(a1, a2);
  v6 = result;
  if ( result )
  {
    InputTraceLogging::RIM::DropCompleteFrame(a2, (__int64)result, a3 != 0);
    return (_QWORD *)rimReclaimHoldingFrame(v8, v7, v6);
  }
  return result;
}
