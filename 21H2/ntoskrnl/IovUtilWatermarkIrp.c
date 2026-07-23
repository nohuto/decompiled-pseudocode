/*
 * XREFs of IovUtilWatermarkIrp @ 0x1402F759C
 * Callers:
 *     PopAllocateIrp @ 0x14036E0F0 (PopAllocateIrp.c)
 *     IopSynchronousCall @ 0x1406FA580 (IopSynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x140750C40 (IopFilterResourceRequirementsCall.c)
 *     PnpAsynchronousCall @ 0x1407692CC (PnpAsynchronousCall.c)
 *     IopEjectDevice @ 0x1408B2B20 (IopEjectDevice.c)
 *     VfIrpSendSynchronousIrp @ 0x1409D2510 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     VfIrpWatermark @ 0x1409D269C (VfIrpWatermark.c)
 */

__int64 IovUtilWatermarkIrp()
{
  __int64 result; // rax

  if ( IovUtilVerifierEnabled )
    return VfIrpWatermark();
  return result;
}
