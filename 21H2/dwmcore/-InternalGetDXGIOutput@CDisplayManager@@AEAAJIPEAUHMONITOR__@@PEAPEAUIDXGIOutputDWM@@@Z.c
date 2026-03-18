/*
 * XREFs of ?InternalGetDXGIOutput@CDisplayManager@@AEAAJIPEAUHMONITOR__@@PEAPEAUIDXGIOutputDWM@@@Z @ 0x18001E884
 * Callers:
 *     ?GetDXGIOutput@CDisplayManager@@QEAAJIPEAPEAUIDXGIOutputDWM@@@Z @ 0x18001E850 (-GetDXGIOutput@CDisplayManager@@QEAAJIPEAPEAUIDXGIOutputDWM@@@Z.c)
 *     ?EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ @ 0x1800FE2A8 (-EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x18003DCAC (-InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplayManager::InternalGetDXGIOutput(
        CDisplayManager *this,
        int a2,
        HMONITOR a3,
        struct IDXGIOutputDWM **a4)
{
  int DXGIFactory; // eax
  int v8; // edi
  struct IDXGIFactory5 *v9; // rbx
  unsigned int i; // r15d
  struct IDXGIFactory5Vtbl *lpVtbl; // rax
  __int64 v12; // rcx
  int v13; // eax
  unsigned int j; // esi
  __int64 v15; // rax
  bool v16; // di
  __int64 v17; // rcx
  int v18; // eax
  struct IDXGIOutputDWM *v19; // rax
  int v21; // eax
  __int64 v22; // rdx
  int v23; // [rsp+28h] [rbp-E0h]
  struct IDXGIOutputDWM *v24; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+40h] [rbp-C8h] BYREF
  __int64 *v26; // [rsp+48h] [rbp-C0h] BYREF
  __int64 *v27; // [rsp+50h] [rbp-B8h]
  __int64 v28; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A8h]
  __int64 (__fastcall ***v30)(_QWORD, GUID *, __int64 **); // [rsp+68h] [rbp-A0h] BYREF
  struct IDXGIFactory5 *v31; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v32[88]; // [rsp+78h] [rbp-90h] BYREF
  HMONITOR v33; // [rsp+D0h] [rbp-38h]
  _BYTE v34[16]; // [rsp+D8h] [rbp-30h] BYREF
  int v35; // [rsp+E8h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  *a4 = 0LL;
  v31 = 0LL;
  DXGIFactory = CDisplayManager::InternalGetDXGIFactory(this, &v31);
  v8 = DXGIFactory;
  if ( DXGIFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA6,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globaldisplaymanager.cpp",
      (const char *)(unsigned int)DXGIFactory,
      v23);
  }
  else
  {
    v30 = 0LL;
    v9 = v31;
    for ( i = 0; ; ++i )
    {
      lpVtbl = v9->lpVtbl;
      v28 = 0LL;
      v27 = (__int64 *)&v30;
      LOBYTE(v29) = 1;
      v8 = ((__int64 (__fastcall *)(struct IDXGIFactory5 *, _QWORD, __int64 *))lpVtbl->EnumAdapters1)(v9, i, &v28);
      if ( (_BYTE)v29 )
      {
        v12 = *v27;
        *v27 = v28;
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      if ( v8 < 0 )
        break;
      v26 = 0LL;
      v13 = (**v30)(v30, &GUID_712bd56d_86ff_4b71_91e1_c13b274ff2a2, &v26);
      v8 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xAF,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globaldisplaymanager.cpp",
          (const char *)(unsigned int)v13,
          v23);
LABEL_20:
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v26);
        break;
      }
      v25 = 0LL;
      for ( j = 0; ; ++j )
      {
        v15 = *v26;
        v28 = 0LL;
        v27 = &v25;
        LOBYTE(v29) = 1;
        v16 = (*(int (__fastcall **)(__int64 *, _QWORD, __int64, __int64 *))(v15 + 40))(v26, j, 0xFFFFFFFFLL, &v28) >= 0;
        if ( (_BYTE)v29 )
        {
          v17 = *v27;
          *v27 = v28;
          if ( v17 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        }
        if ( !v16 )
          break;
        if ( a2 )
        {
          v24 = 0LL;
          wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v24);
          v18 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IDXGIOutputDWM **))v25)(
                  v25,
                  &GUID_6f66a9a0_bece_4ee8_b11b_990eb38ed976,
                  &v24);
          v8 = v18;
          if ( v18 < 0 )
          {
            v22 = 187LL;
            goto LABEL_32;
          }
          v18 = (*(__int64 (__fastcall **)(struct IDXGIOutputDWM *, _BYTE *))(*(_QWORD *)v24 + 32LL))(v24, v34);
          v8 = v18;
          if ( v18 < 0 )
          {
            v22 = 190LL;
LABEL_32:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v22,
              (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globaldisplaymanager.cpp",
              (const char *)(unsigned int)v18,
              v23);
            goto LABEL_18;
          }
          if ( a2 == v35 )
          {
            v19 = v24;
            v24 = 0LL;
            v8 = 0;
            *a4 = v19;
LABEL_18:
            wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>(&v24);
LABEL_19:
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v25);
            goto LABEL_20;
          }
          wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>(&v24);
        }
        else
        {
          v21 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v25 + 56LL))(v25, v32);
          v8 = v21;
          if ( v21 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xC9,
              (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globaldisplaymanager.cpp",
              (const char *)(unsigned int)v21,
              v23);
            goto LABEL_19;
          }
          if ( a3 == v33 )
          {
            v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IDXGIOutputDWM **))v25)(
                   v25,
                   &GUID_6f66a9a0_bece_4ee8_b11b_990eb38ed976,
                   a4);
            goto LABEL_19;
          }
        }
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v25);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v26);
    }
    wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>(&v30);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v31);
  return (unsigned int)v8;
}
