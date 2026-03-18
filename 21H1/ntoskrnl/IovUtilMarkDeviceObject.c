/*
 * XREFs of IovUtilMarkDeviceObject @ 0x14059C1BC
 * Callers:
 *     VfIoDeleteDevice @ 0x1409D30D4 (VfIoDeleteDevice.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x1409DFFD0 (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     IovpUtilMarkDeviceObject @ 0x1409D3CC8 (IovpUtilMarkDeviceObject.c)
 */

__int64 __fastcall IovUtilMarkDeviceObject(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( IovUtilVerifierEnabled )
    return IovpUtilMarkDeviceObject(a1, a2);
  return result;
}
