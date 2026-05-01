/*
 * XREFs of ?Cleanup@VirtualDesktopGestureHandler@@UEAAXXZ @ 0x180442890
 * Callers:
 *     ?CancelSwipe@VirtualDesktopGestureHandler@@UEAAJXZ @ 0x1804427F0 (-CancelSwipe@VirtualDesktopGestureHandler@@UEAAJXZ.c)
 *     ?FinishSwipe@VirtualDesktopGestureHandler@@UEAAJHHHHI@Z @ 0x180443400 (-FinishSwipe@VirtualDesktopGestureHandler@@UEAAJHHHHI@Z.c)
 *     ?StartSwipe@VirtualDesktopGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x180444840 (-StartSwipe@VirtualDesktopGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z.c)
 * Callees:
 *     ??_GVirtualDesktopGestureContext@@QEAAPEAXI@Z @ 0x18044261C (--_GVirtualDesktopGestureContext@@QEAAPEAXI@Z.c)
 *     ?Uninitialize@VirtualDesktopGestureContext@@QEAAXXZ @ 0x180445160 (-Uninitialize@VirtualDesktopGestureContext@@QEAAXXZ.c)
 */

void __fastcall VirtualDesktopGestureHandler::Cleanup(VirtualDesktopGestureHandler *this)
{
  VirtualDesktopGestureContext *v2; // rcx
  VirtualDesktopGestureContext *v3; // rcx

  v2 = (VirtualDesktopGestureContext *)*((_QWORD *)this + 7);
  if ( v2 )
  {
    VirtualDesktopGestureContext::Uninitialize(v2);
    v3 = (VirtualDesktopGestureContext *)*((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = 0LL;
    if ( v3 )
      VirtualDesktopGestureContext::`scalar deleting destructor'(v3);
  }
}
