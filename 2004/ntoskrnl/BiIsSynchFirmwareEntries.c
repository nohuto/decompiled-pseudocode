/*
 * XREFs of BiIsSynchFirmwareEntries @ 0x1403986F8
 * Callers:
 *     BcdForciblyUnloadStore @ 0x1407662F8 (BcdForciblyUnloadStore.c)
 *     BcdCloseStore @ 0x140770034 (BcdCloseStore.c)
 * Callees:
 *     <none>
 */

bool __fastcall BiIsSynchFirmwareEntries(char a1)
{
  return (a1 & 2) == 0;
}
