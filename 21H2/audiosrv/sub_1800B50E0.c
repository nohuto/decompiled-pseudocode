/*
 * XREFs of sub_1800B50E0 @ 0x1800B50E0
 * Callers:
 *     sub_1800B4B44 @ 0x1800B4B44 (sub_1800B4B44.c)
 * Callees:
 *     sub_1800B5C98 @ 0x1800B5C98 (sub_1800B5C98.c)
 */

__int64 sub_1800B50E0(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, a3);
  v4 = a1;
  sub_1800B5C98(a1, (a2 - a1) >> 1, a3, (__int64 *)va);
  if ( a2 != v4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_WORD *)(v4 + 2 * v5) );
    v4 += 2 * v5;
  }
  return v4;
}
