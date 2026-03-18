/*
 * XREFs of RtlUpcaseUnicodeChar @ 0x14063E280
 * Callers:
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x1402B8FD0 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     towupper @ 0x1403CF990 (towupper.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x1405CBE80 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     VrpAllocateDiffHiveEntry @ 0x1405CBFF0 (VrpAllocateDiffHiveEntry.c)
 *     PfpRpFileKeyUpdate @ 0x14063DD50 (PfpRpFileKeyUpdate.c)
 *     VfUtilPrintCheckinString @ 0x1409C38E0 (VfUtilPrintCheckinString.c)
 * Callees:
 *     <none>
 */

WCHAR __stdcall RtlUpcaseUnicodeChar(WCHAR SourceCharacter)
{
  if ( SourceCharacter < 0x61u )
    return SourceCharacter;
  if ( SourceCharacter <= 0x7Au )
    return SourceCharacter - 32;
  if ( !Nls844UnicodeUpcaseTable || SourceCharacter < 0xC0u )
    return SourceCharacter;
  return SourceCharacter
       + *(_WORD *)(Nls844UnicodeUpcaseTable
                  + 2LL
                  * ((SourceCharacter & 0xF)
                   + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                       + 2LL
                                                       * (((SourceCharacter >> 4) & 0xF)
                                                        + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                            + 2
                                                                                            * ((unsigned __int64)SourceCharacter >> 8))))));
}
