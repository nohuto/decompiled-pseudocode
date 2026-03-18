/*
 * XREFs of ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x180040A90
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x180039C08 (-CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 *     ?NotifyDirty@CGdiSpriteBitmap@@QEAAX_K@Z @ 0x18003F4BC (-NotifyDirty@CGdiSpriteBitmap@@QEAAX_K@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x180041614 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 *     ?DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_N_NPEAUHRGN__@@PEBUScrollOptimization@@PEAVCRegion@@@Z @ 0x180045200 (-DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_N_NPEAUHRGN__@@PEBUScrollOptimiza.c)
 *     ?DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ @ 0x1800D59D8 (-DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x1800409C4 (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAXPEBUtagRECT@@I@Z @ 0x180041D40 (--$AppendRects@UtagRECT@@@CRegion@@QEAAXPEBUtagRECT@@I@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180044474 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 */

void __fastcall CRegion::SetHRGN(CRegion *this, HRGN hrgn, unsigned int *a3)
{
  void *v3; // rbx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // edi
  HANDLE ProcessHeap; // rax
  _DWORD *v9; // rdx
  _DWORD *v10; // r8
  LPVOID lpMem; // [rsp+30h] [rbp-78h] BYREF
  int *v12; // [rsp+40h] [rbp-68h] BYREF
  int v13; // [rsp+48h] [rbp-60h] BYREF

  v3 = 0LL;
  lpMem = 0LL;
  if ( hrgn )
  {
    if ( hrgn == (HRGN)1 )
    {
LABEL_11:
      v9 = *(_DWORD **)this;
      v10 = (_DWORD *)(*(_QWORD *)this + 28LL);
      *v9 = 2;
      *v10 = 0x80000000;
      v10[1] = 0x7FFFFFFF;
      v9[1] = 0x80000000;
      v9[4] = (_DWORD)v10 - ((_DWORD)v9 + 12);
      v9[2] = 0x7FFFFFFF;
      v9[3] = 0x80000000;
      v9[6] = (_DWORD)v10 - ((_DWORD)v9 + 20) + 8;
      v9[5] = 0x7FFFFFFF;
      return;
    }
    v12 = &v13;
    v13 = 0;
    v5 = HrgnToRgnData(hrgn, (struct _RGNDATA **)&lpMem, a3);
    v7 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x1Au, 0LL);
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v12);
      v3 = lpMem;
    }
    else
    {
      v3 = lpMem;
      **(_DWORD **)this = 0;
      CRegion::AppendRects<tagRECT>(this);
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v12);
    }
  }
  else
  {
    **(_DWORD **)this = 0;
    v7 = 0;
  }
  if ( v3 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v3);
  }
  if ( v7 < 0 )
    goto LABEL_11;
}
