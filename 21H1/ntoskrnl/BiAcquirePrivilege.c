/*
 * XREFs of BiAcquirePrivilege @ 0x1407714A0
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
 *     RtlImpersonateSelfEx @ 0x1406DD598 (RtlImpersonateSelfEx.c)
 *     BiAdjustPrivilege @ 0x140771520 (BiAdjustPrivilege.c)
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
