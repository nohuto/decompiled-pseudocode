/*
 * XREFs of sub_1800208A8 @ 0x1800208A8
 * Callers:
 *     sub_180024B60 @ 0x180024B60 (sub_180024B60.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x180026DC8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

_QWORD *__fastcall sub_1800208A8(_QWORD *a1, int a2)
{
  _BYTE *v2; // r9
  unsigned int v3; // r8d
  unsigned int v5; // r8d
  _BYTE v7[6]; // [rsp+52h] [rbp-16h] BYREF

  v2 = v7;
  v3 = a2;
  if ( a2 >= 0 )
  {
    do
    {
      v2 -= 2;
      *(_WORD *)v2 = v3 % 0xA + 48;
      v3 /= 0xAu;
    }
    while ( v3 );
  }
  else
  {
    v5 = -a2;
    do
    {
      v2 -= 2;
      *(_WORD *)v2 = v5 % 0xA + 48;
      v5 /= 0xAu;
    }
    while ( v5 );
    v2 -= 2;
    *(_WORD *)v2 = 45;
  }
  a1[2] = 0LL;
  a1[3] = 7LL;
  *(_WORD *)a1 = 0;
  if ( v2 != v7 )
    std::wstring::assign(a1);
  return a1;
}
