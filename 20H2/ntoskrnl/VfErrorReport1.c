/*
 * XREFs of VfErrorReport1 @ 0x1409DB018
 * Callers:
 *     VfPnpVerifyIrpStackDownward @ 0x1409E5BF0 (VfPnpVerifyIrpStackDownward.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x1409E6050 (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     ViErrorReport1 @ 0x1405A04E8 (ViErrorReport1.c)
 */

__int64 __fastcall VfErrorReport1(unsigned int a1, const void *a2, const void *a3)
{
  return ViErrorReport1(a1, a2, a3);
}
