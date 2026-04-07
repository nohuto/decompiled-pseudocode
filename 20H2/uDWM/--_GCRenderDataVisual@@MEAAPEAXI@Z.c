/*
 * XREFs of ??_GCRenderDataVisual@@MEAAPEAXI@Z @ 0x180027640
 * Callers:
 *     <none>
 * Callees:
 *     ??1CRenderDataVisual@@MEAA@XZ @ 0x180025F2C (--1CRenderDataVisual@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

CBaseObject **__fastcall CRenderDataVisual::`scalar deleting destructor'(CBaseObject **this, char a2)
{
  CRenderDataVisual::~CRenderDataVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CBaseObject **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
