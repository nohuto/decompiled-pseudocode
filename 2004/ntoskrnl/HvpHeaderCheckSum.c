/*
 * XREFs of HvpHeaderCheckSum @ 0x1406399EC
 * Callers:
 *     HvpGenerateLogEntryHeader @ 0x1402719D0 (HvpGenerateLogEntryHeader.c)
 *     HvpGetHiveHeader @ 0x1406398B4 (HvpGetHiveHeader.c)
 *     HvHiveStartFileBacked @ 0x14063A9A4 (HvHiveStartFileBacked.c)
 *     HvWriteHivePrimaryFile @ 0x1407035FC (HvWriteHivePrimaryFile.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x14070978C (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvWriteExternal @ 0x140717550 (HvWriteExternal.c)
 *     HvHiveStartMemoryBacked @ 0x14075D398 (HvHiveStartMemoryBacked.c)
 *     HvIsInPlaceBaseBlockValid @ 0x1408735A4 (HvIsInPlaceBaseBlockValid.c)
 *     HvSnapshotHiveToOffsetArray @ 0x14087D6FC (HvSnapshotHiveToOffsetArray.c)
 *     HvAnalyzeLogFiles @ 0x14087DAD4 (HvAnalyzeLogFiles.c)
 *     HvpLogInvalidLogHeader @ 0x14087E9F0 (HvpLogInvalidLogHeader.c)
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
