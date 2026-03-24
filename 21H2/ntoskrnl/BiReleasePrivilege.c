/*
 * XREFs of BiReleasePrivilege @ 0x140785C38
 * Callers:
 *     BiUnloadHiveByName @ 0x140779404 (BiUnloadHiveByName.c)
 *     BiLoadHive @ 0x140785A48 (BiLoadHive.c)
 *     BiAddBootEntry @ 0x140970138 (BiAddBootEntry.c)
 *     BiDeleteBootEntry @ 0x140971804 (BiDeleteBootEntry.c)
 *     BiDeleteEfiVariable @ 0x140971884 (BiDeleteEfiVariable.c)
 *     BiEnumerateBootEntries @ 0x140971998 (BiEnumerateBootEntries.c)
 *     BiModifyBootEntry @ 0x1409727F0 (BiModifyBootEntry.c)
 *     BiQueryBootEntryOrder @ 0x14097285C (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x140972934 (BiQueryBootOptions.c)
 *     BiSetBootEntryOrder @ 0x140972AC4 (BiSetBootEntryOrder.c)
 *     BiSetBootOptions @ 0x140972B3C (BiSetBootOptions.c)
 *     BiTranslateFilePath @ 0x140972D28 (BiTranslateFilePath.c)
 *     SiGetEspFromFirmware @ 0x140973FA8 (SiGetEspFromFirmware.c)
 * Callees:
 *     ZwSetInformationThread @ 0x1403FA540 (ZwSetInformationThread.c)
 *     BiAdjustPrivilege @ 0x140785D10 (BiAdjustPrivilege.c)
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
