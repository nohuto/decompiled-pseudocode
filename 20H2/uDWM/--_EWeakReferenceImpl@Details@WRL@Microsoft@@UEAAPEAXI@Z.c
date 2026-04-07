/*
 * XREFs of ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800C11C0
 * Callers:
 *     ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@3@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x1800C13E0 (-GetWeakReference@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphic.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

Microsoft::WRL::Details::WeakReferenceImpl *__fastcall Microsoft::WRL::Details::WeakReferenceImpl::`vector deleting destructor'(
        Microsoft::WRL::Details::WeakReferenceImpl *this,
        char a2)
{
  *(_QWORD *)this = &Microsoft::WRL::Details::WeakReferenceImpl::`vftable';
  *((_DWORD *)this + 4) = -1073741823;
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                          + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
