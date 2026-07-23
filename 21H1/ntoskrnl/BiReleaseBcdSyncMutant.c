/*
 * XREFs of BiReleaseBcdSyncMutant @ 0x14076FF84
 * Callers:
 *     BcdForciblyUnloadStore @ 0x140764944 (BcdForciblyUnloadStore.c)
 *     BcdFlushStore @ 0x1407658F0 (BcdFlushStore.c)
 *     BcdCloseStore @ 0x14076DC24 (BcdCloseStore.c)
 *     BcdOpenStore @ 0x14076E658 (BcdOpenStore.c)
 *     BiDeleteElement @ 0x14076E9AC (BiDeleteElement.c)
 *     BcdQueryObject @ 0x14076EB14 (BcdQueryObject.c)
 *     BcdOpenObject @ 0x14076F250 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14076F3DC (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x14076F7EC (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14076F9D0 (BcdGetElementDataWithFlags.c)
 *     SepSecureBootCorrectBcd @ 0x14091F948 (SepSecureBootCorrectBcd.c)
 *     BcdCreateObject @ 0x14096A390 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x14096A428 (BcdDeleteObject.c)
 *     BcdEnumerateObjects @ 0x14096A484 (BcdEnumerateObjects.c)
 * Callees:
 *     ZwReleaseMutant @ 0x1403F2730 (ZwReleaseMutant.c)
 */

NTSTATUS __fastcall BiReleaseBcdSyncMutant(char a1)
{
  NTSTATUS result; // eax

  if ( !a1 && BcdMutantHandle != (HANDLE)-1LL )
    return ZwReleaseMutant(BcdMutantHandle, 0LL);
  return result;
}
