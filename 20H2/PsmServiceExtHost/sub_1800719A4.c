/*
 * XREFs of sub_1800719A4 @ 0x1800719A4
 * Callers:
 *     sub_1800712C4 @ 0x1800712C4 (sub_1800712C4.c)
 *     sub_180071664 @ 0x180071664 (sub_180071664.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800719A4(int a1, _QWORD *a2)
{
  int v2; // ecx

  if ( a1 )
  {
    v2 = a1 - 1;
    if ( !v2 )
      return a2[5];
    if ( v2 != 1 )
      return 0LL;
  }
  return *a2;
}
