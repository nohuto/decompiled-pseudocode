/*
 * XREFs of IovUtilWatermarkIrp @ 0x1402E0D8C
 * Callers:
 *     PopAllocateIrp @ 0x14036D060 (PopAllocateIrp.c)
 *     IopSynchronousCall @ 0x140687B88 (IopSynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x140739430 (IopFilterResourceRequirementsCall.c)
 *     PnpAsynchronousCall @ 0x14075478C (PnpAsynchronousCall.c)
 *     IopEjectDevice @ 0x1408AE5A0 (IopEjectDevice.c)
 *     VfIrpSendSynchronousIrp @ 0x1409CE4F0 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     VfIrpWatermark @ 0x1409CE67C (VfIrpWatermark.c)
 */

__int64 IovUtilWatermarkIrp()
{
  __int64 result; // rax

  if ( IovUtilVerifierEnabled )
    return VfIrpWatermark();
  return result;
}
