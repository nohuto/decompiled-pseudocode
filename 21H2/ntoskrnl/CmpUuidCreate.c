/*
 * XREFs of CmpUuidCreate @ 0x1407435A8
 * Callers:
 *     CmSaveKey @ 0x14065A44C (CmSaveKey.c)
 *     CmpStartRMLogs @ 0x140742980 (CmpStartRMLogs.c)
 *     CmpInitCmRM @ 0x140742E3C (CmpInitCmRM.c)
 *     CmpVolumeContextStart @ 0x140857634 (CmpVolumeContextStart.c)
 *     CmSaveMergedKeys @ 0x14090CFF8 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x14090D4E8 (CmpLoadHiveVolatile.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     ExUuidCreate @ 0x140681B30 (ExUuidCreate.c)
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
