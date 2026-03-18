/*
 * XREFs of ?SetBackgroundAccessor@InteractiveControlDevice@@QAEXPAUtagWND@@I@Z @ 0x1B26CF
 * Callers:
 *     ?AcquireDeviceBackgroundAccess@InteractiveControlManager@@QAEJKIIPAUtagWND@@@Z @ 0xD6454 (-AcquireDeviceBackgroundAccess@InteractiveControlManager@@QAEJKIIPAUtagWND@@@Z.c)
 *     ?ClearBackgroundAccessors@InteractiveControlManager@@QAEJK@Z @ 0x1ADAB0 (-ClearBackgroundAccessors@InteractiveControlManager@@QAEJK@Z.c)
 *     ?OnDeviceAttach@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@@Z @ 0x1AE299 (-OnDeviceAttach@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@@Z.c)
 *     ?Deinitialize@InteractiveControlDevice@@QAEXXZ @ 0x1B1A87 (-Deinitialize@InteractiveControlDevice@@QAEXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall InteractiveControlDevice::SetBackgroundAccessor(
        InteractiveControlDevice *this,
        int a2,
        struct tagWND *a3,
        unsigned int a4)
{
  if ( *((struct tagWND **)this + 6) == a3 )
  {
    *((_DWORD *)this + 7) |= a4;
  }
  else
  {
    HMAssignmentLock(a3, a2);
    *((_DWORD *)this + 7) = a4;
  }
}
