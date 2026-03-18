/*
 * XREFs of ?DumpBitmapRealization@CDebugTreeDumper@@AEAAJPEAVIBitmapRealization@@PEAX@Z @ 0x180198CCC
 * Callers:
 *     ?Dump@CDebugTreeDumper@@QEAAXPEAVIBitmapRealization@@@Z @ 0x180198C2C (-Dump@CDebugTreeDumper@@QEAAXPEAVIBitmapRealization@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800374A0 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x1800875B4 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18009663C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CCCB4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800E228C (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x1800E22C8 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014FC08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEBD$$QEAV10@@Z @ 0x1801977C4 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     ??$AddProperty@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@CVisualTreeDumpContext@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@Z @ 0x180197824 (--$AddProperty@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@@CVisualTreeDumpCon.c)
 *     ??$AddProperty@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@CVisualTreeDumpContext@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18019799C (--$AddProperty@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@CVisualTreeDumpCon.c)
 *     ??$_UIntegral_to_buff@DI@std@@YAPEADPEADI@Z @ 0x180198978 (--$_UIntegral_to_buff@DI@std@@YAPEADPEADI@Z.c)
 *     ?SaveTextureFromSource@CDebugTreeDumper@@AEAAJPEAUID3D11Texture2D@@IPEAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801991BC (-SaveTextureFromSource@CDebugTreeDumper@@AEAAJPEAUID3D11Texture2D@@IPEAXPEAV-$basic_string@GU-$c.c)
 *     ?_Construct_lv_contents@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXAEBV12@@Z @ 0x1801994E0 (-_Construct_lv_contents@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXAEBV12.c)
 */

__int64 __fastcall CDebugTreeDumper::DumpBitmapRealization(
        CDebugTreeDumper *this,
        struct IBitmapRealization *a2,
        void *a3)
{
  __int64 v3; // rax
  int v5; // r14d
  __int64 (__fastcall *v7)(struct IBitmapRealization *, __int64, __int64 **, _QWORD); // rbx
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  int v13; // r8d
  int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // rax
  __m128i v17; // xmm0
  _BYTE *v18; // rax
  size_t *v19; // rbx
  int v21[2]; // [rsp+30h] [rbp-89h] BYREF
  __int64 *v22; // [rsp+38h] [rbp-81h] BYREF
  __int64 (__fastcall ***v23)(_QWORD, GUID *, int *); // [rsp+40h] [rbp-79h] BYREF
  _BYTE v24[32]; // [rsp+48h] [rbp-71h] BYREF
  void *v25[2]; // [rsp+68h] [rbp-51h] BYREF
  __m128i v26; // [rsp+78h] [rbp-41h]
  _QWORD v27[2]; // [rsp+88h] [rbp-31h] BYREF
  _BYTE v28[11]; // [rsp+9Dh] [rbp-1Ch] BYREF
  int v29[4]; // [rsp+A8h] [rbp-11h] BYREF
  __m128i si128; // [rsp+B8h] [rbp-1h]
  _QWORD v31[4]; // [rsp+C8h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v3 = *(_QWORD *)a2;
  v5 = (int)a3;
  v22 = 0LL;
  v7 = *(__int64 (__fastcall **)(struct IBitmapRealization *, __int64, __int64 **, _QWORD))(v3 + 56);
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)&v22);
  v8 = v7(a2, *((_QWORD *)this + 2) + 56LL, &v22, 0LL);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = *v22;
    v23 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, int *)))(v10 + 104))(
            v22,
            &v23);
    v9 = v11;
    if ( v11 >= 0 )
    {
      *(_QWORD *)v21 = 0LL;
      wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)v21);
      v12 = (**v23)(v23, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, v21);
      v9 = v12;
      if ( v12 >= 0 )
      {
        si128 = _mm_load_si128((const __m128i *)&_xmm);
        LOWORD(v29[0]) = 0;
        v14 = CDebugTreeDumper::SaveTextureFromSource((int)this, v21[0], v13, v5, v29);
        v15 = *((_QWORD *)this + 1);
        v9 = v14;
        if ( v14 < 0 )
        {
          v16 = std::_UIntegral_to_buff<char,unsigned int>((__int64)v28, -v14);
          v17 = _mm_load_si128((const __m128i *)&_xmm);
          v18 = (_BYTE *)(v16 - 1);
          *v18 = 45;
          LOBYTE(v25[0]) = 0;
          v26 = v17;
          if ( v18 != v28 )
            std::string::assign(v25, v18, v28 - v18);
          v19 = (size_t *)std::operator+<char>((__int64)v24, (__int64)"Failed to save texture with error: ", v25);
          std::string::string(v31, (__int64)"ERROR");
          CVisualTreeDumpContext::AddProperty<std::string>(v15, v31, v19);
          std::string::_Tidy_deallocate(v31);
          std::string::_Tidy_deallocate(v25);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xC3,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\debugtreedumper.cpp",
            (const char *)v9);
        }
        else
        {
          v26 = 0LL;
          std::wstring::_Construct_lv_contents(v25, v29);
          std::string::string(v27, (__int64)"imageFile");
          CVisualTreeDumpContext::AddProperty<std::wstring>(v15, v27, v25);
          std::string::_Tidy_deallocate(v27);
          v9 = 0;
        }
        std::wstring::_Tidy_deallocate(v29);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB8,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\debugtreedumper.cpp",
          (const char *)(unsigned int)v12);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v21);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB5,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\debugtreedumper.cpp",
        (const char *)(unsigned int)v11);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB2,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\debugtreedumper.cpp",
      (const char *)(unsigned int)v8);
  }
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v22);
  return v9;
}
