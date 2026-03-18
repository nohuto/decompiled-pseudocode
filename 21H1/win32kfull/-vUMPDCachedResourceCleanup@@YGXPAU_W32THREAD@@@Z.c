/*
 * XREFs of ?vUMPDCachedResourceCleanup@@YGXPAU_W32THREAD@@@Z @ 0xA3A60
 * Callers:
 *     _UMPDCachedResourceCleanupWrap@4 @ 0xA3A4E (_UMPDCachedResourceCleanupWrap@4.c)
 *     ?UMPDDrvDisablePDEV@@YGXPAUDHPDEV__@@@Z @ 0x20B4A8 (-UMPDDrvDisablePDEV@@YGXPAUDHPDEV__@@@Z.c)
 * Callees:
 *     ?DestroyUMPDHeap@@YGXPAU_UMPDHEAP@@@Z @ 0x1F3A92 (-DestroyUMPDHeap@@YGXPAU_UMPDHEAP@@@Z.c)
 *     ?Close@PROXYPORT@@QAEXXZ @ 0x2105FF (-Close@PROXYPORT@@QAEXXZ.c)
 */

void __thiscall vUMPDCachedResourceCleanup(_DWORD *this)
{
  struct _UMPDHEAP *v2; // [esp+0h] [ebp-8h]
  int v3; // [esp+4h] [ebp-4h] BYREF

  if ( this[7] )
  {
    DestroyUMPDHeap(v2);
    this[7] = 0;
  }
  if ( this[8] )
  {
    v3 = this[8];
    PROXYPORT::Close((PROXYPORT *)&v3);
    this[8] = 0;
  }
}
