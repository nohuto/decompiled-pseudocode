/*
 * XREFs of BiReleaseBcdSyncMutant @ 0x1408134D8
 * Callers:
 *     BcdFlushStore @ 0x1408009E0 (BcdFlushStore.c)
 *     BcdQueryObject @ 0x140800A38 (BcdQueryObject.c)
 *     BiDeleteElement @ 0x14080271C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x140803250 (BcdSetElementDataWithFlags.c)
 *     BcdForciblyUnloadStore @ 0x1408072C0 (BcdForciblyUnloadStore.c)
 *     BcdCloseStore @ 0x1408124A0 (BcdCloseStore.c)
 *     BcdOpenStore @ 0x1408125C4 (BcdOpenStore.c)
 *     BcdOpenObject @ 0x140812B74 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140812D00 (BcdCloseObject.c)
 *     BcdGetElementDataWithFlags @ 0x140812D44 (BcdGetElementDataWithFlags.c)
 *     SepSecureBootCorrectBcd @ 0x1409CDCC8 (SepSecureBootCorrectBcd.c)
 *     BcdSetSystemStore @ 0x140A1CAC4 (BcdSetSystemStore.c)
 *     BcdCreateObject @ 0x140A1CB84 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x140A1CC1C (BcdDeleteObject.c)
 *     BcdEnumerateObjects @ 0x140A1CC78 (BcdEnumerateObjects.c)
 * Callees:
 *     ZwReleaseMutant @ 0x14041BB60 (ZwReleaseMutant.c)
 */

__int64 __fastcall BiReleaseBcdSyncMutant(char a1)
{
  __int64 result; // rax

  if ( !a1 && BcdMutantHandle != (HANDLE)-1LL )
    return ZwReleaseMutant((__int64)BcdMutantHandle, 0LL);
  return result;
}
