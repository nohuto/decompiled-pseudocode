/*
 * XREFs of KiEncls @ 0x1403FCDC0
 * Callers:
 *     KeAddEnclavePage @ 0x140513418 (KeAddEnclavePage.c)
 *     KeBlockEnclavePage @ 0x14051358C (KeBlockEnclavePage.c)
 *     KeCanChangeEnclavePageProtection @ 0x1405135DC (KeCanChangeEnclavePageProtection.c)
 *     KeChangeEnclavePageProtection @ 0x1405136A4 (KeChangeEnclavePageProtection.c)
 *     KeCreateEnclaveMetadataPage @ 0x1405137AC (KeCreateEnclaveMetadataPage.c)
 *     KeOutPageEnclavePage @ 0x1405137F0 (KeOutPageEnclavePage.c)
 *     KeRemoveEnclavePage @ 0x1405138B0 (KeRemoveEnclavePage.c)
 *     KeTrackEnclaveTbFlush @ 0x1405138F4 (KeTrackEnclaveTbFlush.c)
 *     KeCreateEnclave @ 0x1408BDFBC (KeCreateEnclave.c)
 *     KeDebugWriteEnclaveMemory @ 0x1408BE17C (KeDebugWriteEnclaveMemory.c)
 *     KeInitializeEnclave @ 0x1408BE208 (KeInitializeEnclave.c)
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
