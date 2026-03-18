/*
 * XREFs of KiEncls @ 0x1404205F0
 * Callers:
 *     KeAddEnclavePage @ 0x14056D1E8 (KeAddEnclavePage.c)
 *     KeBlockEnclavePage @ 0x14056D354 (KeBlockEnclavePage.c)
 *     KeCanChangeEnclavePageProtection @ 0x14056D39C (KeCanChangeEnclavePageProtection.c)
 *     KeChangeEnclavePageProtection @ 0x14056D45C (KeChangeEnclavePageProtection.c)
 *     KeCreateEnclaveMetadataPage @ 0x14056D55C (KeCreateEnclaveMetadataPage.c)
 *     KeOutPageEnclavePage @ 0x14056D598 (KeOutPageEnclavePage.c)
 *     KeRemoveEnclavePage @ 0x14056D650 (KeRemoveEnclavePage.c)
 *     KeTrackEnclaveTbFlush @ 0x14056D68C (KeTrackEnclaveTbFlush.c)
 *     KeCreateEnclave @ 0x1409614F8 (KeCreateEnclave.c)
 *     KeDebugWriteEnclaveMemory @ 0x1409616B0 (KeDebugWriteEnclaveMemory.c)
 *     KeInitializeEnclave @ 0x140961734 (KeInitializeEnclave.c)
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
