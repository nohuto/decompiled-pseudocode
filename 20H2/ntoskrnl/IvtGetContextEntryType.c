/*
 * XREFs of IvtGetContextEntryType @ 0x1404DE560
 * Callers:
 *     IvtUpdateContextEntry @ 0x1404DF1AC (IvtUpdateContextEntry.c)
 *     IvtUpdateExtendedContextEntry @ 0x1404DF330 (IvtUpdateExtendedContextEntry.c)
 *     IvtInitializeIommu @ 0x1409ACA80 (IvtInitializeIommu.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall IvtGetContextEntryType(char a1, char a2)
{
  unsigned __int64 result; // rax

  result = 0LL;
  if ( a1 )
    return (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 5;
  if ( !a2 )
    return 2LL;
  return result;
}
