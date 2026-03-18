/*
 * XREFs of BiAcquireBcdSyncMutant @ 0x14081369C
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
 *     ZwWaitForSingleObject @ 0x14041B7E0 (ZwWaitForSingleObject.c)
 *     BiGetCurrentBcdMutantHandle @ 0x1408136FC (BiGetCurrentBcdMutantHandle.c)
 */

NTSTATUS __fastcall BiAcquireBcdSyncMutant(char a1)
{
  NTSTATUS result; // eax
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  if ( a1 )
    return 0;
  result = BiGetCurrentBcdMutantHandle(&v2);
  if ( result < 0 )
    return result;
  if ( v2 == -1 )
    return 0;
  Timeout.QuadPart = -600000000LL;
  result = ZwWaitForSingleObject(BcdMutantHandle, 0, &Timeout);
  if ( result == 258 )
    return -1073741823;
  return result;
}
