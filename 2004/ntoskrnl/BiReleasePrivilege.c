/*
 * XREFs of BiReleasePrivilege @ 0x140773858
 * Callers:
 *     BiUnloadHiveByName @ 0x140766424 (BiUnloadHiveByName.c)
 *     BiLoadHive @ 0x140773668 (BiLoadHive.c)
 *     BiAddBootEntry @ 0x14096CC50 (BiAddBootEntry.c)
 *     BiDeleteBootEntry @ 0x14096E31C (BiDeleteBootEntry.c)
 *     BiDeleteEfiVariable @ 0x14096E39C (BiDeleteEfiVariable.c)
 *     BiEnumerateBootEntries @ 0x14096E4B0 (BiEnumerateBootEntries.c)
 *     BiModifyBootEntry @ 0x14096F308 (BiModifyBootEntry.c)
 *     BiQueryBootEntryOrder @ 0x14096F374 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x14096F44C (BiQueryBootOptions.c)
 *     BiSetBootEntryOrder @ 0x14096F5DC (BiSetBootEntryOrder.c)
 *     BiSetBootOptions @ 0x14096F654 (BiSetBootOptions.c)
 *     BiTranslateFilePath @ 0x14096F840 (BiTranslateFilePath.c)
 *     SiGetEspFromFirmware @ 0x140970AC0 (SiGetEspFromFirmware.c)
 * Callees:
 *     ZwSetInformationThread @ 0x1403F3760 (ZwSetInformationThread.c)
 *     BiAdjustPrivilege @ 0x140773930 (BiAdjustPrivilege.c)
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
