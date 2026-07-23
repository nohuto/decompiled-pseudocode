/*
 * XREFs of HalpFindGhesEntry @ 0x1404CFC38
 * Callers:
 *     HalpGenInitialRead @ 0x1409A857C (HalpGenInitialRead.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall HalpFindGhesEntry(int a1, __int64 **a2)
{
  __int64 *result; // rax

  for ( result = *a2; result != (__int64 *)a2; result = (__int64 *)*result )
  {
    if ( *((_DWORD *)result + 29) == a1 )
      return result;
  }
  return 0LL;
}
