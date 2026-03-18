/*
 * XREFs of ?CollectAdditionalDirtyRects@CPreComputeContext@@AEAAJPEAVCVisual@@PEAVSubTreeContext@1@@Z @ 0x1800880C4
 * Callers:
 *     ?CollectAdditionalDirtyRectsForSubTrees@CPreComputeContext@@AEAAJPEAVCVisual@@@Z @ 0x180088064 (-CollectAdditionalDirtyRectsForSubTrees@CPreComputeContext@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?Top@CBaseClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008A238 (-Top@CBaseClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPreComputeContext::CollectAdditionalDirtyRects(
        CPreComputeContext *this,
        struct CVisual *a2,
        struct CPreComputeContext::SubTreeContext *a3)
{
  struct CPreComputeContext::SubTreeContext *v3; // r11
  __int128 *v4; // r8
  int v6; // eax
  void *v7; // r9
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF

  v3 = a3;
  v4 = 0LL;
  v9 = 0LL;
  if ( *((_DWORD *)v3 + 98) )
  {
    CBaseClipStack::Top((char *)v3 + 392, &v9);
    v4 = &v9;
  }
  v6 = *((_DWORD *)v3 + 90);
  if ( v6 )
    v7 = (void *)(*((_QWORD *)v3 + 47) + 68LL * (unsigned int)(v6 - 1));
  else
    v7 = &CMILMatrix::Identity;
  return (*(__int64 (__fastcall **)(struct CVisual *, _QWORD, _QWORD, void *, __int128 *))(*(_QWORD *)a2 + 320LL))(
           a2,
           *((_QWORD *)v3 + 54),
           *((_QWORD *)v3 + 53),
           v7,
           v4);
}
