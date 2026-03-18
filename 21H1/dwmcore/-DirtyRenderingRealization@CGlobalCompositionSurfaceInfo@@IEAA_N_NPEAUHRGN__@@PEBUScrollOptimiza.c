/*
 * XREFs of ?DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_N_NPEAUHRGN__@@PEBUScrollOptimization@@PEAVCRegion@@@Z @ 0x1800770F0
 * Callers:
 *     ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@@Z @ 0x180076B30 (-UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBU.c)
 * Callees:
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x1800284CC (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z @ 0x1800769C4 (-GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z.c)
 *     ?IsSwapChain@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x1800770C0 (-IsSwapChain@CGlobalCompositionSurfaceInfo@@UEBA_NXZ.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x1800773B8 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180077E4C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x18007AD58 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BBA38 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 */

char __fastcall CGlobalCompositionSurfaceInfo::DirtyRenderingRealization(
        CGlobalCompositionSurfaceInfo *this,
        char a2,
        HRGN a3,
        const struct ScrollOptimization *a4,
        struct CRegion *a5)
{
  char v9; // bl
  void (__fastcall ***v10)(_QWORD, int *); // rcx
  unsigned int RectangleCount; // eax
  __int64 v12; // rcx
  __int64 v14; // rcx
  int v15; // r9d
  int v16; // r10d
  _DWORD *v17; // rdx
  _DWORD *v18; // r8
  _DWORD *v19; // rax
  int v20; // eax
  int v21; // r10d
  int v22; // r11d
  int v23; // ebx
  _DWORD *v24; // rcx
  int v25; // [rsp+20h] [rbp-51h] BYREF
  int v26; // [rsp+24h] [rbp-4Dh]
  __int64 v27; // [rsp+28h] [rbp-49h] BYREF
  int v28; // [rsp+30h] [rbp-41h]
  int v29; // [rsp+34h] [rbp-3Dh]
  _BYTE v30[80]; // [rsp+40h] [rbp-31h] BYREF
  void *retaddr; // [rsp+C8h] [rbp+57h]

  v9 = 0;
  v10 = (void (__fastcall ***)(_QWORD, int *))(*((_QWORD *)this + 23)
                                             + 8LL
                                             + *(int *)(*(_QWORD *)(*((_QWORD *)this + 23) + 8LL) + 16LL));
  (**v10)(v10, &v25);
  if ( a3 == (HRGN)1 )
  {
    v15 = v25;
    v16 = v26;
    if ( v25 > 0 && v26 > 0 )
    {
      v17 = *(_DWORD **)a5;
      v17[1] = 0;
      v17[3] = 0;
      v18 = v17 + 7;
      v17[7] = 0;
      v17[4] = 16;
      v19 = v17 + 5;
      v17[5] = v16;
LABEL_23:
      v18[1] = v15;
      v17[2] = v15;
      *v17 = 2;
      v19[1] = (_DWORD)v18 - (_DWORD)v19 + 8;
      goto LABEL_20;
    }
LABEL_19:
    **(_DWORD **)a5 = 0;
LABEL_20:
    v9 = 1;
    goto LABEL_7;
  }
  if ( a3 )
  {
    CRegion::SetHRGN(a5, a3);
    v9 = 1;
    CRegion::GetBoundingRect(a5, (struct MilRectU *)&v27);
    RectangleCount = FastRegion::CRegion::GetRectangleCount(a5);
    if ( v27 || RectangleCount != 1 || v28 != v25 || v29 != v26 )
      *((_BYTE *)this + 262) = 1;
  }
  if ( a4 && *(_DWORD *)a4 && (*((_DWORD *)a4 + 5) || *((_DWORD *)a4 + 6)) )
  {
    if ( v9 )
    {
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)v30, (const struct tagRECT *)((char *)a4 + 4));
      v20 = FastRegion::CRegion::Union(a5, (const struct CRegion *)v30);
      if ( v20 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v20, retaddr);
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v30);
      goto LABEL_7;
    }
    v15 = *((_DWORD *)a4 + 3);
    v21 = *((_DWORD *)a4 + 1);
    if ( v21 < v15 )
    {
      v22 = *((_DWORD *)a4 + 2);
      v23 = *((_DWORD *)a4 + 4);
      if ( v22 < v23 )
      {
        v17 = *(_DWORD **)a5;
        v24 = (_DWORD *)(*(_QWORD *)a5 + 12LL);
        v17[1] = v21;
        v18 = v17 + 7;
        *v24 = v22;
        v17[7] = v21;
        v24[1] = (_DWORD)v17 + 28 - (_DWORD)v24;
        v19 = v17 + 5;
        v17[5] = v23;
        goto LABEL_23;
      }
    }
    goto LABEL_19;
  }
LABEL_7:
  if ( a3 == (HRGN)1 || a2 && CGlobalCompositionSurfaceInfo::IsSwapChain(this) )
  {
    v14 = *(int *)(*(_QWORD *)(*((_QWORD *)this + 23) + 8LL) + 16LL) + *((_QWORD *)this + 23) + 8LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 40LL))(v14);
  }
  else if ( v9 )
  {
    v12 = *((_QWORD *)this + 23) + 8LL + *(int *)(*(_QWORD *)(*((_QWORD *)this + 23) + 8LL) + 16LL);
    (*(void (__fastcall **)(__int64, struct CRegion *))(*(_QWORD *)v12 + 32LL))(v12, a5);
  }
  return v9;
}
