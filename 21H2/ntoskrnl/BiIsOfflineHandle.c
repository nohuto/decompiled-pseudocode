/*
 * XREFs of BiIsOfflineHandle @ 0x14039B59C
 * Callers:
 *     BcdForciblyUnloadStore @ 0x1407792D8 (BcdForciblyUnloadStore.c)
 *     BcdFlushStore @ 0x14077A294 (BcdFlushStore.c)
 *     BcdCloseStore @ 0x140782414 (BcdCloseStore.c)
 *     BiDeleteElement @ 0x14078319C (BiDeleteElement.c)
 *     BcdQueryObject @ 0x140783304 (BcdQueryObject.c)
 *     BcdOpenObject @ 0x140783A40 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140783BCC (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x140783FDC (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1407841C0 (BcdGetElementDataWithFlags.c)
 *     BcdCreateObject @ 0x14096EC18 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x14096ECB0 (BcdDeleteObject.c)
 *     BcdEnumerateObjects @ 0x14096ED0C (BcdEnumerateObjects.c)
 * Callees:
 *     <none>
 */

char __fastcall BiIsOfflineHandle(char a1)
{
  return a1 & 1;
}
