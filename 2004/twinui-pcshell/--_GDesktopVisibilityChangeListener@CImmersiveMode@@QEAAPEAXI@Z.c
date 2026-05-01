/*
 * XREFs of ??_GDesktopVisibilityChangeListener@CImmersiveMode@@QEAAPEAXI@Z @ 0x18016031C
 * Callers:
 *     ??1?$CAutoMemPtr@UDesktopVisibilityChangeListener@CImmersiveMode@@@@QEAA@XZ @ 0x18015FE44 (--1-$CAutoMemPtr@UDesktopVisibilityChangeListener@CImmersiveMode@@@@QEAA@XZ.c)
 *     ?RegisterForDesktopVisibilityChanges@CImmersiveMode@@UEAAJW4DESKTOP_VISIBILITY_NOTIFICATION_TYPE@@PEAUIDesktopVisibilityChangesNotification@@PEAK@Z @ 0x180160D90 (-RegisterForDesktopVisibilityChanges@CImmersiveMode@@UEAAJW4DESKTOP_VISIBILITY_NOTIFICATION_TYPE.c)
 *     ?UnregisterForDesktopVisibilityChanges@CImmersiveMode@@UEAAJK@Z @ 0x1801610A0 (-UnregisterForDesktopVisibilityChanges@CImmersiveMode@@UEAAJK@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Revoke@GlobalInterfaceTable@@SAXK@Z @ 0x18014161C (-Revoke@GlobalInterfaceTable@@SAXK@Z.c)
 */

// Hidden C++ exception states: #wind=1
CImmersiveMode::DesktopVisibilityChangeListener *__fastcall CImmersiveMode::DesktopVisibilityChangeListener::`scalar deleting destructor'(
        CImmersiveMode::DesktopVisibilityChangeListener *this)
{
  unsigned int v2; // ecx

  v2 = *(_DWORD *)this;
  if ( v2 )
    GlobalInterfaceTable::Revoke(v2);
  operator delete(this, (const struct std::nothrow_t *)8);
  return this;
}
