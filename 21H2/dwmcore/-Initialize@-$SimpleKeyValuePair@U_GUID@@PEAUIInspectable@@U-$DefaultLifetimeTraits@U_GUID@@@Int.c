/*
 * XREFs of ?Initialize@?$SimpleKeyValuePair@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@$00@Internal@Collections@Foundation@Windows@@AEAAJAEBU_GUID@@AEBV?$GitStorageType@UIInspectable@@@detail@XWinRT@@@Z @ 0x180286DB4
 * Callers:
 *     ?Make@?$SimpleKeyValuePair@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@$00@Internal@Collections@Foundation@Windows@@SAJAEBU_GUID@@AEBV?$GitStorageType@UIInspectable@@@detail@XWinRT@@PEAPEAV12345@@Z @ 0x180287714 (-Make@-$SimpleKeyValuePair@U_GUID@@PEAUIInspectable@@U-$DefaultLifetimeTraits@U_GUID@@@Internal@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Construct@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UIInspectable@@@detail@1@V231@@Z @ 0x180280F74 (--$Construct@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV-$GitStorageType@UIInspectab.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAKXZ @ 0x18028836C (-Release@ReferencedGitCookie@-$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAKXZ.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleKeyValuePair<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,1>::Initialize(
        __int64 a1,
        __int128 *a2,
        __int128 *a3)
{
  __int128 v3; // xmm0
  __int128 v5; // xmm6
  int v6; // edi
  __int128 v7; // xmm0
  __m128i v8; // xmm1
  void *v10[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF

  v3 = *a3;
  *(_QWORD *)&v11 = 0LL;
  v5 = *a2;
  BYTE8(v11) = 0;
  *(_OWORD *)v10 = v3;
  v6 = XWinRT::InterfaceLifetimeTraits::Construct<IInspectable>((__int64)&v11, (__m128i *)v10);
  if ( v6 >= 0 )
  {
    v7 = v11;
    *(_OWORD *)(a1 + 64) = v5;
    v8 = *(__m128i *)(a1 + 80);
    *(_OWORD *)(a1 + 80) = v7;
    *(__m128i *)v10 = v8;
    if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v8, 8)) )
    {
      XWinRT::detail::GitStorageType<IInspectable>::ReferencedGitCookie::Release((void *)v8.m128i_i64[0]);
    }
    else if ( v8.m128i_i64[0] )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8.m128i_i64[0] + 16LL))(v8.m128i_i64[0]);
    }
  }
  return (unsigned int)v6;
}
