/*
 * XREFs of BiIsSynchFirmwareEntries @ 0x14039B484
 * Callers:
 *     BcdForciblyUnloadStore @ 0x1407792D8 (BcdForciblyUnloadStore.c)
 *     BcdCloseStore @ 0x140782414 (BcdCloseStore.c)
 * Callees:
 *     <none>
 */

bool __fastcall BiIsSynchFirmwareEntries(char a1)
{
  return (a1 & 2) == 0;
}
