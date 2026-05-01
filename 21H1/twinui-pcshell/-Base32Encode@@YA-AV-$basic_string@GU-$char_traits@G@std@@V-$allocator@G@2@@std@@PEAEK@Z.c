/*
 * XREFs of ?Base32Encode@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAEK@Z @ 0x18043C5F0
 * Callers:
 *     ?HashAndBase32Encode@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18043C7B4 (-HashAndBase32Encode@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180115128 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x1801B6E2C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ?GetChars@Base32Encoding@Common@@SAJPEBEKKPEAGPEAK@Z @ 0x1804460FC (-GetChars@Base32Encoding@Common@@SAJPEBEKKPEAGPEAK@Z.c)
 */

// Hidden C++ exception states: #wind=4
unsigned __int16 *__fastcall Base32Encode(unsigned __int16 *a1, const unsigned __int8 *a2, unsigned int a3)
{
  unsigned __int16 *v5; // rax
  unsigned __int16 *v6; // r9
  int Chars; // eax
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v11; // [rsp+70h] [rbp+18h] BYREF

  v11 = a3;
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 3) = 7LL;
  *a1 = 0;
  if ( *((_QWORD *)a1 + 2) < 0xDuLL )
  {
    std::wstring::append(a1, 13LL - *((_QWORD *)a1 + 2), 0);
  }
  else
  {
    v5 = a1;
    if ( *((_QWORD *)a1 + 3) >= 8uLL )
      v5 = *(unsigned __int16 **)a1;
    *((_QWORD *)a1 + 2) = 13LL;
    v5[13] = 0;
  }
  v6 = a1;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    v6 = *(unsigned __int16 **)a1;
  Chars = Common::Base32Encoding::GetChars(a2, (unsigned int)a2, 0xDu, v6, &v11);
  if ( Chars < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      71LL,
      (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\certsignerhash.cpp",
      (const char *)(unsigned int)Chars);
    __debugbreak();
  }
  if ( v11 != 13 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      72LL,
      (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\certsignerhash.cpp",
      v8);
    __debugbreak();
  }
  return a1;
}
