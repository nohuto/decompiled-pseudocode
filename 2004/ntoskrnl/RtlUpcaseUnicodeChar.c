/*
 * XREFs of RtlUpcaseUnicodeChar @ 0x140609130
 * Callers:
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x14025FFA0 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     towupper @ 0x1403D07D0 (towupper.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x1405CD250 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     VrpAllocateDiffHiveEntry @ 0x1405CD3C0 (VrpAllocateDiffHiveEntry.c)
 *     PfpRpFileKeyUpdate @ 0x140608C00 (PfpRpFileKeyUpdate.c)
 *     VfUtilPrintCheckinString @ 0x1409C38F0 (VfUtilPrintCheckinString.c)
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
