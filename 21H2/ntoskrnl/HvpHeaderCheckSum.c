/*
 * XREFs of HvpHeaderCheckSum @ 0x1407248A8
 * Callers:
 *     HvpGenerateLogEntryHeader @ 0x140362310 (HvpGenerateLogEntryHeader.c)
 *     HvHiveStartFileBacked @ 0x140721C68 (HvHiveStartFileBacked.c)
 *     HvpGetHiveHeader @ 0x140724770 (HvpGetHiveHeader.c)
 *     HvWriteHivePrimaryFile @ 0x140725240 (HvWriteHivePrimaryFile.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x14072570C (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvWriteExternal @ 0x140728FA0 (HvWriteExternal.c)
 *     HvHiveStartMemoryBacked @ 0x14076FE14 (HvHiveStartMemoryBacked.c)
 *     HvIsInPlaceBaseBlockValid @ 0x140876A74 (HvIsInPlaceBaseBlockValid.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140880854 (HvSnapshotHiveToOffsetArray.c)
 *     HvAnalyzeLogFiles @ 0x140880C2C (HvAnalyzeLogFiles.c)
 *     HvpLogInvalidLogHeader @ 0x140881B48 (HvpLogInvalidLogHeader.c)
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
