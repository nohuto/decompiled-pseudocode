/*
 * XREFs of BiCloseStore @ 0x140781EC0
 * Callers:
 *     BcdCloseStore @ 0x1407825D4 (BcdCloseStore.c)
 *     BiOpenSystemStore @ 0x1407839DC (BiOpenSystemStore.c)
 * Callees:
 *     BiSanitizeHandle @ 0x14025166C (BiSanitizeHandle.c)
 *     BiSetFirmwareModified @ 0x14039B5E8 (BiSetFirmwareModified.c)
 *     BiWasFirmwareModified @ 0x14039B61C (BiWasFirmwareModified.c)
 *     BiUnloadHiveByHandle @ 0x14077952C (BiUnloadHiveByHandle.c)
 *     BiExportStoreAlterationsToFirmware @ 0x1407796CC (BiExportStoreAlterationsToFirmware.c)
 *     BiCloseKey @ 0x14078474C (BiCloseKey.c)
 *     BiLogMessage @ 0x140784F5C (BiLogMessage.c)
 */

__int64 __fastcall BiCloseStore(__int64 a1, char a2)
{
  unsigned int v3; // edi
  unsigned __int64 v4; // rax
  void *v5; // rbx
  char v6; // dl
  int v8; // eax

  v3 = 0;
  v4 = BiSanitizeHandle(a1);
  v5 = (void *)v4;
  if ( (v6 & 4) != 0 && BiWasFirmwareModified(v4) )
  {
    BiLogMessage(2LL, L"Exporting alterations to firmware.");
    v8 = BiExportStoreAlterationsToFirmware(v5);
    v3 = v8;
    if ( v8 < 0 )
      BiLogMessage(4LL, L"Failed to export alterations to firmware. Status: %x", (unsigned int)v8);
    else
      BiSetFirmwareModified((__int64)v5, 0);
  }
  if ( (a2 & 2) != 0 )
    BiUnloadHiveByHandle((__int64)v5, 0);
  else
    BiCloseKey(v5);
  return v3;
}
