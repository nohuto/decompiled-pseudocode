/*
 * XREFs of ?NotifyRenderedRect@CCompSwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18028F2D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18003FA54 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006E4C8 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NA.c)
 *     ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x1800823C8 (-Subtract@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18008248C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CCompSwapChain::NotifyRenderedRect(__int64 a1, int *a2)
{
  void (__fastcall ***v4)(_QWORD, __int64 *); // rcx
  int v5; // eax
  int v6; // r10d
  int v7; // eax
  _DWORD *v8; // r8
  __int64 v9; // [rsp+20h] [rbp-29h] BYREF
  struct tagRECT v10; // [rsp+28h] [rbp-21h] BYREF
  void *v11[10]; // [rsp+40h] [rbp-9h] BYREF
  const void *retaddr; // [rsp+A8h] [rbp+5Fh]

  v4 = (void (__fastcall ***)(_QWORD, __int64 *))(*(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL) + 16LL)
                                                + *(_QWORD *)(a1 + 96)
                                                + 8LL);
  (**v4)(v4, &v9);
  v10.left = 0;
  v10.top = 0;
  v5 = v9;
  v6 = HIDWORD(v9);
  *(_QWORD *)&v10.right = v9;
  if ( a2 )
  {
    if ( TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v10.left, a2) )
    {
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)v11, &v10);
      v7 = FastRegion::CRegion::Union(
             (const struct FastRegion::Internal::CRgnData **)(a1 + 168),
             (const struct FastRegion::Internal::CRgnData **)v11);
      if ( v7 < 0 )
        ModuleFailFastForHRESULT(v7, retaddr);
      CRegion::Subtract(
        (const struct FastRegion::Internal::CRgnData **)(a1 + 240),
        (const struct FastRegion::Internal::CRgnData **)v11);
      if ( *(_DWORD *)(a1 + 160) == 3 )
        CRegion::Subtract(
          (const struct FastRegion::Internal::CRgnData **)(a1 + 312),
          (const struct FastRegion::Internal::CRgnData **)v11);
      FastRegion::CRegion::FreeMemory(v11);
    }
  }
  else
  {
    if ( (int)v9 <= 0 || SHIDWORD(v9) <= 0 )
    {
      **(_DWORD **)(a1 + 168) = 0;
    }
    else
    {
      v8 = *(_DWORD **)(a1 + 168);
      v8[1] = 0;
      v8[7] = 0;
      v8[3] = 0;
      v8[8] = v5;
      v8[2] = v5;
      *v8 = 2;
      v8[4] = 16;
      v8[6] = 16;
      v8[5] = v6;
    }
    **(_DWORD **)(a1 + 240) = 0;
    if ( *(_DWORD *)(a1 + 160) == 3 )
      **(_DWORD **)(a1 + 312) = 0;
  }
}
