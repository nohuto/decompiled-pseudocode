/*
 * XREFs of ndisIfFindStackEntry @ 0x1C0026120
 * Callers:
 *     NdisIfAddIfStackEntry @ 0x1C0025910 (NdisIfAddIfStackEntry.c)
 *     NdisIfDeleteIfStackEntry @ 0x1C00B1670 (NdisIfDeleteIfStackEntry.c)
 * Callees:
 *     <none>
 */

PVOID *__fastcall ndisIfFindStackEntry(int a1, int a2)
{
  PVOID *v2; // rax
  __int64 v3; // r8

  v2 = (PVOID *)qword_1C00E4B28;
  v3 = 0LL;
  while ( v2 != &qword_1C00E4B28 )
  {
    if ( *((_DWORD *)v2 + 4) == a1 && *((_DWORD *)v2 + 5) == a2 )
      return v2;
    v2 = (PVOID *)*v2;
  }
  return (PVOID *)v3;
}
