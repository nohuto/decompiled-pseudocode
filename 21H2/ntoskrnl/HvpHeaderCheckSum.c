/*
 * XREFs of HvpHeaderCheckSum @ 0x1406FC8D4
 * Callers:
 *     HvpGenerateLogEntryHeader @ 0x1402F7170 (HvpGenerateLogEntryHeader.c)
 *     HvWriteHivePrimaryFile @ 0x140613AFC (HvWriteHivePrimaryFile.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x14061A9CC (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvHiveStartFileBacked @ 0x1406F94C0 (HvHiveStartFileBacked.c)
 *     HvpGetHiveHeader @ 0x1406FC79C (HvpGetHiveHeader.c)
 *     HvWriteExternal @ 0x140729450 (HvWriteExternal.c)
 *     HvHiveStartMemoryBacked @ 0x14076FFD4 (HvHiveStartMemoryBacked.c)
 *     HvIsInPlaceBaseBlockValid @ 0x140876BD4 (HvIsInPlaceBaseBlockValid.c)
 *     HvSnapshotHiveToOffsetArray @ 0x1408809B4 (HvSnapshotHiveToOffsetArray.c)
 *     HvAnalyzeLogFiles @ 0x140880D8C (HvAnalyzeLogFiles.c)
 *     HvpLogInvalidLogHeader @ 0x140881CA8 (HvpLogInvalidLogHeader.c)
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
