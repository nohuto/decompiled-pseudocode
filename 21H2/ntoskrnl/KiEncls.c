/*
 * XREFs of KiEncls @ 0x1403FF240
 * Callers:
 *     KeAddEnclavePage @ 0x140515198 (KeAddEnclavePage.c)
 *     KeBlockEnclavePage @ 0x14051530C (KeBlockEnclavePage.c)
 *     KeCanChangeEnclavePageProtection @ 0x14051535C (KeCanChangeEnclavePageProtection.c)
 *     KeChangeEnclavePageProtection @ 0x140515424 (KeChangeEnclavePageProtection.c)
 *     KeCreateEnclaveMetadataPage @ 0x14051552C (KeCreateEnclaveMetadataPage.c)
 *     KeOutPageEnclavePage @ 0x140515570 (KeOutPageEnclavePage.c)
 *     KeRemoveEnclavePage @ 0x140515630 (KeRemoveEnclavePage.c)
 *     KeTrackEnclaveTbFlush @ 0x140515674 (KeTrackEnclaveTbFlush.c)
 *     KeCreateEnclave @ 0x1408BB5FC (KeCreateEnclave.c)
 *     KeDebugWriteEnclaveMemory @ 0x1408BB7BC (KeDebugWriteEnclaveMemory.c)
 *     KeInitializeEnclave @ 0x1408BB848 (KeInitializeEnclave.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiEncls(unsigned int a1)
{
  __int64 result; // rax

  result = a1;
  __asm { encls }
  return result;
}
