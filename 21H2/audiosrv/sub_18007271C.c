/*
 * XREFs of sub_18007271C @ 0x18007271C
 * Callers:
 *     sub_180054490 @ 0x180054490 (sub_180054490.c)
 * Callees:
 *     sub_1800D8E60 @ 0x1800D8E60 (sub_1800D8E60.c)
 */

_QWORD *__fastcall sub_18007271C(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // rbx
  _OWORD *v4; // rax
  _OWORD *v5; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
  {
    sub_1800D8E60(retaddr, 4950LL, "onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h");
    __debugbreak();
  }
  v3 = a2;
  v4 = CoTaskMemAlloc(16 * a2);
  *a1 = v4;
  if ( v4 )
  {
    v5 = &v4[v3];
    while ( v4 != v5 )
      *v4++ = 0LL;
  }
  return a1;
}
