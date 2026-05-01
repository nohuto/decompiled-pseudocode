/*
 * XREFs of ??1VirtualTouchpadUriHandlerFactory@@EEAA@XZ @ 0x180329088
 * Callers:
 *     ??_GVirtualTouchpadUriHandlerFactory@@EEAAPEAXI@Z @ 0x180329150 (--_GVirtualTouchpadUriHandlerFactory@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ @ 0x180085524 (-Create@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV-$DefaultM.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall VirtualTouchpadUriHandlerFactory::~VirtualTouchpadUriHandlerFactory(
        VirtualTouchpadUriHandlerFactory *this)
{
  __int64 *v2; // rax

  *(_QWORD *)this = &VirtualTouchpadUriHandlerFactory::`vftable';
  v2 = Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create();
  (*(void (__fastcall **)(__int64 *))(*v2 + 16))(v2);
  *((_DWORD *)this + 3) = -1073741823;
}
