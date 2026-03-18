/*
 * XREFs of BiIsOfflineHandle @ 0x14039807C
 * Callers:
 *     BcdForciblyUnloadStore @ 0x140764944 (BcdForciblyUnloadStore.c)
 *     BcdFlushStore @ 0x1407658F0 (BcdFlushStore.c)
 *     BcdCloseStore @ 0x14076DC24 (BcdCloseStore.c)
 *     BiDeleteElement @ 0x14076E9AC (BiDeleteElement.c)
 *     BcdQueryObject @ 0x14076EB14 (BcdQueryObject.c)
 *     BcdOpenObject @ 0x14076F250 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14076F3DC (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x14076F7EC (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14076F9D0 (BcdGetElementDataWithFlags.c)
 *     BcdCreateObject @ 0x14096A390 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x14096A428 (BcdDeleteObject.c)
 *     BcdEnumerateObjects @ 0x14096A484 (BcdEnumerateObjects.c)
 * Callees:
 *     <none>
 */

char __fastcall BiIsOfflineHandle(char a1)
{
  return a1 & 1;
}
