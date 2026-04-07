/*
 * XREFs of ??_GCSWRListener@@UEAAPEAXI@Z @ 0x180044F88
 * Callers:
 *     ??_ECSWRListener@@W7EAAPEAXI@Z @ 0x180056130 (--_ECSWRListener@@W7EAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

CSWRListener *__fastcall CSWRListener::`scalar deleting destructor'(CSWRListener *this, char a2)
{
  *((_QWORD *)this + 1) = &CGlassColorizationResources::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CSWRListener *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
