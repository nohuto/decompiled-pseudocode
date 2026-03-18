/*
 * XREFs of ?HasLetterboxingMargins@CBitmapRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAUMilRectF@@@Z @ 0x1800B1760
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSwapChain@CBitmapRenderStrategy@@SAJPEBVCSurfaceBrush@@PEAPEAVISwapChainRealization@@@Z @ 0x1800B0450 (-GetSwapChain@CBitmapRenderStrategy@@SAJPEBVCSurfaceBrush@@PEAPEAVISwapChainRealization@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CBitmapRenderStrategy::HasLetterboxingMargins(
        CBitmapRenderStrategy *this,
        const struct CSurfaceBrush *a2,
        struct MilRectF *a3)
{
  char v4; // bl
  char *v6; // rcx
  struct ISwapChainRealization *v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  if ( (int)CBitmapRenderStrategy::GetSwapChain(a2, &v7) >= 0 )
    v4 = (*(__int64 (__fastcall **)(struct ISwapChainRealization *, struct MilRectF *))(*(_QWORD *)v7 + 160LL))(v7, a3);
  else
    v4 = 0;
  if ( v7 )
  {
    v6 = (char *)v7 + *(int *)(*((_QWORD *)v7 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return v4;
}
