/*
 * XREFs of KiEncls @ 0x1403FF060
 * Callers:
 *     KeAddEnclavePage @ 0x140514F58 (KeAddEnclavePage.c)
 *     KeBlockEnclavePage @ 0x1405150CC (KeBlockEnclavePage.c)
 *     KeCanChangeEnclavePageProtection @ 0x14051511C (KeCanChangeEnclavePageProtection.c)
 *     KeChangeEnclavePageProtection @ 0x1405151E4 (KeChangeEnclavePageProtection.c)
 *     KeCreateEnclaveMetadataPage @ 0x1405152EC (KeCreateEnclaveMetadataPage.c)
 *     KeOutPageEnclavePage @ 0x140515330 (KeOutPageEnclavePage.c)
 *     KeRemoveEnclavePage @ 0x1405153F0 (KeRemoveEnclavePage.c)
 *     KeTrackEnclaveTbFlush @ 0x140515434 (KeTrackEnclaveTbFlush.c)
 *     KeCreateEnclave @ 0x1408BB49C (KeCreateEnclave.c)
 *     KeDebugWriteEnclaveMemory @ 0x1408BB65C (KeDebugWriteEnclaveMemory.c)
 *     KeInitializeEnclave @ 0x1408BB6E8 (KeInitializeEnclave.c)
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
