/*
 * XREFs of BiReleasePrivilege @ 0x140781E58
 * Callers:
 *     BiUnloadHiveByName @ 0x140775454 (BiUnloadHiveByName.c)
 *     BiLoadHive @ 0x140781C68 (BiLoadHive.c)
 *     BiAddBootEntry @ 0x140972A20 (BiAddBootEntry.c)
 *     BiDeleteBootEntry @ 0x1409740EC (BiDeleteBootEntry.c)
 *     BiDeleteEfiVariable @ 0x14097416C (BiDeleteEfiVariable.c)
 *     BiEnumerateBootEntries @ 0x140974280 (BiEnumerateBootEntries.c)
 *     BiModifyBootEntry @ 0x1409750D8 (BiModifyBootEntry.c)
 *     BiQueryBootEntryOrder @ 0x140975144 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x14097521C (BiQueryBootOptions.c)
 *     BiSetBootEntryOrder @ 0x1409753AC (BiSetBootEntryOrder.c)
 *     BiSetBootOptions @ 0x140975424 (BiSetBootOptions.c)
 *     BiTranslateFilePath @ 0x140975610 (BiTranslateFilePath.c)
 *     SiGetEspFromFirmware @ 0x140976890 (SiGetEspFromFirmware.c)
 * Callees:
 *     ZwSetInformationThread @ 0x1403F8310 (ZwSetInformationThread.c)
 *     BiAdjustPrivilege @ 0x140781F30 (BiAdjustPrivilege.c)
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
