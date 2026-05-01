/*
 * XREFs of ??_EDefaultLaunchPositionOverride@@UEAAPEAXI@Z @ 0x180044DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Revoke@GlobalInterfaceTable@@SAXK@Z @ 0x18014161C (-Revoke@GlobalInterfaceTable@@SAXK@Z.c)
 */

// Hidden C++ exception states: #wind=1
DefaultLaunchPositionOverride *__fastcall DefaultLaunchPositionOverride::`vector deleting destructor'(
        DefaultLaunchPositionOverride *this,
        char a2)
{
  unsigned int v4; // ecx

  *((_DWORD *)this + 13) = -1073741823;
  *(_QWORD *)this = &CWRLObjectWithGITSite::`vftable';
  v4 = *((_DWORD *)this + 6);
  if ( v4 )
  {
    GlobalInterfaceTable::Revoke(v4);
    *((_DWORD *)this + 6) = 0;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((char *)this + 32);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
