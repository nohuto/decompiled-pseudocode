/*
 * XREFs of ?StringToHstringVectorParser@@YA?AV?$com_ptr_t@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@PEBG@Z @ 0x180118560
 * Callers:
 *     <none>
 * Callees:
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z @ 0x18002E43C (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D2E0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?find@?$_WChar_traits@G@std@@SAPEBGPEBG_KAEBG@Z @ 0x1800968A8 (-find@-$_WChar_traits@G@std@@SAPEBGPEBG_KAEBG@Z.c)
 *     ??0?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAUHSTRING__@@@1234@Upermission@01234@@Z @ 0x180110560 (--0-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foun.c)
 *     ?substr@?$basic_string_view@GU?$char_traits@G@std@@@std@@QEBA?AV12@_K_K@Z @ 0x18011A050 (-substr@-$basic_string_view@GU-$char_traits@G@std@@@std@@QEBA-AV12@_K_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall StringToHstringVectorParser(__int64 *a1, _WORD *a2)
{
  __int64 v4; // rbx
  void *v5; // rax
  __int64 v6; // rdx
  char v7; // r8
  __int64 v8; // rax
  __int64 v9; // r9
  unsigned __int64 v10; // rsi
  __int64 v11; // r15
  __int16 v12; // r10
  _WORD *v13; // rax
  __int64 v14; // rdi
  __m128i v15; // xmm1
  _WORD *v16; // rax
  __m128i v17; // xmm1
  _QWORD v19[2]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v20[24]; // [rsp+30h] [rbp-18h] BYREF
  __int64 *v21; // [rsp+90h] [rbp+48h] BYREF
  HSTRING string; // [rsp+98h] [rbp+50h] BYREF
  HSTRING v23; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+60h]

  v21 = a1;
  v4 = 0LL;
  v24 = 0LL;
  v5 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v8 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>(
           (__int64)v5,
           v6,
           v7);
    if ( v8 )
      v4 = v8;
    v24 = v4;
  }
  v19[0] = a2;
  v9 = -1LL;
  v10 = -1LL;
  do
    ++v10;
  while ( a2[v10] );
  v19[1] = v10;
  v11 = 0LL;
  v12 = 44;
  LOWORD(v21) = 44;
  if ( v10 && (v13 = std::_WChar_traits<unsigned short>::find(a2, v10, (__int16 *)&v21)) != 0LL )
    v14 = v13 - a2;
  else
    v14 = v9;
  if ( v14 != v9 )
  {
    LOWORD(v21) = v12;
    do
    {
      v15 = *(__m128i *)((__int64 (__fastcall *)(_QWORD *, _BYTE *, __int64, __int64))std::basic_string_view<unsigned short>::substr)(
                          v19,
                          v20,
                          v11,
                          v14 - v11);
      string = 0LL;
      Microsoft::WRL::Wrappers::HString::Set(
        &string,
        (const wchar_t *)v15.m128i_i64[0],
        _mm_srli_si128(v15, 8).m128i_u32[0]);
      (*(void (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v4 + 104LL))(v4, string);
      v11 = v14 + 1;
      if ( v14 + 1 < v10
        && (v16 = std::_WChar_traits<unsigned short>::find(&a2[v11], v10 - v11, (__int16 *)&v21)) != 0LL )
      {
        v14 = v16 - a2;
      }
      else
      {
        v14 = -1LL;
      }
      WindowsDeleteString(string);
      string = 0LL;
      v9 = -1LL;
    }
    while ( v14 != -1 );
  }
  v17 = *(__m128i *)((__int64 (__fastcall *)(_QWORD *, _BYTE *, __int64, __int64))std::basic_string_view<unsigned short>::substr)(
                      v19,
                      v20,
                      v11,
                      v9);
  v23 = 0LL;
  Microsoft::WRL::Wrappers::HString::Set(&v23, (const wchar_t *)v17.m128i_i64[0], _mm_srli_si128(v17, 8).m128i_u32[0]);
  (*(void (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v4 + 104LL))(v4, v23);
  *a1 = v4;
  WindowsDeleteString(v23);
  return a1;
}
