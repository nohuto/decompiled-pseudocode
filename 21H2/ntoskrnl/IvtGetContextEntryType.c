/*
 * XREFs of IvtGetContextEntryType @ 0x1404E01B0
 * Callers:
 *     IvtUpdateContextEntry @ 0x1404E0DFC (IvtUpdateContextEntry.c)
 *     IvtUpdateExtendedContextEntry @ 0x1404E0FB0 (IvtUpdateExtendedContextEntry.c)
 *     IvtInitializeIommu @ 0x1409AA880 (IvtInitializeIommu.c)
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
