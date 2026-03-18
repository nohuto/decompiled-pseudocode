/*
 * XREFs of ?Create@CGDISectionBitmapRealization@@SAJPEAXAEBUD2D_SIZE_U@@IW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAEPEAPEAVIGDIBitmapRealization@@@Z @ 0x18005DF7C
 * Callers:
 *     ?CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z @ 0x18005E3E8 (-CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ??4?$com_ptr_t@VCGDISectionBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCGDISectionBitmapRealization@@@Z @ 0x18005E0E4 (--4-$com_ptr_t@VCGDISectionBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVC.c)
 *     ??0CGDISectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@_N@Z @ 0x18005E134 (--0CGDISectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUC.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CGDISectionBitmapRealization::Create(
        HANDLE hObject,
        const struct D2D_SIZE_U *a2,
        int a3,
        enum DXGI_FORMAT a4,
        enum DXGI_ALPHA_MODE a5,
        unsigned __int8 **a6,
        struct IGDIBitmapRealization **a7)
{
  unsigned __int8 **v7; // r15
  struct IGDIBitmapRealization **v9; // r12
  UINT32 width; // eax
  UINT32 height; // eax
  CGDISectionBitmapRealization *v15; // rax
  unsigned int v16; // ecx
  unsigned __int8 **v17; // rbx
  int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // edi
  bool v22; // [rsp+28h] [rbp-B1h]
  HANDLE v23; // [rsp+38h] [rbp-A1h] BYREF
  UINT32 v24; // [rsp+40h] [rbp-99h]
  UINT32 v25; // [rsp+44h] [rbp-95h]
  int v26; // [rsp+48h] [rbp-91h]
  enum DXGI_FORMAT v27; // [rsp+4Ch] [rbp-8Dh]
  _OWORD v28[2]; // [rsp+50h] [rbp-89h] BYREF
  __int64 v29; // [rsp+70h] [rbp-69h]
  _DWORD v30[20]; // [rsp+78h] [rbp-61h] BYREF
  __int128 v31; // [rsp+C8h] [rbp-11h]

  v7 = a6;
  v9 = a7;
  *a6 = 0LL;
  *v9 = 0LL;
  memset_0(v30, 0, 0x90uLL);
  v30[12] = 0;
  a6 = 0LL;
  v30[0] = a5;
  v29 = 0LL;
  width = a2->width;
  v30[18] = (_DWORD)FLOAT_1_0;
  v24 = width;
  height = a2->height;
  memset(v28, 0, sizeof(v28));
  v25 = height;
  v30[19] = 0;
  v31 = _xmm;
  LODWORD(v28[0]) = 1;
  v23 = hObject;
  v26 = a3;
  v27 = a4;
  v15 = (CGDISectionBitmapRealization *)operator new(0x1F8uLL);
  if ( v15 )
    v15 = CGDISectionBitmapRealization::CGDISectionBitmapRealization(
            v15,
            (const struct CSM_BUFFER_ATTRIBUTES *)v30,
            (const struct CSM_REALIZATION_INFO *)v28,
            (const struct CSM_SYSMEM_SECTION_INFO *)&v23,
            v22);
  wil::com_ptr_t<CGDISectionBitmapRealization,wil::err_returncode_policy>::operator=(&a6, v15);
  v17 = a6;
  if ( a6 )
  {
    v18 = (*((__int64 (__fastcall **)(unsigned __int8 **))*a6 + 8))(a6);
    v20 = v18;
    if ( v18 >= 0 )
    {
      *v7 = v17[47];
      *v9 = (struct IGDIBitmapRealization *)((unsigned __int64)(v17 + 49) & -(__int64)(v17 != 0LL));
      return v20;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x37u, 0LL);
  }
  else
  {
    v20 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2147024882, 0x32u, 0LL);
    if ( hObject )
      CloseHandle(hObject);
  }
  if ( v17 )
    (*((void (__fastcall **)(unsigned __int8 **))*v17 + 2))(v17);
  return v20;
}
