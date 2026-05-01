/*
 * XREFs of ??1?$unique_ptr@VVirtualDesktopGestureContext@@U?$default_delete@VVirtualDesktopGestureContext@@@wistd@@@wistd@@QEAA@XZ @ 0x180442000
 * Callers:
 *     _VirtualDesktopGestureHandler::StartSwipe_::_1_::dtor$1 @ 0x180444AA9 (_VirtualDesktopGestureHandler--StartSwipe_--_1_--dtor$1.c)
 * Callees:
 *     ??_GVirtualDesktopGestureContext@@QEAAPEAXI@Z @ 0x18044261C (--_GVirtualDesktopGestureContext@@QEAAPEAXI@Z.c)
 */

VirtualDesktopGestureContext *__fastcall wistd::unique_ptr<VirtualDesktopGestureContext,wistd::default_delete<VirtualDesktopGestureContext>>::~unique_ptr<VirtualDesktopGestureContext,wistd::default_delete<VirtualDesktopGestureContext>>(
        VirtualDesktopGestureContext **a1,
        unsigned int a2)
{
  VirtualDesktopGestureContext *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (VirtualDesktopGestureContext *)VirtualDesktopGestureContext::`scalar deleting destructor'(result, a2);
  return result;
}
