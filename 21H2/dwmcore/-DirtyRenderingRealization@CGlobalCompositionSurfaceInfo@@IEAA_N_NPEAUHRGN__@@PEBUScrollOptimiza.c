/*
 * XREFs of ?DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_N_NPEAUHRGN__@@PEBUScrollOptimization@@PEAVCRegion@@@Z @ 0x18009CED0
 * Callers:
 *     ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@@Z @ 0x18009C914 (-UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBU.c)
 * Callees:
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18003A990 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009B114 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x18009B318 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18009B3D8 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x18009C5FC (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?IsSwapChain@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x18009CEA0 (-IsSwapChain@CGlobalCompositionSurfaceInfo@@UEBA_NXZ.c)
 *     ?GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z @ 0x18009D198 (-GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18020FB94 (ModuleFailFastForHRESULT.c)
 */

char __fastcall CGlobalCompositionSurfaceInfo::DirtyRenderingRealization(
        CGlobalCompositionSurfaceInfo *this,
        char a2,
        HRGN a3,
        const struct ScrollOptimization *a4,
        const struct FastRegion::Internal::CRgnData **a5)
{
  char v9; // bl
  void (__fastcall ***v10)(_QWORD, int *); // rcx
  unsigned int *v11; // r8
  int RectangleCount; // eax
  __int64 v13; // rcx
  __int64 v15; // rcx
  int v16; // r9d
  int v17; // r10d
  const struct FastRegion::Internal::CRgnData *v18; // rdx
  char *v19; // r8
  char *v20; // rax
  int v21; // eax
  int v22; // r10d
  int v23; // r11d
  int v24; // ebx
  _DWORD *v25; // rcx
  int v26; // [rsp+20h] [rbp-51h] BYREF
  int v27; // [rsp+24h] [rbp-4Dh]
  __int64 v28; // [rsp+28h] [rbp-49h] BYREF
  int v29; // [rsp+30h] [rbp-41h]
  int v30; // [rsp+34h] [rbp-3Dh]
  void *v31[10]; // [rsp+40h] [rbp-31h] BYREF
  void *retaddr; // [rsp+C8h] [rbp+57h]

  v9 = 0;
  v10 = (void (__fastcall ***)(_QWORD, int *))(*((_QWORD *)this + 23)
                                             + 8LL
                                             + *(int *)(*(_QWORD *)(*((_QWORD *)this + 23) + 8LL) + 16LL));
  (**v10)(v10, &v26);
  if ( a3 == (HRGN)1 )
  {
    v16 = v26;
    v17 = v27;
    if ( v26 > 0 && v27 > 0 )
    {
      v18 = *a5;
      *((_DWORD *)v18 + 1) = 0;
      *((_DWORD *)v18 + 3) = 0;
      v19 = (char *)v18 + 28;
      *((_DWORD *)v18 + 7) = 0;
      *((_DWORD *)v18 + 4) = 16;
      v20 = (char *)v18 + 20;
      *((_DWORD *)v18 + 5) = v17;
LABEL_21:
      *((_DWORD *)v19 + 1) = v16;
      *((_DWORD *)v18 + 2) = v16;
      *(_DWORD *)v18 = 2;
      *((_DWORD *)v20 + 1) = (_DWORD)v19 - (_DWORD)v20 + 8;
LABEL_22:
      v9 = 1;
      goto LABEL_7;
    }
LABEL_23:
    *(_DWORD *)*a5 = 0;
    goto LABEL_22;
  }
  if ( a3 )
  {
    CRegion::SetHRGN(a5, a3, v11);
    v9 = 1;
    CRegion::GetBoundingRect((CRegion *)a5, (struct MilRectU *)&v28);
    RectangleCount = FastRegion::CRegion::GetRectangleCount((int **)a5);
    if ( v28 || RectangleCount != 1 || v29 != v26 || v30 != v27 )
      *((_BYTE *)this + 262) = 1;
  }
  if ( a4 && *(_DWORD *)a4 && (*((_DWORD *)a4 + 5) || *((_DWORD *)a4 + 6)) )
  {
    if ( v9 )
    {
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)v31, (const struct tagRECT *)((char *)a4 + 4));
      v21 = FastRegion::CRegion::Union((void **)a5, (const struct FastRegion::Internal::CRgnData **)v31);
      if ( v21 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v21, retaddr);
      FastRegion::CRegion::FreeMemory(v31);
      goto LABEL_7;
    }
    v16 = *((_DWORD *)a4 + 3);
    v22 = *((_DWORD *)a4 + 1);
    if ( v22 < v16 )
    {
      v23 = *((_DWORD *)a4 + 2);
      v24 = *((_DWORD *)a4 + 4);
      if ( v23 < v24 )
      {
        v18 = *a5;
        v25 = (_DWORD *)((char *)*a5 + 12);
        *((_DWORD *)v18 + 1) = v22;
        v19 = (char *)v18 + 28;
        *v25 = v23;
        *((_DWORD *)v18 + 7) = v22;
        v25[1] = (_DWORD)v18 + 28 - (_DWORD)v25;
        v20 = (char *)v18 + 20;
        *((_DWORD *)v18 + 5) = v24;
        goto LABEL_21;
      }
    }
    goto LABEL_23;
  }
LABEL_7:
  if ( a3 == (HRGN)1 || a2 && CGlobalCompositionSurfaceInfo::IsSwapChain(this) )
  {
    v15 = *(int *)(*(_QWORD *)(*((_QWORD *)this + 23) + 8LL) + 16LL) + *((_QWORD *)this + 23) + 8LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 40LL))(v15);
  }
  else if ( v9 )
  {
    v13 = *((_QWORD *)this + 23) + 8LL + *(int *)(*(_QWORD *)(*((_QWORD *)this + 23) + 8LL) + 16LL);
    (*(void (__fastcall **)(__int64, const struct FastRegion::Internal::CRgnData **))(*(_QWORD *)v13 + 32LL))(v13, a5);
  }
  return v9;
}
