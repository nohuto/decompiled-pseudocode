/*
 * XREFs of IvtGetContextEntryType @ 0x1404DFF70
 * Callers:
 *     IvtUpdateContextEntry @ 0x1404E0BBC (IvtUpdateContextEntry.c)
 *     IvtUpdateExtendedContextEntry @ 0x1404E0D70 (IvtUpdateExtendedContextEntry.c)
 *     IvtInitializeIommu @ 0x1409A9950 (IvtInitializeIommu.c)
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
