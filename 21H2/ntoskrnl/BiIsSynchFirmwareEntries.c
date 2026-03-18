/*
 * XREFs of BiIsSynchFirmwareEntries @ 0x1403A78AC
 * Callers:
 *     BcdForciblyUnloadStore @ 0x1408072C0 (BcdForciblyUnloadStore.c)
 *     BcdCloseStore @ 0x1408124A0 (BcdCloseStore.c)
 * Callees:
 *     <none>
 */

bool __fastcall BiIsSynchFirmwareEntries(char a1)
{
  return (a1 & 2) == 0;
}
