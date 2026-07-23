/*
 * XREFs of BiExportStoreAlterationsToFirmware @ 0x14076652C
 * Callers:
 *     BcdForciblyUnloadStore @ 0x1407662F8 (BcdForciblyUnloadStore.c)
 *     BiCloseStore @ 0x14076F920 (BiCloseStore.c)
 * Callees:
 *     BiGetFirmwareType @ 0x1407725FC (BiGetFirmwareType.c)
 *     BiExportStoreAlterationsToEfi @ 0x14096EA48 (BiExportStoreAlterationsToEfi.c)
 */

__int64 __fastcall BiExportStoreAlterationsToFirmware(HANDLE BcdStoreHandle)
{
  int v2; // eax
  int v4; // eax

  v2 = BiGetFirmwareType() - 1;
  if ( !v2 )
    return 0LL;
  v4 = v2 - 1;
  if ( !v4 )
    return BiExportStoreAlterationsToEfi(BcdStoreHandle);
  if ( v4 == 1 )
    return 0LL;
  return 3221225659LL;
}
