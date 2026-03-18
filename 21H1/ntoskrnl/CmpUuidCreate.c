/*
 * XREFs of CmpUuidCreate @ 0x14065AC58
 * Callers:
 *     CmpInitCmRM @ 0x14065A51C (CmpInitCmRM.c)
 *     CmSaveKey @ 0x140714DEC (CmSaveKey.c)
 *     CmpStartRMLogs @ 0x140750AA4 (CmpStartRMLogs.c)
 *     CmpVolumeContextStart @ 0x1407BA4C4 (CmpVolumeContextStart.c)
 *     CmSaveMergedKeys @ 0x14087829C (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x140878768 (CmpLoadHiveVolatile.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 *     ExUuidCreate @ 0x14065B780 (ExUuidCreate.c)
 */

NTSTATUS __fastcall CmpUuidCreate(UUID *Uuid)
{
  NTSTATUS result; // eax
  LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  while ( 1 )
  {
    result = ExUuidCreate(Uuid);
    if ( result != -1073741267 )
      break;
    Interval.QuadPart = -10000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return result;
}
