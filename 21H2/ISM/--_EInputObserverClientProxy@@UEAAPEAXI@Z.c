/*
 * XREFs of ??_EInputObserverClientProxy@@UEAAPEAXI@Z @ 0x1800F3C70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180001E50 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F3D4C (-InternalRelease@-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

InputObserverClientProxy *__fastcall InputObserverClientProxy::`vector deleting destructor'(
        InputObserverClientProxy *this,
        char a2)
{
  Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalRelease((char *)this + 48);
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))this + 4);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
