/*
 * XREFs of BiReleaseBcdSyncMutant @ 0x140784934
 * Callers:
 *     BcdForciblyUnloadStore @ 0x140779498 (BcdForciblyUnloadStore.c)
 *     BcdFlushStore @ 0x14077A454 (BcdFlushStore.c)
 *     BcdCloseStore @ 0x1407825D4 (BcdCloseStore.c)
 *     BcdOpenStore @ 0x140783008 (BcdOpenStore.c)
 *     BiDeleteElement @ 0x14078335C (BiDeleteElement.c)
 *     BcdQueryObject @ 0x1407834C4 (BcdQueryObject.c)
 *     BcdOpenObject @ 0x140783C00 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140783D8C (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x14078419C (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x140784380 (BcdGetElementDataWithFlags.c)
 *     SepSecureBootCorrectBcd @ 0x140924348 (SepSecureBootCorrectBcd.c)
 *     BcdCreateObject @ 0x14096EDF8 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x14096EE90 (BcdDeleteObject.c)
 *     BcdEnumerateObjects @ 0x14096EEEC (BcdEnumerateObjects.c)
 * Callees:
 *     ZwReleaseMutant @ 0x1403FA980 (ZwReleaseMutant.c)
 */

NTSTATUS __fastcall BiReleaseBcdSyncMutant(char a1)
{
  NTSTATUS result; // eax

  if ( !a1 && BcdMutantHandle != (HANDLE)-1LL )
    return ZwReleaseMutant(BcdMutantHandle, 0LL);
  return result;
}
