/*
 * XREFs of PsspDumpObject_Mutant @ 0x4B387F60
 * Callers:
 *     <none>
 * Callees:
 *     _NtQueryMutant@20 @ 0x4B2F3ED0 (_NtQueryMutant@20.c)
 */

int __stdcall PsspDumpObject_Mutant(int a1, int a2, unsigned int a3, _DWORD *a4)
{
  int result; // eax

  *a4 = 0;
  if ( a3 < 0x10 )
    return -1073741789;
  result = NtQueryMutant(a1, 0, a2, 8, (int)a4);
  if ( result >= 0 && (result = NtQueryMutant(a1, 1, a2 + 8, 8, 0), result >= 0) )
    *a4 += 8;
  else
    *a4 = 0;
  return result;
}
