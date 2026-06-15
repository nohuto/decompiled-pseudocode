/*
 * XREFs of sub_1800C5CB0 @ 0x1800C5CB0
 * Callers:
 *     sub_1800C5A78 @ 0x1800C5A78 (sub_1800C5A78.c)
 *     sub_1800F2D78 @ 0x1800F2D78 (sub_1800F2D78.c)
 *     sub_1800F43B0 @ 0x1800F43B0 (sub_1800F43B0.c)
 *     sub_1800F4A10 @ 0x1800F4A10 (sub_1800F4A10.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 __fastcall sub_1800C5CB0(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = (__int64)a1;
  if ( !a2 )
    sub_1800B8610(-2147467259);
  if ( a2 != (__int64 *)*a1 )
    a1 = (__int64 *)a2[1];
  *a1 = *a2;
  v3 = a2[1];
  if ( a2 == *(__int64 **)(v2 + 8) )
    *(_QWORD *)(v2 + 8) = v3;
  else
    *(_QWORD *)(*a2 + 8) = v3;
  return sub_1800BBCBC(v2, a2);
}
