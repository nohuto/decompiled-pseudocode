/*
 * XREFs of ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x1800A733C
 * Callers:
 *     ?DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ @ 0x18003E918 (-DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?NotifyDirty@CGdiSpriteBitmap@@QEAAX_K@Z @ 0x1800401D4 (-NotifyDirty@CGdiSpriteBitmap@@QEAAX_K@Z.c)
 *     ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x1800459EC (-CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x1800A64D8 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 *     ?DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_N_NPEAUHRGN__@@PEBUScrollOptimization@@PEAVCRegion@@@Z @ 0x1800A7C10 (-DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_N_NPEAUHRGN__@@PEBUScrollOptimiza.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAXPEBUtagRECT@@I@Z @ 0x1800A3720 (--$AppendRects@UtagRECT@@@CRegion@@QEAAXPEBUtagRECT@@I@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800A5E54 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x1800A7420 (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 */

void __fastcall CRegion::SetHRGN(const struct FastRegion::Internal::CRgnData **this, HRGN hrgn, unsigned int *a3)
{
  void *v3; // rbx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // edi
  unsigned int v8; // r8d
  char *v9; // rdx
  HANDLE ProcessHeap; // rax
  const struct FastRegion::Internal::CRgnData *v11; // rdx
  _DWORD *v12; // r8
  LPVOID lpMem; // [rsp+30h] [rbp-78h] BYREF
  int *v14; // [rsp+40h] [rbp-68h] BYREF
  int v15; // [rsp+48h] [rbp-60h] BYREF

  v3 = 0LL;
  lpMem = 0LL;
  if ( hrgn )
  {
    if ( hrgn == (HRGN)1 )
    {
LABEL_11:
      v11 = *this;
      v12 = (_DWORD *)((char *)*this + 28);
      *(_DWORD *)v11 = 2;
      *v12 = 0x80000000;
      v12[1] = 0x7FFFFFFF;
      *((_DWORD *)v11 + 1) = 0x80000000;
      *((_DWORD *)v11 + 4) = (_DWORD)v12 - ((_DWORD)v11 + 12);
      *((_DWORD *)v11 + 2) = 0x7FFFFFFF;
      *((_DWORD *)v11 + 3) = 0x80000000;
      *((_DWORD *)v11 + 6) = (_DWORD)v12 - ((_DWORD)v11 + 20) + 8;
      *((_DWORD *)v11 + 5) = 0x7FFFFFFF;
      return;
    }
    v14 = &v15;
    v15 = 0;
    v5 = HrgnToRgnData(hrgn, (struct _RGNDATA **)&lpMem, a3);
    v7 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x1Au, 0LL);
      FastRegion::CRegion::FreeMemory((void **)&v14);
      v3 = lpMem;
    }
    else
    {
      v3 = lpMem;
      v8 = *((_DWORD *)lpMem + 2);
      v9 = (char *)lpMem + 32;
      *(_DWORD *)*this = 0;
      CRegion::AppendRects<tagRECT>(this, (__int64)v9, v8);
      FastRegion::CRegion::FreeMemory((void **)&v14);
    }
  }
  else
  {
    *(_DWORD *)*this = 0;
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
