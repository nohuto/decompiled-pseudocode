/*
 * XREFs of VfErrorReport1 @ 0x1409D4FF8
 * Callers:
 *     VfPnpVerifyIrpStackDownward @ 0x1409DFBD0 (VfPnpVerifyIrpStackDownward.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x1409E0030 (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     ViErrorReport1 @ 0x14059CA48 (ViErrorReport1.c)
 */

__int64 __fastcall VfErrorReport1(unsigned int a1, const void *a2, const void *a3)
{
  return ViErrorReport1(a1, a2, a3);
}
