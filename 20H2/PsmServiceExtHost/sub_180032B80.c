/*
 * XREFs of sub_180032B80 @ 0x180032B80
 * Callers:
 *     sub_1800229F0 @ 0x1800229F0 (sub_1800229F0.c)
 *     sub_1800327C0 @ 0x1800327C0 (sub_1800327C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180032B80(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = *(_QWORD *)(a2 + 40);
  if ( *a1 < v2 )
    return 0xFFFFFFFFLL;
  else
    return *a1 > v2;
}
