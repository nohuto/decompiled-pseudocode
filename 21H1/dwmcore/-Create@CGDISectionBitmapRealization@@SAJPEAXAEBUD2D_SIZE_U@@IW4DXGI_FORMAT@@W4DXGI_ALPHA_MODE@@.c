/*
 * XREFs of ?Create@CGDISectionBitmapRealization@@SAJPEAXAEBUD2D_SIZE_U@@IW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAEPEAPEAVIGDIBitmapRealization@@@Z @ 0x18008D780
 * Callers:
 *     ?CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z @ 0x18008DB84 (-CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180037B1C (--2@YAPEAX_K@Z.c)
 *     ??0CGDISectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@_N@Z @ 0x18008D8D0 (--0CGDISectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUC.c)
 *     memset_0 @ 0x1800E261C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGDISectionBitmapRealization::Create(
        void *a1,
        const struct D2D_SIZE_U *a2,
        int a3,
        enum DXGI_FORMAT a4,
        enum DXGI_ALPHA_MODE a5,
        unsigned __int8 **a6,
        struct IGDIBitmapRealization **a7)
{
  UINT32 height; // eax
  CGDISectionBitmapRealization *v12; // rax
  __int64 v13; // rcx
  CGDISectionBitmapRealization *v14; // rbx
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // edi
  bool v19; // [rsp+28h] [rbp-A1h]
  void *v20; // [rsp+38h] [rbp-91h] BYREF
  UINT32 width; // [rsp+40h] [rbp-89h]
  UINT32 v22; // [rsp+44h] [rbp-85h]
  int v23; // [rsp+48h] [rbp-81h]
  enum DXGI_FORMAT v24; // [rsp+4Ch] [rbp-7Dh]
  _OWORD v25[2]; // [rsp+50h] [rbp-79h] BYREF
  _DWORD v26[32]; // [rsp+78h] [rbp-51h] BYREF

  *a6 = 0LL;
  *a7 = 0LL;
  memset_0(v26, 0, 0x78uLL);
  v26[11] = 0;
  v26[18] = 0;
  v26[19] = 0;
  v26[20] = 0;
  v26[22] = 0;
  v26[0] = a5;
  width = a2->width;
  height = a2->height;
  memset(v25, 0, sizeof(v25));
  v22 = height;
  v26[17] = 1065353216;
  v26[21] = 1065353216;
  LODWORD(v25[0]) = 1;
  v20 = a1;
  v23 = a3;
  v24 = a4;
  v12 = (CGDISectionBitmapRealization *)operator new(0x1D8uLL);
  if ( v12 )
    v14 = CGDISectionBitmapRealization::CGDISectionBitmapRealization(
            v12,
            (const struct CSM_BUFFER_ATTRIBUTES *)v26,
            (const struct CSM_REALIZATION_INFO *)v25,
            (const struct CSM_SYSMEM_SECTION_INFO *)&v20,
            v19);
  else
    v14 = 0LL;
  if ( v14 )
  {
    (*(void (__fastcall **)(CGDISectionBitmapRealization *))(*(_QWORD *)v14 + 8LL))(v14);
    a1 = 0LL;
    v15 = (*(__int64 (__fastcall **)(CGDISectionBitmapRealization *))(*(_QWORD *)v14 + 56LL))(v14);
    v17 = v15;
    if ( v15 >= 0 )
    {
      *a6 = (unsigned __int8 *)*((_QWORD *)v14 + 43);
      *a7 = (CGDISectionBitmapRealization *)((char *)v14 + 360);
      return v17;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x37u, 0LL);
  }
  else
  {
    v17 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0x32u, 0LL);
  }
  if ( a1 )
    CloseHandle(a1);
  if ( v14 )
    (*(void (__fastcall **)(CGDISectionBitmapRealization *))(*(_QWORD *)v14 + 16LL))(v14);
  return v17;
}
