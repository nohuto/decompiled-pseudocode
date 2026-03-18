/*
 * XREFs of BiIsSynchFirmwareEntries @ 0x14039ABB8
 * Callers:
 *     BcdForciblyUnloadStore @ 0x140775328 (BcdForciblyUnloadStore.c)
 *     BcdCloseStore @ 0x14077E634 (BcdCloseStore.c)
 * Callees:
 *     <none>
 */

bool __fastcall BiIsSynchFirmwareEntries(char a1)
{
  return (a1 & 2) == 0;
}
