/*
 * XREFs of ??_EKeyboardDockClientProxy@@UEAAPEAXI@Z @ 0x180128770
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180001E60 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

KeyboardDockClientProxy *__fastcall KeyboardDockClientProxy::`vector deleting destructor'(
        KeyboardDockClientProxy *this,
        char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 6);
  if ( v4 )
    (**(void (__fastcall ***)(__int64))(v4 + 16))(v4 + 16);
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))this + 4);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
