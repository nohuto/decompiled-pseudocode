/*
 * XREFs of KiEncls @ 0x1403F7F70
 * Callers:
 *     KeAddEnclavePage @ 0x14050FAE8 (KeAddEnclavePage.c)
 *     KeBlockEnclavePage @ 0x14050FC5C (KeBlockEnclavePage.c)
 *     KeCanChangeEnclavePageProtection @ 0x14050FCAC (KeCanChangeEnclavePageProtection.c)
 *     KeChangeEnclavePageProtection @ 0x14050FD74 (KeChangeEnclavePageProtection.c)
 *     KeCreateEnclaveMetadataPage @ 0x14050FE7C (KeCreateEnclaveMetadataPage.c)
 *     KeOutPageEnclavePage @ 0x14050FEC0 (KeOutPageEnclavePage.c)
 *     KeRemoveEnclavePage @ 0x14050FF80 (KeRemoveEnclavePage.c)
 *     KeTrackEnclaveTbFlush @ 0x14050FFC4 (KeTrackEnclaveTbFlush.c)
 *     KeCreateEnclave @ 0x1408B839C (KeCreateEnclave.c)
 *     KeDebugWriteEnclaveMemory @ 0x1408B855C (KeDebugWriteEnclaveMemory.c)
 *     KeInitializeEnclave @ 0x1408B85E8 (KeInitializeEnclave.c)
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
