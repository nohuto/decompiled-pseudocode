/*
 * XREFs of ?OnConnected@HotKeyClient@@UEAAJPEAUIMessageProxy@@@Z @ 0x180147FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FB28 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HotKeyClient::OnConnected(HotKeyClient *this, struct IMessageProxy *a2, __int64 a3)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int64 v6; // rcx
  int v7; // eax
  __m128i *v8; // rsi
  __m128i *i; // rdi
  __m128i v10; // xmm1
  __int128 v11; // xmm0
  __int64 v12; // rcx
  int v13; // eax
  int v15; // [rsp+28h] [rbp-60h]
  __int128 v16; // [rsp+40h] [rbp-48h] BYREF
  __int128 v17; // [rsp+50h] [rbp-38h] BYREF
  __int128 v18; // [rsp+60h] [rbp-28h]
  __int64 v19; // [rsp+70h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v4 = *((_OWORD *)this + 8);
  v16 = *(_OWORD *)((char *)this + 24);
  LOBYTE(a3) = *((_BYTE *)this + 120);
  v5 = *((_OWORD *)this + 9);
  v17 = v4;
  *(_QWORD *)&v4 = *((_QWORD *)this + 20);
  v6 = *((_QWORD *)this + 10);
  v18 = v5;
  v19 = v4;
  v7 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, __int128 *))(*(_QWORD *)v6 + 24LL))(v6, &v17, a3, &v16);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      221LL,
      (__int64)"mincore\\textinput\\dev\\sharedlibs\\hotkeyclient\\hotkeyclient.cpp",
      (const char *)(unsigned int)v7);
  v8 = (__m128i *)*((_QWORD *)this + 13);
  for ( i = (__m128i *)*((_QWORD *)this + 12); i != v8; i = (__m128i *)((char *)i + 20) )
  {
    v10 = *i;
    v11 = *(_OWORD *)((char *)this + 168);
    v12 = *((_QWORD *)this + 10);
    LODWORD(v18) = i[1].m128i_i32[0];
    v16 = v11;
    LOBYTE(v15) = v18;
    v13 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD, _QWORD, __int32, int))(*(_QWORD *)v12 + 40LL))(
            v12,
            &v16,
            (unsigned int)_mm_cvtsi128_si32(v10),
            (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v10, 8)) | v10.m128i_i32[1],
            _mm_srli_si128(v10, 8).m128i_i32[1],
            v15);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        232LL,
        (__int64)"mincore\\textinput\\dev\\sharedlibs\\hotkeyclient\\hotkeyclient.cpp",
        (const char *)(unsigned int)v13);
  }
  return 0LL;
}
