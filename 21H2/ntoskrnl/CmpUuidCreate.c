/*
 * XREFs of CmpUuidCreate @ 0x1407167B4
 * Callers:
 *     CmpInitCmRM @ 0x140716078 (CmpInitCmRM.c)
 *     CmSaveKey @ 0x140728BCC (CmSaveKey.c)
 *     CmpStartRMLogs @ 0x140767364 (CmpStartRMLogs.c)
 *     CmpVolumeContextStart @ 0x1407D0184 (CmpVolumeContextStart.c)
 *     CmSaveMergedKeys @ 0x14087CA90 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x14087CF5C (CmpLoadHiveVolatile.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140257490 (KeDelayExecutionThread.c)
 *     ExUuidCreate @ 0x1407208B0 (ExUuidCreate.c)
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
