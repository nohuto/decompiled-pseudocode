/*
 * XREFs of BiIsOfflineHandle @ 0x14039ACD0
 * Callers:
 *     BcdForciblyUnloadStore @ 0x140775328 (BcdForciblyUnloadStore.c)
 *     BcdFlushStore @ 0x1407762E0 (BcdFlushStore.c)
 *     BcdCloseStore @ 0x14077E634 (BcdCloseStore.c)
 *     BiDeleteElement @ 0x14077F3BC (BiDeleteElement.c)
 *     BcdQueryObject @ 0x14077F524 (BcdQueryObject.c)
 *     BcdOpenObject @ 0x14077FC60 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14077FDEC (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x1407801FC (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1407803E0 (BcdGetElementDataWithFlags.c)
 *     BcdCreateObject @ 0x140971500 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x140971598 (BcdDeleteObject.c)
 *     BcdEnumerateObjects @ 0x1409715F4 (BcdEnumerateObjects.c)
 * Callees:
 *     <none>
 */

char __fastcall BiIsOfflineHandle(char a1)
{
  return a1 & 1;
}
