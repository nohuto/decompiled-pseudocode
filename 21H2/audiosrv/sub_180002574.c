/*
 * XREFs of sub_180002574 @ 0x180002574
 * Callers:
 *     sub_1800024A4 @ 0x1800024A4 (sub_1800024A4.c)
 *     sub_1800DAE04 @ 0x1800DAE04 (sub_1800DAE04.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180002574(int a1, unsigned int a2, int a3, int a4)
{
  __int64 v4; // r10
  int v5; // edx
  int v6; // ecx

  v4 = a2;
  v5 = 0;
  if ( a1 )
    v6 = dword_180160610[v4];
  else
    v6 = dword_1801605B0[v4];
  LOBYTE(v5) = a3 == 0;
  return v5 + 2 * (v6 + (a4 != 0 ? 0x10 : 0));
}
