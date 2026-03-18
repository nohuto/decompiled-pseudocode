/*
 * XREFs of KiEncls @ 0x1403F6CE0
 * Callers:
 *     KeAddEnclavePage @ 0x14050F498 (KeAddEnclavePage.c)
 *     KeBlockEnclavePage @ 0x14050F60C (KeBlockEnclavePage.c)
 *     KeCanChangeEnclavePageProtection @ 0x14050F65C (KeCanChangeEnclavePageProtection.c)
 *     KeChangeEnclavePageProtection @ 0x14050F724 (KeChangeEnclavePageProtection.c)
 *     KeCreateEnclaveMetadataPage @ 0x14050F82C (KeCreateEnclaveMetadataPage.c)
 *     KeOutPageEnclavePage @ 0x14050F870 (KeOutPageEnclavePage.c)
 *     KeRemoveEnclavePage @ 0x14050F930 (KeRemoveEnclavePage.c)
 *     KeTrackEnclaveTbFlush @ 0x14050F974 (KeTrackEnclaveTbFlush.c)
 *     KeCreateEnclave @ 0x1408B707C (KeCreateEnclave.c)
 *     KeDebugWriteEnclaveMemory @ 0x1408B723C (KeDebugWriteEnclaveMemory.c)
 *     KeInitializeEnclave @ 0x1408B72C8 (KeInitializeEnclave.c)
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
