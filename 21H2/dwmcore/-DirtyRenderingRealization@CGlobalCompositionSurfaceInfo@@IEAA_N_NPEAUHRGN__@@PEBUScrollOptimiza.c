/*
 * XREFs of ?DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_N_NPEAUHRGN__@@PEBUScrollOptimization@@PEAVCRegion@@@Z @ 0x180069780
 * Callers:
 *     ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@@Z @ 0x180069110 (-UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBU.c)
 * Callees:
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18003FA54 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?IsSwapChain@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x180069750 (-IsSwapChain@CGlobalCompositionSurfaceInfo@@UEBA_NXZ.c)
 *     ?GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z @ 0x180069C08 (-GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x180069D54 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18008248C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x1800B84E0 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

char __fastcall CGlobalCompositionSurfaceInfo::DirtyRenderingRealization(
        CGlobalCompositionSurfaceInfo *this,
        char a2,
        HRGN a3,
        const struct ScrollOptimization *a4,
        struct CRegion *a5)
{
  char v9; // di
  void (__fastcall ***v10)(_QWORD, int *); // rcx
  char v11; // bl
  unsigned int RectangleCount; // eax
  __int64 v13; // rcx
  __int64 v15; // rcx
  int v16; // r9d
  int v17; // r10d
  _DWORD *v18; // rdx
  _DWORD *v19; // r8
  int v20; // eax
  int v21; // r9d
  int v22; // r10d
  int v23; // r11d
  int v24; // edi
  _DWORD *v25; // rdx
  _DWORD *v26; // r8
  int v27; // [rsp+20h] [rbp-61h] BYREF
  int v28; // [rsp+24h] [rbp-5Dh]
  __int64 v29; // [rsp+28h] [rbp-59h] BYREF
  int v30; // [rsp+30h] [rbp-51h]
  int v31; // [rsp+34h] [rbp-4Dh]
  _BYTE v32[80]; // [rsp+40h] [rbp-41h] BYREF
  void *retaddr; // [rsp+D8h] [rbp+57h]

  v9 = 0;
  v10 = (void (__fastcall ***)(_QWORD, int *))(*((_QWORD *)this + 25)
                                             + 8LL
                                             + *(int *)(*(_QWORD *)(*((_QWORD *)this + 25) + 8LL) + 16LL));
  (**v10)(v10, &v27);
  v11 = 1;
  if ( a3 == (HRGN)1 )
  {
    v16 = v27;
    v17 = v28;
    if ( v27 <= 0 || v28 <= 0 )
    {
      **(_DWORD **)a5 = 0;
    }
    else
    {
      v18 = *(_DWORD **)a5;
      v19 = (_DWORD *)(*(_QWORD *)a5 + 28LL);
      *(_QWORD *)v18 = 2LL;
      *v19 = 0;
      v19[1] = v16;
      v18[2] = v16;
      v18[4] = (_DWORD)v19 - ((_DWORD)v18 + 12);
      v18[3] = 0;
      v18[5] = v17;
      v18[6] = (_DWORD)v19 - ((_DWORD)v18 + 20) + 8;
    }
LABEL_9:
    v13 = *(int *)(*(_QWORD *)(*((_QWORD *)this + 25) + 8LL) + 16LL) + *((_QWORD *)this + 25) + 8LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 40LL))(v13);
    return v11;
  }
  if ( a3 )
  {
    CRegion::SetHRGN(a5, a3);
    v9 = 1;
    CRegion::GetBoundingRect(a5, (struct MilRectU *)&v29);
    RectangleCount = FastRegion::CRegion::GetRectangleCount(a5);
    if ( v29 || RectangleCount != 1 || v30 != v27 || v31 != v28 )
      *((_BYTE *)this + 280) = 1;
  }
  if ( a4 && *(_DWORD *)a4 && (*((_DWORD *)a4 + 5) || *((_DWORD *)a4 + 6)) )
  {
    if ( v9 )
    {
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)v32, (const struct tagRECT *)((char *)a4 + 4));
      v20 = FastRegion::CRegion::Union(a5, (const struct CRegion *)v32);
      if ( v20 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v20, retaddr);
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v32);
    }
    else
    {
      v21 = *((_DWORD *)a4 + 3);
      v22 = *((_DWORD *)a4 + 1);
      if ( v22 >= v21 || (v23 = *((_DWORD *)a4 + 2), v24 = *((_DWORD *)a4 + 4), v23 >= v24) )
      {
        **(_DWORD **)a5 = 0;
      }
      else
      {
        v25 = *(_DWORD **)a5;
        v26 = (_DWORD *)(*(_QWORD *)a5 + 28LL);
        *v25 = 2;
        *v26 = v22;
        v26[1] = v21;
        v25[1] = v22;
        v25[4] = (_DWORD)v26 - ((_DWORD)v25 + 12);
        v25[2] = v21;
        v25[3] = v23;
        v25[6] = (_DWORD)v26 - ((_DWORD)v25 + 20) + 8;
        v25[5] = v24;
      }
      v9 = 1;
    }
  }
  if ( a2 )
  {
    v11 = v9;
    if ( CGlobalCompositionSurfaceInfo::IsSwapChain(this) )
      goto LABEL_9;
  }
  v11 = v9;
  if ( v9 )
  {
    v15 = *((_QWORD *)this + 25) + 8LL + *(int *)(*(_QWORD *)(*((_QWORD *)this + 25) + 8LL) + 16LL);
    (*(void (__fastcall **)(__int64, struct CRegion *))(*(_QWORD *)v15 + 32LL))(v15, a5);
  }
  return v11;
}
