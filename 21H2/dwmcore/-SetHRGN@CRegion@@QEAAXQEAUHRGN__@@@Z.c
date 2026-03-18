/*
 * XREFs of ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x180069D54
 * Callers:
 *     ?NotifyDirty@CGdiSpriteBitmap@@QEAAX_K@Z @ 0x18000E810 (-NotifyDirty@CGdiSpriteBitmap@@QEAAX_K@Z.c)
 *     ?DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ @ 0x18005E580 (-DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x180066C1C (-CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 *     ?DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_N_NPEAUHRGN__@@PEBUScrollOptimization@@PEAVCRegion@@@Z @ 0x180069780 (-DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_N_NPEAUHRGN__@@PEBUScrollOptimiza.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x180081D5C (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 * Callees:
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180069E28 (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x180082730 (-TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

void __fastcall CRegion::SetHRGN(CRegion *this, HRGN a2)
{
  _DWORD *v2; // rax
  void *v3; // rbx
  int v5; // eax
  unsigned int v6; // ecx
  int v7; // edi
  _DWORD *v8; // rdx
  _DWORD *v9; // r8
  void *v10; // [rsp+30h] [rbp-78h] BYREF
  int *v11; // [rsp+40h] [rbp-68h] BYREF
  int v12; // [rsp+48h] [rbp-60h] BYREF

  v2 = *(_DWORD **)this;
  v3 = 0LL;
  v10 = 0LL;
  *v2 = 0;
  if ( a2 )
  {
    if ( a2 == (HRGN)1 )
    {
LABEL_11:
      v8 = *(_DWORD **)this;
      v9 = (_DWORD *)(*(_QWORD *)this + 28LL);
      *v8 = 2;
      *v9 = 0x80000000;
      v9[1] = 0x7FFFFFFF;
      v8[1] = 0x80000000;
      v8[4] = (_DWORD)v9 - ((_DWORD)v8 + 12);
      v8[2] = 0x7FFFFFFF;
      v8[3] = 0x80000000;
      v8[6] = (_DWORD)v9 - ((_DWORD)v8 + 20) + 8;
      v8[5] = 0x7FFFFFFF;
      return;
    }
    v11 = &v12;
    v12 = 0;
    v5 = HrgnToRgnData(a2, (struct _RGNDATA **)&v10, (unsigned int *)a2);
    v7 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x1Cu, 0LL);
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v11);
      v3 = v10;
    }
    else
    {
      v3 = v10;
      v7 = CRegion::TryAddRectangles(this, (const struct tagRECT *)v10 + 2, *((_DWORD *)v10 + 2));
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v11);
    }
  }
  else
  {
    v7 = 0;
  }
  if ( v3 )
    DefaultHeap::Free(v3);
  if ( v7 < 0 )
    goto LABEL_11;
}
