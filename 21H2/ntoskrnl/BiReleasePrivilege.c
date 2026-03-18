/*
 * XREFs of BiReleasePrivilege @ 0x140813B50
 * Callers:
 *     BiUnloadHiveByName @ 0x1408073EC (BiUnloadHiveByName.c)
 *     BiLoadHive @ 0x140813960 (BiLoadHive.c)
 *     BiAddBootEntry @ 0x140A1E0A0 (BiAddBootEntry.c)
 *     BiDeleteBootEntry @ 0x140A1F760 (BiDeleteBootEntry.c)
 *     BiDeleteEfiVariable @ 0x140A1F7E0 (BiDeleteEfiVariable.c)
 *     BiEnumerateBootEntries @ 0x140A1F8F4 (BiEnumerateBootEntries.c)
 *     BiModifyBootEntry @ 0x140A20758 (BiModifyBootEntry.c)
 *     BiQueryBootEntryOrder @ 0x140A207C4 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x140A2089C (BiQueryBootOptions.c)
 *     BiSetBootEntryOrder @ 0x140A20A2C (BiSetBootEntryOrder.c)
 *     BiSetBootOptions @ 0x140A20AA4 (BiSetBootOptions.c)
 *     BiTranslateFilePath @ 0x140A20C90 (BiTranslateFilePath.c)
 *     SiGetEspFromFirmware @ 0x140A22034 (SiGetEspFromFirmware.c)
 * Callees:
 *     ZwSetInformationThread @ 0x14041B900 (ZwSetInformationThread.c)
 *     BiAdjustPrivilege @ 0x140813C34 (BiAdjustPrivilege.c)
 */

NTSTATUS __fastcall BiReleasePrivilege(unsigned int *a1)
{
  bool v1; // zf
  NTSTATUS result; // eax
  __int64 ThreadInformation; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_BYTE *)a1 + 4) == 0;
  LOBYTE(ThreadInformation) = 0;
  if ( v1 )
    result = BiAdjustPrivilege(*a1, 0LL, &ThreadInformation);
  if ( !*((_BYTE *)a1 + 5) )
  {
    ThreadInformation = 0LL;
    return ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
  }
  return result;
}
