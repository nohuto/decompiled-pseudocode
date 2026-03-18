/*
 * XREFs of ?SaveTextureFromSource@CDebugTreeDumper@@AEAAJPEAUID3D11Texture2D@@IPEAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18019753C
 * Callers:
 *     ?DumpBitmapRealization@CDebugTreeDumper@@AEAAJPEAVIBitmapRealization@@PEAX@Z @ 0x18019704C (-DumpBitmapRealization@CDebugTreeDumper@@AEAAJPEAVIBitmapRealization@@PEAX@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180041D34 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180041DA8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014DDBC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_UIntegral_to_buff@G_K@std@@YAPEAGPEAG_K@Z @ 0x180196D34 (--$_UIntegral_to_buff@G_K@std@@YAPEAGPEAG_K@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180197C20 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z @ 0x180198260 (-insert@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z.c)
 *     ?reserve@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K@Z @ 0x18019834C (-reserve@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K@Z.c)
 *     ?DebugSaveTexture@@YAJPEAUID3D11Texture2D@@IAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18020D844 (-DebugSaveTexture@@YAJPEAUID3D11Texture2D@@IAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 */

__int64 __fastcall CDebugTreeDumper::SaveTextureFromSource(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        signed __int64 a4,
        int *a5)
{
  _WORD *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  int *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  int v15; // eax
  unsigned int v16; // ebx
  int v18[4]; // [rsp+20h] [rbp-91h] BYREF
  __int128 v19; // [rsp+30h] [rbp-81h]
  _QWORD v20[2]; // [rsp+40h] [rbp-71h] BYREF
  __m128i v21; // [rsp+50h] [rbp-61h]
  char v22[16]; // [rsp+60h] [rbp-51h] BYREF
  __m128i si128; // [rsp+70h] [rbp-41h]
  _OWORD Src[4]; // [rsp+80h] [rbp-31h] BYREF
  _WORD v25[3]; // [rsp+CAh] [rbp+19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+57h]

  if ( a4 >= 0 )
  {
    v7 = std::_UIntegral_to_buff<unsigned short,unsigned __int64>(v25, a4);
  }
  else
  {
    v7 = std::_UIntegral_to_buff<unsigned short,unsigned __int64>(v25, -a4) - 1;
    *v7 = 45;
  }
  *(_WORD *)v22 = 0;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( v7 != v25 )
    std::wstring::assign(v22, v7, v25 - v7);
  v8 = std::wstring::insert(v22);
  Src[0] = *(_OWORD *)v8;
  Src[1] = *(_OWORD *)(v8 + 16);
  *(_QWORD *)(v8 + 16) = 0LL;
  *(_QWORD *)(v8 + 24) = 7LL;
  *(_WORD *)v8 = 0;
  v9 = std::wstring::append(Src);
  v10 = *(_OWORD *)v9;
  v11 = *(_OWORD *)(v9 + 16);
  *(_QWORD *)(v9 + 16) = 0LL;
  *(_OWORD *)v18 = v10;
  *(_QWORD *)(v9 + 24) = 7LL;
  v19 = v11;
  *(_WORD *)v9 = 0;
  std::wstring::_Tidy_deallocate(Src);
  std::wstring::_Tidy_deallocate(v22);
  if ( a5 != v18 )
  {
    v12 = v18;
    if ( *((_QWORD *)&v19 + 1) >= 8uLL )
      v12 = *(int **)v18;
    std::wstring::assign((char *)a5, v12, v19);
  }
  v13 = *(_QWORD *)(a1 + 80);
  LOWORD(v20[0]) = 0;
  v21 = _mm_load_si128((const __m128i *)&_xmm);
  std::wstring::reserve(v20, v19 + v13);
  std::wstring::append(v20);
  std::wstring::append(v20);
  v15 = DebugSaveTexture(a2, v14, v20);
  v16 = v15;
  if ( v15 >= 0 )
    v16 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCE,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\debugtreedumper.cpp",
      (const char *)(unsigned int)v15);
  std::wstring::_Tidy_deallocate(v20);
  std::wstring::_Tidy_deallocate(v18);
  return v16;
}
