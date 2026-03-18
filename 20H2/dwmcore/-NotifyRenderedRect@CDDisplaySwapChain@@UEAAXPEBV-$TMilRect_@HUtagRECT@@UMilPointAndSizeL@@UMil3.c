/*
 * XREFs of ?NotifyRenderedRect@CDDisplaySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802379B0
 * Callers:
 *     ?NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18018BC14 (-NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoi.c)
 * Callees:
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800473E8 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180047530 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800A5E54 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A6118 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18020CF74 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CDDisplaySwapChain::NotifyRenderedRect(__int64 a1, const struct tagRECT *a2)
{
  void (__fastcall ***v4)(_QWORD, int *); // rcx
  _DWORD **v5; // rbx
  int v6; // eax
  const struct FastRegion::Internal::CRgnData ***v7; // rbx
  const struct FastRegion::Internal::CRgnData ***v8; // rdi
  int v9; // eax
  int v10; // r9d
  int v11; // r10d
  _DWORD *v12; // rdx
  _DWORD ***v13; // r8
  _DWORD ***i; // rdx
  int v15; // [rsp+20h] [rbp-78h] BYREF
  int v16; // [rsp+24h] [rbp-74h]
  void *v17[10]; // [rsp+30h] [rbp-68h] BYREF
  const void *retaddr; // [rsp+98h] [rbp+0h]

  v4 = (void (__fastcall ***)(_QWORD, int *))(*(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 160) + 8LL) + 16LL)
                                            + *(_QWORD *)(a1 + 160)
                                            + 8LL);
  (**v4)(v4, &v15);
  v5 = (_DWORD **)(a1 + 232);
  if ( a2 )
  {
    FastRegion::CRegion::CRegion((FastRegion::CRegion *)v17, a2);
    v6 = FastRegion::CRegion::Union((void **)(a1 + 232), (const struct FastRegion::Internal::CRgnData **)v17);
    if ( v6 < 0 )
      ModuleFailFastForHRESULT(v6, retaddr);
    v7 = *(const struct FastRegion::Internal::CRgnData ****)(a1 + 304);
    v8 = *(const struct FastRegion::Internal::CRgnData ****)(a1 + 312);
    while ( v7 != v8 )
    {
      v9 = FastRegion::CRegion::Subtract(*v7, (const struct FastRegion::Internal::CRgnData **)v17);
      if ( v9 < 0 )
        ModuleFailFastForHRESULT(v9, retaddr);
      ++v7;
    }
    FastRegion::CRegion::FreeMemory(v17);
  }
  else
  {
    v10 = v15;
    v11 = v16;
    if ( v15 <= 0 || v16 <= 0 )
    {
      **v5 = 0;
    }
    else
    {
      v12 = *v5;
      v12[1] = 0;
      v12[7] = 0;
      v12[3] = 0;
      v12[8] = v10;
      v12[4] = 16;
      *v12 = 2;
      v12[2] = v10;
      v12[6] = 16;
      v12[5] = v11;
    }
    v13 = *(_DWORD ****)(a1 + 312);
    for ( i = *(_DWORD ****)(a1 + 304); i != v13; ++i )
      ***i = 0;
  }
}
