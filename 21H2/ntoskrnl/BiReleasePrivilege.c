/*
 * XREFs of BiReleasePrivilege @ 0x140785DF8
 * Callers:
 *     BiUnloadHiveByName @ 0x1407795C4 (BiUnloadHiveByName.c)
 *     BiLoadHive @ 0x140785C08 (BiLoadHive.c)
 *     BiAddBootEntry @ 0x140970318 (BiAddBootEntry.c)
 *     BiDeleteBootEntry @ 0x1409719E4 (BiDeleteBootEntry.c)
 *     BiDeleteEfiVariable @ 0x140971A64 (BiDeleteEfiVariable.c)
 *     BiEnumerateBootEntries @ 0x140971B78 (BiEnumerateBootEntries.c)
 *     BiModifyBootEntry @ 0x1409729D0 (BiModifyBootEntry.c)
 *     BiQueryBootEntryOrder @ 0x140972A3C (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x140972B14 (BiQueryBootOptions.c)
 *     BiSetBootEntryOrder @ 0x140972CA4 (BiSetBootEntryOrder.c)
 *     BiSetBootOptions @ 0x140972D1C (BiSetBootOptions.c)
 *     BiTranslateFilePath @ 0x140972F08 (BiTranslateFilePath.c)
 *     SiGetEspFromFirmware @ 0x140974188 (SiGetEspFromFirmware.c)
 * Callees:
 *     ZwSetInformationThread @ 0x1403FA720 (ZwSetInformationThread.c)
 *     BiAdjustPrivilege @ 0x140785ED0 (BiAdjustPrivilege.c)
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
