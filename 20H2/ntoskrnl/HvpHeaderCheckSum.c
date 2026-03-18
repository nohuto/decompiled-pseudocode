/*
 * XREFs of HvpHeaderCheckSum @ 0x1405DCB44
 * Callers:
 *     HvpGenerateLogEntryHeader @ 0x140204930 (HvpGenerateLogEntryHeader.c)
 *     HvpGetHiveHeader @ 0x1405DCA0C (HvpGetHiveHeader.c)
 *     HvHiveStartFileBacked @ 0x1405DDBAC (HvHiveStartFileBacked.c)
 *     HvWriteHivePrimaryFile @ 0x1406D670C (HvWriteHivePrimaryFile.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1406DBCEC (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvWriteExternal @ 0x140725510 (HvWriteExternal.c)
 *     HvHiveStartMemoryBacked @ 0x14076BAF8 (HvHiveStartMemoryBacked.c)
 *     HvIsInPlaceBaseBlockValid @ 0x1408790F4 (HvIsInPlaceBaseBlockValid.c)
 *     HvSnapshotHiveToOffsetArray @ 0x1408832C4 (HvSnapshotHiveToOffsetArray.c)
 *     HvAnalyzeLogFiles @ 0x14088369C (HvAnalyzeLogFiles.c)
 *     HvpLogInvalidLogHeader @ 0x1408845B8 (HvpLogInvalidLogHeader.c)
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
