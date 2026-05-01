/*
 * XREFs of ?SetSite@ChromeManager@@UEAAJPEAUIUnknown@@@Z @ 0x1803E4680
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18000FAAC (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall ChromeManager::SetSite(IUnknown **this, struct IUnknown *a2)
{
  __int64 *v2; // r14
  char v5; // bp

  v2 = (__int64 *)(this + 2);
  if ( this[2] || !a2 )
  {
    v5 = 0;
    if ( *v2 && !a2 )
    {
      IUnknown_SetSite(this[5], 0LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 5);
      IUnknown_SetSite(this[6], 0LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 6);
    }
  }
  else
  {
    v5 = 1;
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(v2, (__int64)a2);
  if ( v5 )
  {
    IUnknown_SetSite(this[5], a2);
    IUnknown_SetSite(this[6], a2);
  }
  return 0LL;
}
