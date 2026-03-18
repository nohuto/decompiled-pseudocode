/*
 * XREFs of IovUtilWatermarkIrp @ 0x14020465C
 * Callers:
 *     PopAllocateIrp @ 0x14036F900 (PopAllocateIrp.c)
 *     IopSynchronousCall @ 0x1405DD164 (IopSynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x140749EC0 (IopFilterResourceRequirementsCall.c)
 *     PnpAsynchronousCall @ 0x140765A64 (PnpAsynchronousCall.c)
 *     IopEjectDevice @ 0x1408B53F0 (IopEjectDevice.c)
 *     VfIrpSendSynchronousIrp @ 0x1409D4520 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     VfIrpWatermark @ 0x1409D46AC (VfIrpWatermark.c)
 */

__int64 IovUtilWatermarkIrp()
{
  __int64 result; // rax

  if ( IovUtilVerifierEnabled )
    return VfIrpWatermark();
  return result;
}
