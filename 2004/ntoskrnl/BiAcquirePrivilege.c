/*
 * XREFs of BiAcquirePrivilege @ 0x1407738B0
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
 *     RtlImpersonateSelfEx @ 0x1407001F8 (RtlImpersonateSelfEx.c)
 *     BiAdjustPrivilege @ 0x140773930 (BiAdjustPrivilege.c)
 */

NTSTATUS __fastcall BiAcquirePrivilege(unsigned int a1, __int64 a2)
{
  __int64 v2; // rsi
  char v4; // bl
  NTSTATUS result; // eax
  int v6; // edi
  char v7; // [rsp+50h] [rbp+18h] BYREF
  __int64 ThreadInformation; // [rsp+58h] [rbp+20h] BYREF

  v2 = a2;
  v7 = 0;
  if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 8) != 0 )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    result = RtlImpersonateSelfEx(SecurityImpersonation, 0, 0LL);
    if ( result < 0 )
      return result;
  }
  LOBYTE(a2) = 1;
  v6 = BiAdjustPrivilege(a1, a2, &v7);
  if ( v6 < 0 )
  {
    if ( !v4 )
    {
      ThreadInformation = 0LL;
      ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
    }
  }
  else
  {
    *(_BYTE *)(v2 + 4) = v7;
    *(_BYTE *)(v2 + 5) = v4;
    *(_DWORD *)v2 = a1;
  }
  return v6;
}
