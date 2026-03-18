/*
 * XREFs of CmpUuidCreate @ 0x1406564B4
 * Callers:
 *     CmpInitCmRM @ 0x140655B64 (CmpInitCmRM.c)
 *     CmSaveKey @ 0x14071717C (CmSaveKey.c)
 *     CmpStartRMLogs @ 0x140755134 (CmpStartRMLogs.c)
 *     CmpVolumeContextStart @ 0x1407BD634 (CmpVolumeContextStart.c)
 *     CmSaveMergedKeys @ 0x14087958C (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x140879A58 (CmpLoadHiveVolatile.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402BC230 (KeDelayExecutionThread.c)
 *     ExUuidCreate @ 0x140657460 (ExUuidCreate.c)
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
