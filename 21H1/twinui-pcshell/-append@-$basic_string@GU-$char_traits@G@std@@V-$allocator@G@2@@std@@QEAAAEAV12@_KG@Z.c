/*
 * XREFs of ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x1801B6E2C
 * Callers:
 *     ?EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ @ 0x1801B3FE0 (-EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ.c)
 *     ?GetDisplayNameFromWindow@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHWND__@@@Z @ 0x18043B7D0 (-GetDisplayNameFromWindow@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEA.c)
 *     ?Base32Encode@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAEK@Z @ 0x18043C5F0 (-Base32Encode@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAEK@Z.c)
 * Callees:
 *     ??$_Reallocate_grow_by@V_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@Z @ 0x1801B2B7C (--$_Reallocate_grow_by@V_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@-$basic_string@GU-$char_t.c)
 */

_QWORD *__fastcall std::wstring::append(_QWORD *a1, unsigned __int64 a2, __int16 a3)
{
  __int64 v4; // rcx
  bool v5; // cf
  __int64 v6; // r11
  _QWORD *v7; // r9
  __int16 *v8; // rdi
  unsigned __int64 i; // rcx

  v4 = a1[2];
  if ( a2 > a1[3] - v4 )
    return std::wstring::_Reallocate_grow_by<_lambda_b70241e9b5ebaad244db3e52d52cab17_,unsigned __int64,unsigned short>(
             a1,
             a2,
             0LL,
             a2,
             a3);
  v5 = a1[3] < 8uLL;
  v6 = v4 + a2;
  a1[2] = v4 + a2;
  v7 = a1;
  if ( !v5 )
    v7 = (_QWORD *)*a1;
  v8 = (__int16 *)v7 + v4;
  if ( a2 )
  {
    for ( i = a2; i; --i )
      *v8++ = a3;
  }
  *((_WORD *)v7 + v6) = 0;
  return a1;
}
