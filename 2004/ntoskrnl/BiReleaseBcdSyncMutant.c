/*
 * XREFs of BiReleaseBcdSyncMutant @ 0x140772394
 * Callers:
 *     BcdForciblyUnloadStore @ 0x1407662F8 (BcdForciblyUnloadStore.c)
 *     BcdFlushStore @ 0x1407672B0 (BcdFlushStore.c)
 *     BcdCloseStore @ 0x140770034 (BcdCloseStore.c)
 *     BcdOpenStore @ 0x140770A68 (BcdOpenStore.c)
 *     BiDeleteElement @ 0x140770DBC (BiDeleteElement.c)
 *     BcdQueryObject @ 0x140770F24 (BcdQueryObject.c)
 *     BcdOpenObject @ 0x140771660 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x1407717EC (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x140771BFC (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x140771DE0 (BcdGetElementDataWithFlags.c)
 *     SepSecureBootCorrectBcd @ 0x140920BF8 (SepSecureBootCorrectBcd.c)
 *     BcdCreateObject @ 0x14096B730 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x14096B7C8 (BcdDeleteObject.c)
 *     BcdEnumerateObjects @ 0x14096B824 (BcdEnumerateObjects.c)
 * Callees:
 *     ZwReleaseMutant @ 0x1403F39C0 (ZwReleaseMutant.c)
 */

NTSTATUS __fastcall BiReleaseBcdSyncMutant(char a1)
{
  NTSTATUS result; // eax

  if ( !a1 && BcdMutantHandle != (HANDLE)-1LL )
    return ZwReleaseMutant(BcdMutantHandle, 0LL);
  return result;
}
