/*
 * XREFs of ?SyncLock@CLegacyRenderTarget@@UEAAX_NI@Z @ 0x1801C0DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoesIntersect@CDirtyRegion@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BCAD8 (-DoesIntersect@CDirtyRegion@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SyncLock@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@I_N@Z @ 0x1801B8310 (-SyncLock@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@I_N@Z.c)
 */

void __fastcall CLegacyRenderTarget::SyncLock(CLegacyRenderTarget *this, char a2, unsigned int a3)
{
  char v4; // al

  if ( (!*((_BYTE *)this + 18469) || a2)
    && a3 > *((_DWORD *)this + 4577)
    && (a2
     || *((_BYTE *)this + 18468)
     || *((_BYTE *)this + 18467)
     || CDirtyRegion::DoesIntersect(*((_QWORD *)this + 2) + 104LL, (float *)this + 4505)) )
  {
    v4 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 18) + 240LL))((char *)this - 144);
    if ( (int)COverlayContext::SyncLock(
                (CLegacyRenderTarget *)((char *)this + 48),
                *((struct IOverlaySwapChain **)this + 4),
                *((_DWORD *)this + 4578) + 1 + *((_DWORD *)this + 4577),
                v4) >= 0 )
    {
      ++*((_DWORD *)this + 4576);
      ++*((_DWORD *)this + 4577);
    }
  }
}
