/*
 * XREFs of ?Create@CGDISubSectionBitmapRealization@@SAJPEAEAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1IW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIGDIBitmapRealization@@@Z @ 0x180263AB0
 * Callers:
 *     ?CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z @ 0x1801C5984 (-CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x1800323F0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800B5D50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     memset_0 @ 0x1800E261C (memset_0.c)
 *     ??0CGDISubSectionBitmapRealization@@AEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@PEAEAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x18026382C (--0CGDISubSectionBitmapRealization@@AEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AE.c)
 *     ?EnsureBitmapCacheSource@CGDISubSectionBitmapRealization@@EEAAJXZ @ 0x180263C20 (-EnsureBitmapCacheSource@CGDISubSectionBitmapRealization@@EEAAJXZ.c)
 */

__int64 __fastcall CGDISubSectionBitmapRealization::Create(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        _QWORD *a7)
{
  LPVOID v11; // rax
  __int64 v12; // rcx
  CMILCOMBase *v13; // rbx
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // edi
  __int64 v18; // [rsp+48h] [rbp-91h] BYREF
  int v19; // [rsp+50h] [rbp-89h]
  int v20; // [rsp+54h] [rbp-85h]
  int v21; // [rsp+58h] [rbp-81h]
  int v22; // [rsp+5Ch] [rbp-7Dh]
  _OWORD v23[2]; // [rsp+60h] [rbp-79h] BYREF
  _DWORD v24[32]; // [rsp+88h] [rbp-51h] BYREF

  *a7 = 0LL;
  memset_0(v24, 0, 0x78uLL);
  v24[11] = 0;
  v24[18] = 0;
  v24[19] = 0;
  v24[21] = 0;
  v24[22] = 0;
  v18 = 0LL;
  v24[0] = a6;
  v24[16] = 1;
  memset(v23, 0, sizeof(v23));
  LODWORD(v23[0]) = 1;
  v19 = *(_DWORD *)(a3 + 8) - *(_DWORD *)a3;
  v20 = *(_DWORD *)(a3 + 12) - *(_DWORD *)(a3 + 4);
  v22 = a5;
  v24[17] = 1065353216;
  v24[20] = 1065353216;
  v21 = a4;
  v11 = DefaultHeap::Alloc(0x1F8uLL);
  if ( v11 )
    v13 = (CMILCOMBase *)CGDISubSectionBitmapRealization::CGDISubSectionBitmapRealization(
                           (__int64)v11,
                           (const struct CSM_BUFFER_ATTRIBUTES *)v24,
                           (const struct CSM_REALIZATION_INFO *)v23,
                           (const struct CSM_SYSMEM_SECTION_INFO *)&v18,
                           a1,
                           a2,
                           (_OWORD *)a3);
  else
    v13 = 0LL;
  if ( v13 )
  {
    CMILCOMBase::InternalAddRef(v13);
    v14 = CGDISubSectionBitmapRealization::EnsureBitmapCacheSource(v13);
    v16 = v14;
    if ( v14 >= 0 )
    {
      *a7 = (char *)v13 + 360;
      return v16;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x38u, 0LL);
  }
  else
  {
    v16 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x36u, 0LL);
  }
  if ( v13 )
    CRenderTargetBitmap::Release(v13);
  return v16;
}
