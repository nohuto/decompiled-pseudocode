/*
 * XREFs of ?NotifyRenderedRect@CDDisplaySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18027BCF0
 * Callers:
 *     ?NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801C8868 (-NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoi.c)
 * Callees:
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18003FA54 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x1800823C8 (-Subtract@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18008248C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CDDisplaySwapChain::NotifyRenderedRect(__int64 a1, const struct tagRECT *a2)
{
  void (__fastcall ***v4)(_QWORD, int *); // rcx
  _DWORD **v5; // rdi
  int v6; // eax
  const struct FastRegion::Internal::CRgnData ***v7; // rdi
  const struct FastRegion::Internal::CRgnData ***i; // rbx
  int v9; // r9d
  int v10; // r10d
  _DWORD *v11; // rdx
  _DWORD ***v12; // r8
  _DWORD ***j; // rdx
  int v14; // [rsp+20h] [rbp-78h] BYREF
  int v15; // [rsp+24h] [rbp-74h]
  void *v16[10]; // [rsp+30h] [rbp-68h] BYREF
  const void *retaddr; // [rsp+98h] [rbp+0h]

  v4 = (void (__fastcall ***)(_QWORD, int *))(*(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 296) + 8LL) + 16LL)
                                            + *(_QWORD *)(a1 + 296)
                                            + 8LL);
  (**v4)(v4, &v14);
  v5 = (_DWORD **)(a1 + 360);
  if ( a2 )
  {
    FastRegion::CRegion::CRegion((FastRegion::CRegion *)v16, a2);
    v6 = FastRegion::CRegion::Union(
           (const struct FastRegion::Internal::CRgnData **)(a1 + 360),
           (const struct FastRegion::Internal::CRgnData **)v16);
    if ( v6 < 0 )
      ModuleFailFastForHRESULT(v6, retaddr);
    v7 = *(const struct FastRegion::Internal::CRgnData ****)(a1 + 440);
    for ( i = *(const struct FastRegion::Internal::CRgnData ****)(a1 + 432); i != v7; ++i )
      CRegion::Subtract(*i, (const struct FastRegion::Internal::CRgnData **)v16);
    FastRegion::CRegion::FreeMemory(v16);
  }
  else
  {
    v9 = v14;
    v10 = v15;
    if ( v14 <= 0 || v15 <= 0 )
    {
      **v5 = 0;
    }
    else
    {
      v11 = *v5;
      v11[1] = 0;
      v11[7] = 0;
      v11[3] = 0;
      v11[8] = v9;
      v11[4] = 16;
      *v11 = 2;
      v11[2] = v9;
      v11[6] = 16;
      v11[5] = v10;
    }
    v12 = *(_DWORD ****)(a1 + 440);
    for ( j = *(_DWORD ****)(a1 + 432); j != v12; ++j )
      ***j = 0;
  }
}
