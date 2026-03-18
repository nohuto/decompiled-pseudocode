/*
 * XREFs of CmpUuidCreate @ 0x140710AB8
 * Callers:
 *     CmpInitCmRM @ 0x14071037C (CmpInitCmRM.c)
 *     CmSaveKey @ 0x14072513C (CmSaveKey.c)
 *     CmpStartRMLogs @ 0x140763D74 (CmpStartRMLogs.c)
 *     CmpVolumeContextStart @ 0x1407CBEC4 (CmpVolumeContextStart.c)
 *     CmSaveMergedKeys @ 0x14087F0FC (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x14087F5C8 (CmpLoadHiveVolatile.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402DA450 (KeDelayExecutionThread.c)
 *     ExUuidCreate @ 0x140710ED0 (ExUuidCreate.c)
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
