/*
 * XREFs of IovUtilWatermarkIrp @ 0x1402D3080
 * Callers:
 *     PopAllocateIrp @ 0x1403A3F0C (PopAllocateIrp.c)
 *     IopFilterResourceRequirementsCall @ 0x140748D6C (IopFilterResourceRequirementsCall.c)
 *     PnpAsynchronousCall @ 0x14074C5A8 (PnpAsynchronousCall.c)
 *     IopSynchronousCall @ 0x14074CA9C (IopSynchronousCall.c)
 *     IopEjectDevice @ 0x1409585A4 (IopEjectDevice.c)
 *     VfIrpSendSynchronousIrp @ 0x140A8D17C (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     VfIrpWatermark @ 0x140A8D2FC (VfIrpWatermark.c)
 */

__int64 IovUtilWatermarkIrp()
{
  __int64 result; // rax

  if ( IovUtilVerifierEnabled )
    return VfIrpWatermark();
  return result;
}
