/*
 * XREFs of IovUtilWatermarkIrp @ 0x140361ED4
 * Callers:
 *     PopAllocateIrp @ 0x14036DF40 (PopAllocateIrp.c)
 *     IopSynchronousCall @ 0x14071DFF0 (IopSynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x140750A80 (IopFilterResourceRequirementsCall.c)
 *     PnpAsynchronousCall @ 0x14076910C (PnpAsynchronousCall.c)
 *     IopEjectDevice @ 0x1408B29C0 (IopEjectDevice.c)
 *     VfIrpSendSynchronousIrp @ 0x1409D1510 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     VfIrpWatermark @ 0x1409D169C (VfIrpWatermark.c)
 */

__int64 IovUtilWatermarkIrp()
{
  __int64 result; // rax

  if ( IovUtilVerifierEnabled )
    return VfIrpWatermark();
  return result;
}
