/*
 * XREFs of HvpHeaderCheckSum @ 0x140687568
 * Callers:
 *     HvpGenerateLogEntryHeader @ 0x1402E1060 (HvpGenerateLogEntryHeader.c)
 *     HvpGetHiveHeader @ 0x140687430 (HvpGetHiveHeader.c)
 *     HvHiveStartFileBacked @ 0x140688524 (HvHiveStartFileBacked.c)
 *     HvWriteHivePrimaryFile @ 0x1406E086C (HvWriteHivePrimaryFile.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1406E5A6C (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvWriteExternal @ 0x1407151C0 (HvWriteExternal.c)
 *     HvHiveStartMemoryBacked @ 0x14075AEB0 (HvHiveStartMemoryBacked.c)
 *     HvIsInPlaceBaseBlockValid @ 0x1408722B4 (HvIsInPlaceBaseBlockValid.c)
 *     HvAnalyzeLogFiles @ 0x14087C40C (HvAnalyzeLogFiles.c)
 *     HvpLogInvalidLogHeader @ 0x14087D328 (HvpLogInvalidLogHeader.c)
 *     HvSnapshotHiveToOffsetArray @ 0x14087D64C (HvSnapshotHiveToOffsetArray.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpHeaderCheckSum(_DWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  LODWORD(result) = 0;
  v2 = 127LL;
  do
  {
    result = *a1++ ^ (unsigned int)result;
    --v2;
  }
  while ( v2 );
  if ( (_DWORD)result == -1 )
    result = 4294967294LL;
  if ( !(_DWORD)result )
    return 1LL;
  return result;
}
