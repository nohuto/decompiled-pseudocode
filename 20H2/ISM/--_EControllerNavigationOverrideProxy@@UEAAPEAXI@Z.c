/*
 * XREFs of ??_EControllerNavigationOverrideProxy@@UEAAPEAXI@Z @ 0x180001DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180001E50 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ControllerNavigationOverrideProxy *__fastcall ControllerNavigationOverrideProxy::`vector deleting destructor'(
        ControllerNavigationOverrideProxy *this,
        char a2)
{
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((char *)this + 32);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
