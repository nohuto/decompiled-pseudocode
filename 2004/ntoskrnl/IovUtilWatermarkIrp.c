/*
 * XREFs of IovUtilWatermarkIrp @ 0x1402716FC
 * Callers:
 *     PopAllocateIrp @ 0x14036CD00 (PopAllocateIrp.c)
 *     IopSynchronousCall @ 0x14063A00C (IopSynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x14073AFB0 (IopFilterResourceRequirementsCall.c)
 *     PnpAsynchronousCall @ 0x140756E24 (PnpAsynchronousCall.c)
 *     IopEjectDevice @ 0x1408AF8C0 (IopEjectDevice.c)
 *     VfIrpSendSynchronousIrp @ 0x1409CE500 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     VfIrpWatermark @ 0x1409CE68C (VfIrpWatermark.c)
 */

__int64 IovUtilWatermarkIrp()
{
  __int64 result; // rax

  if ( IovUtilVerifierEnabled )
    return VfIrpWatermark();
  return result;
}
