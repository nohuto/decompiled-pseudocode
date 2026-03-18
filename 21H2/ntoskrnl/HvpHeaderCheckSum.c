/*
 * XREFs of HvpHeaderCheckSum @ 0x140AB41B0
 * Callers:
 *     HvpGenerateLogEntryHeader @ 0x14020A48C (HvpGenerateLogEntryHeader.c)
 *     HvWriteExternal @ 0x14065A848 (HvWriteExternal.c)
 *     HvHiveStartFileBacked @ 0x14068B3E0 (HvHiveStartFileBacked.c)
 *     HvpGetHiveHeader @ 0x14068E2EC (HvpGetHiveHeader.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x14068EE60 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvWriteHivePrimaryFile @ 0x14068F1F8 (HvWriteHivePrimaryFile.c)
 *     HvHiveStartMemoryBacked @ 0x14068F7C4 (HvHiveStartMemoryBacked.c)
 *     HvRecoverFlushProtocolStateFromFiles @ 0x14091A344 (HvRecoverFlushProtocolStateFromFiles.c)
 *     HvIsInPlaceBaseBlockValid @ 0x14091D508 (HvIsInPlaceBaseBlockValid.c)
 *     HvAnalyzeLogFiles @ 0x1409246D8 (HvAnalyzeLogFiles.c)
 *     HvApplyLogFiles @ 0x140924C14 (HvApplyLogFiles.c)
 *     HvpLogInvalidLogHeader @ 0x140925768 (HvpLogInvalidLogHeader.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140AB4C18 (HvSnapshotHiveToOffsetArray.c)
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
    return 4294967294LL;
  if ( !(_DWORD)result )
    return 1LL;
  return result;
}
