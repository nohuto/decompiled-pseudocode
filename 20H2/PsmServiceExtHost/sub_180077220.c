/*
 * XREFs of sub_180077220 @ 0x180077220
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800460F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     sub_180076E4C @ 0x180076E4C (sub_180076E4C.c)
 *     sub_180076EF0 @ 0x180076EF0 (sub_180076EF0.c)
 *     sub_180076F30 @ 0x180076F30 (sub_180076F30.c)
 *     sub_1800779EC @ 0x1800779EC (sub_1800779EC.c)
 */

__int64 __fastcall sub_180077220(__int64 a1, __int64 *a2)
{
  signed __int64 v2; // rbx
  __int64 v5; // rbx
  void *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // r8
  bool i; // zf
  signed __int64 v12; // rax
  signed __int64 v13; // rbx
  _DWORD *v14; // [rsp+30h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 16);
  *a2 = 0LL;
  if ( v2 >= 0 )
  {
    v7 = operator new(0x20uLL, (const struct std::nothrow_t *)&unk_1800967D8);
    if ( !v7 )
      return 2147942414LL;
    v8 = sub_180076E4C((__int64)v7, a1 - 16);
    v14 = (_DWORD *)v8;
    v9 = v8;
    if ( !v8 )
      return 2147942414LL;
    *(_DWORD *)(v8 + 16) = v2;
    v10 = (v8 >> 1) | 0x8000000000000000uLL;
    v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v10, v2);
    for ( i = v2 == v12; ; i = v12 == v13 )
    {
      v13 = v12;
      if ( i )
      {
        *a2 = (__int64)v14;
        return 0LL;
      }
      if ( v12 < 0 )
        break;
      *(_DWORD *)(v9 + 16) = v12;
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v10, v12);
    }
    sub_180076EF0(v14, 1);
    v5 = 2 * v13;
    sub_180076F30();
  }
  else
  {
    v5 = 2 * v2;
    sub_1800779EC(v5);
  }
  *a2 = v5;
  return 0LL;
}
