/*
 * XREFs of ??1?$unique_ptr@UDockableDeviceInfo@@U?$default_delete@UDockableDeviceInfo@@@std@@@std@@QEAA@XZ @ 0x18009C4F8
 * Callers:
 *     _DockableDeviceCollection::OnDeviceAttach_::_1_::dtor$0 @ 0x18009C6FF (_DockableDeviceCollection--OnDeviceAttach_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<DockableDeviceInfo>::~unique_ptr<DockableDeviceInfo>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)0x628);
}
