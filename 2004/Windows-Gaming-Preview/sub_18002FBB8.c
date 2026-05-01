/*
 * XREFs of sub_18002FBB8 @ 0x18002FBB8
 * Callers:
 *     sub_18002F100 @ 0x18002F100 (sub_18002F100.c)
 *     sub_18002F400 @ 0x18002F400 (sub_18002F400.c)
 * Callees:
 *     sub_18000EC88 @ 0x18000EC88 (sub_18000EC88.c)
 *     sub_180011A50 @ 0x180011A50 (sub_180011A50.c)
 *     sub_18002F9B0 @ 0x18002F9B0 (sub_18002F9B0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18002FBB8(HSTRING *a1, __m128i *a2, _QWORD *a3)
{
  volatile signed __int64 *v6; // rdi
  _QWORD *v7; // rbx
  _QWORD *v8; // r14
  _QWORD *v9; // rsi
  HRESULT v10; // ebx
  HSTRING v11; // rax
  HSTRING v12; // rcx
  __int128 v13; // xmm1
  __int128 v15; // [rsp+20h] [rbp-20h] BYREF
  __m128i v16; // [rsp+30h] [rbp-10h]
  HSTRING newString; // [rsp+90h] [rbp+50h] BYREF
  volatile signed __int64 *v18; // [rsp+98h] [rbp+58h]

  *a3 = 0LL;
  v6 = 0LL;
  v18 = 0LL;
  v7 = operator new(0x58uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  v8 = 0LL;
  v9 = 0LL;
  if ( v7 )
  {
    *v7 = &off_18004C570;
    sub_180011A50(v7 + 2);
    v7[7] = 1LL;
    *v7 = off_18004C8C8;
    v7[1] = off_18004C8A8;
    v7[2] = off_18004C860;
    if ( qword_18005ADB0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 8LL))(qword_18005ADB0);
    *v7 = &off_18004CE58;
    v7[1] = off_18004CE38;
    v7[2] = off_18004CDF0;
    v7[8] = 0LL;
    v7[9] = 0LL;
    *((_BYTE *)v7 + 80) = 0;
    v6 = v7;
    v18 = v7;
    v8 = v7;
    v9 = v7;
  }
  if ( v8 )
  {
    v10 = WindowsDuplicateString(*a1, &newString);
    v11 = newString;
    if ( v10 < 0 )
      v11 = 0LL;
    newString = v11;
    if ( v10 >= 0 )
    {
      v16 = *a2;
      BYTE8(v15) = _mm_cvtsi128_si32(_mm_srli_si128(v16, 8));
      if ( BYTE8(v15) )
      {
        *(_QWORD *)&v15 = v16.m128i_i64[0];
        _InterlockedIncrement((volatile signed __int32 *)v16.m128i_i64[0]);
        v6 = v18;
      }
      else
      {
        *(_QWORD *)&v15 = v16.m128i_i64[0];
        if ( v16.m128i_i64[0] )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16.m128i_i64[0] + 8LL))(v16.m128i_i64[0]);
      }
      v10 = 0;
      v12 = (HSTRING)v8[8];
      v8[8] = newString;
      newString = v12;
      v13 = *(_OWORD *)(v8 + 9);
      *(_OWORD *)(v8 + 9) = v15;
      v15 = v13;
      sub_18000EC88((__int64)&v15);
    }
    WindowsDeleteString(newString);
    if ( v10 >= 0 )
    {
      v6 = 0LL;
      *a3 = v9;
      v9 = 0LL;
    }
  }
  else
  {
    v10 = -2147024882;
  }
  if ( v9 )
    sub_18002F9B0(v6);
  return (unsigned int)v10;
}
