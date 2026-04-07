/*
 * XREFs of ??_GCLivePreview@@MEAAPEAXI@Z @ 0x180081640
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ??1CLivePreview@@MEAA@XZ @ 0x18008152C (--1CLivePreview@@MEAA@XZ.c)
 */

CBaseObject **__fastcall CLivePreview::`scalar deleting destructor'(CBaseObject **this, char a2)
{
  CLivePreview::~CLivePreview(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CBaseObject **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
