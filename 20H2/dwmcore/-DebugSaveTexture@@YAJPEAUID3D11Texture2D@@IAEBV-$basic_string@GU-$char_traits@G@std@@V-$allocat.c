/*
 * XREFs of ?DebugSaveTexture@@YAJPEAUID3D11Texture2D@@IAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18020D844
 * Callers:
 *     ?SaveTextureFromSource@CDebugTreeDumper@@AEAAJPEAUID3D11Texture2D@@IPEAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18019753C (-SaveTextureFromSource@CDebugTreeDumper@@AEAAJPEAUID3D11Texture2D@@IPEAXPEAV-$basic_string@GU-$c.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180031E90 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180041228 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180041BCC (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180041D34 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180048D4C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CC168 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014DDBC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_unique@VCBitmapSaver@@AEAIAEAIAEAEAEAIAEAPEAX$0A@@std@@YA?AV?$unique_ptr@VCBitmapSaver@@U?$default_delete@VCBitmapSaver@@@std@@@0@AEAI0AEAE0AEAPEAX@Z @ 0x18020CFE8 (--$make_unique@VCBitmapSaver@@AEAIAEAIAEAEAEAIAEAPEAX$0A@@std@@YA-AV-$unique_ptr@VCBitmapSaver@@.c)
 *     GetStagingTexture @ 0x18020DC48 (GetStagingTexture.c)
 *     ?SaveBitmap@CBitmapSaver@@QEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180263F1C (-SaveBitmap@CBitmapSaver@@QEAAJAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 */

__int64 __fastcall DebugSaveTexture(__int64 a1, __int64 a2, _QWORD *a3)
{
  int StagingTexture; // eax
  int v6; // esi
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // eax
  _QWORD *v13; // rax
  CBitmapSaver *v14; // rdi
  unsigned __int8 v16[8]; // [rsp+40h] [rbp-49h] BYREF
  __int64 v17; // [rsp+48h] [rbp-41h] BYREF
  __int64 *v18; // [rsp+50h] [rbp-39h] BYREF
  __int64 *v19; // [rsp+58h] [rbp-31h] BYREF
  CBitmapSaver *v20; // [rsp+60h] [rbp-29h] BYREF
  __int64 v21; // [rsp+68h] [rbp-21h] BYREF
  int v22; // [rsp+70h] [rbp-19h] BYREF
  int v23; // [rsp+78h] [rbp-11h] BYREF
  int v24[3]; // [rsp+7Ch] [rbp-Dh] BYREF
  enum DXGI_FORMAT v25; // [rsp+88h] [rbp-1h]
  _QWORD v26[4]; // [rsp+A8h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v18 = 0LL;
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)&v18);
  StagingTexture = GetStagingTexture(a1, &v18);
  v6 = StagingTexture;
  if ( StagingTexture < 0 )
  {
    v7 = (unsigned int)StagingTexture;
    v8 = 397LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
      (const char *)v7);
    goto LABEL_14;
  }
  v9 = v18;
  (*(void (__fastcall **)(__int64 *, int *))(*v18 + 80))(v18, &v23);
  if ( v25 == DXGI_FORMAT_A8_UNORM )
  {
    v6 = -2147024809;
    v8 = 405LL;
    v7 = 2147942487LL;
    goto LABEL_5;
  }
  v10 = *v9;
  v19 = 0LL;
  (*(void (__fastcall **)(__int64 *, __int64 **))(v10 + 24))(v9, &v19);
  v11 = *v19;
  v17 = 0LL;
  (*(void (__fastcall **)(__int64 *, __int64 *))(v11 + 320))(v19, &v17);
  v12 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, __int64, _DWORD, __int64 *))(*(_QWORD *)v17 + 112LL))(
          v17,
          v9,
          0LL,
          1LL,
          0,
          &v21);
  v6 = v12;
  if ( v12 >= 0 )
  {
    v16[0] = GetPixelFormatSize(v25);
    std::make_unique<CBitmapSaver,unsigned int &,unsigned int &,unsigned char &,unsigned int &,void * &,0>(
      &v20,
      &v23,
      v24,
      v16,
      &v22,
      &v21);
    v13 = std::wstring::c_str(a3);
    std::wstring::wstring(v26, (__int64)v13);
    v14 = v20;
    v6 = CBitmapSaver::SaveBitmap(v20);
    std::wstring::_Tidy_deallocate(v26);
    if ( v6 >= 0 )
    {
      (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v17 + 120LL))(v17, v9, 0LL);
      v6 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A9,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
        (const char *)(unsigned int)v6);
    }
    if ( v14 )
      operator delete(v14);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19F,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
      (const char *)(unsigned int)v12);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v17);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
LABEL_14:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v18);
  return (unsigned int)v6;
}
