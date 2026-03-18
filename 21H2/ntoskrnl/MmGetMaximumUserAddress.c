/*
 * XREFs of MmGetMaximumUserAddress @ 0x140419118
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

unsigned __int64 MmGetMaximumUserAddress()
{
  return KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[5];
}
