/*
 * XREFs of MmGetMaximumUserAddress @ 0x1403ECB58
 * Callers:
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

unsigned __int64 MmGetMaximumUserAddress()
{
  return KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[5];
}
