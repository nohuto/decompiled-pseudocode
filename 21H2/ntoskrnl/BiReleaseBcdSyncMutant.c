/*
 * XREFs of BiReleaseBcdSyncMutant @ 0x140784774
 * Callers:
 *     BcdForciblyUnloadStore @ 0x1407792D8 (BcdForciblyUnloadStore.c)
 *     BcdFlushStore @ 0x14077A294 (BcdFlushStore.c)
 *     BcdCloseStore @ 0x140782414 (BcdCloseStore.c)
 *     BcdOpenStore @ 0x140782E48 (BcdOpenStore.c)
 *     BiDeleteElement @ 0x14078319C (BiDeleteElement.c)
 *     BcdQueryObject @ 0x140783304 (BcdQueryObject.c)
 *     BcdOpenObject @ 0x140783A40 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140783BCC (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x140783FDC (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1407841C0 (BcdGetElementDataWithFlags.c)
 *     SepSecureBootCorrectBcd @ 0x1409241E8 (SepSecureBootCorrectBcd.c)
 *     BcdCreateObject @ 0x14096EC18 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x14096ECB0 (BcdDeleteObject.c)
 *     BcdEnumerateObjects @ 0x14096ED0C (BcdEnumerateObjects.c)
 * Callees:
 *     ZwReleaseMutant @ 0x1403FA7A0 (ZwReleaseMutant.c)
 */

__int64 __fastcall BiReleaseBcdSyncMutant(char a1)
{
  __int64 result; // rax

  if ( !a1 && BcdMutantHandle != (HANDLE)-1LL )
    return ZwReleaseMutant((__int64)BcdMutantHandle, 0LL);
  return result;
}
