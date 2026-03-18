/*
 * XREFs of BiIsSynchFirmwareEntries @ 0x140397F64
 * Callers:
 *     BcdForciblyUnloadStore @ 0x140764944 (BcdForciblyUnloadStore.c)
 *     BcdCloseStore @ 0x14076DC24 (BcdCloseStore.c)
 * Callees:
 *     <none>
 */

bool __fastcall BiIsSynchFirmwareEntries(char a1)
{
  return (a1 & 2) == 0;
}
