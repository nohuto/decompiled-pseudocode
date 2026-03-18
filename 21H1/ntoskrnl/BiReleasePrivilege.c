/*
 * XREFs of BiReleasePrivilege @ 0x140771448
 * Callers:
 *     BiUnloadHiveByName @ 0x140764A70 (BiUnloadHiveByName.c)
 *     BiLoadHive @ 0x140771258 (BiLoadHive.c)
 *     BiAddBootEntry @ 0x14096B8B0 (BiAddBootEntry.c)
 *     BiDeleteBootEntry @ 0x14096CF7C (BiDeleteBootEntry.c)
 *     BiDeleteEfiVariable @ 0x14096CFFC (BiDeleteEfiVariable.c)
 *     BiEnumerateBootEntries @ 0x14096D110 (BiEnumerateBootEntries.c)
 *     BiModifyBootEntry @ 0x14096DF68 (BiModifyBootEntry.c)
 *     BiQueryBootEntryOrder @ 0x14096DFD4 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x14096E0AC (BiQueryBootOptions.c)
 *     BiSetBootEntryOrder @ 0x14096E23C (BiSetBootEntryOrder.c)
 *     BiSetBootOptions @ 0x14096E2B4 (BiSetBootOptions.c)
 *     BiTranslateFilePath @ 0x14096E4A0 (BiTranslateFilePath.c)
 *     SiGetEspFromFirmware @ 0x14096F720 (SiGetEspFromFirmware.c)
 * Callees:
 *     ZwSetInformationThread @ 0x1403F24D0 (ZwSetInformationThread.c)
 *     BiAdjustPrivilege @ 0x140771520 (BiAdjustPrivilege.c)
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
