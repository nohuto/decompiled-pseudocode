/*
 * XREFs of sub_18006915C @ 0x18006915C
 * Callers:
 *     sub_18007D090 @ 0x18007D090 (sub_18007D090.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800B7E08 @ 0x1800B7E08 (sub_1800B7E08.c)
 */

__int64 __fastcall sub_18006915C(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    sub_1800B7E08(*a1);
    return sub_18006A148(v1, 408LL);
  }
  return result;
}
