/*
 * XREFs of BiIsOfflineHandle @ 0x1403A7864
 * Callers:
 *     BcdFlushStore @ 0x1408009E0 (BcdFlushStore.c)
 *     BcdQueryObject @ 0x140800A38 (BcdQueryObject.c)
 *     BiDeleteElement @ 0x14080271C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x140803250 (BcdSetElementDataWithFlags.c)
 *     BcdForciblyUnloadStore @ 0x1408072C0 (BcdForciblyUnloadStore.c)
 *     BcdCloseStore @ 0x1408124A0 (BcdCloseStore.c)
 *     BcdOpenObject @ 0x140812B74 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140812D00 (BcdCloseObject.c)
 *     BcdGetElementDataWithFlags @ 0x140812D44 (BcdGetElementDataWithFlags.c)
 *     BcdSetSystemStore @ 0x140A1CAC4 (BcdSetSystemStore.c)
 *     BcdCreateObject @ 0x140A1CB84 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x140A1CC1C (BcdDeleteObject.c)
 *     BcdEnumerateObjects @ 0x140A1CC78 (BcdEnumerateObjects.c)
 * Callees:
 *     <none>
 */

char __fastcall BiIsOfflineHandle(char a1)
{
  return a1 & 1;
}
