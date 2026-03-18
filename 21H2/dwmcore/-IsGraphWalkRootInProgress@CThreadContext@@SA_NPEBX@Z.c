/*
 * XREFs of ?IsGraphWalkRootInProgress@CThreadContext@@SA_NPEBX@Z @ 0x18008BAD4
 * Callers:
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x18008BD78 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3D.c)
 * Callees:
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x180062474 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x1800AF6DC (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800D18A0 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 */

char __fastcall CThreadContext::IsGraphWalkRootInProgress(const void *a1)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // r11
  __int64 v5; // rdx
  unsigned __int64 v6; // r10
  struct CThreadContext *v7; // [rsp+38h] [rbp+10h] BYREF

  if ( (int)CThreadContext::GetCurrent(&v7) < 0 || !CPtrArrayBase::GetCount((struct CThreadContext *)((char *)v7 + 24)) )
    return 0;
  while ( a1 != (const void *)CPtrArrayBase::operator[](v3 + 24, v2) )
  {
    v2 = v5 + 1;
    if ( v2 >= v6 )
      return 0;
  }
  return 1;
}
