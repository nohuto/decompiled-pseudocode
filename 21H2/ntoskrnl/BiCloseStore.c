/*
 * XREFs of BiCloseStore @ 0x140811EB0
 * Callers:
 *     BcdCloseStore @ 0x1408124A0 (BcdCloseStore.c)
 *     BiOpenSystemStore @ 0x140813744 (BiOpenSystemStore.c)
 * Callees:
 *     BiSanitizeHandle @ 0x14025DBFC (BiSanitizeHandle.c)
 *     BiSetFirmwareModified @ 0x1403A7718 (BiSetFirmwareModified.c)
 *     BiWasFirmwareModified @ 0x1403A7778 (BiWasFirmwareModified.c)
 *     BiUnloadHiveByHandle @ 0x140807354 (BiUnloadHiveByHandle.c)
 *     BiExportStoreAlterationsToFirmware @ 0x1408074F4 (BiExportStoreAlterationsToFirmware.c)
 *     BiCloseKey @ 0x1408132F0 (BiCloseKey.c)
 *     BiLogMessage @ 0x1408138F0 (BiLogMessage.c)
 */

__int64 __fastcall BiCloseStore(__int64 a1, char a2)
{
  unsigned int v3; // edi
  unsigned __int64 v4; // rax
  __int64 v5; // rbx
  char v6; // dl
  int v8; // eax

  v3 = 0;
  v4 = BiSanitizeHandle(a1);
  v5 = v4;
  if ( (v6 & 4) != 0 && BiWasFirmwareModified(v4) )
  {
    BiLogMessage(2LL, L"Exporting alterations to firmware.");
    v8 = BiExportStoreAlterationsToFirmware(v5);
    v3 = v8;
    if ( v8 < 0 )
      BiLogMessage(4LL, L"Failed to export alterations to firmware. Status: %x", (unsigned int)v8);
    else
      BiSetFirmwareModified(v5, 0);
  }
  if ( (a2 & 2) != 0 )
    BiUnloadHiveByHandle(v5, 0);
  else
    BiCloseKey(v5);
  return v3;
}
