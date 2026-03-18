/*
 * XREFs of IvtGetContextEntryType @ 0x1404DAFD0
 * Callers:
 *     IvtUpdateContextEntry @ 0x1404DBC1C (IvtUpdateContextEntry.c)
 *     IvtUpdateExtendedContextEntry @ 0x1404DBDA0 (IvtUpdateExtendedContextEntry.c)
 *     IvtInitializeIommu @ 0x1409A6B10 (IvtInitializeIommu.c)
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
