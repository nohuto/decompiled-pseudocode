/*
 * XREFs of ??_GCText@@EEAAPEAXI@Z @ 0x18003C220
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResources@CText@@AEAAXXZ @ 0x1800153A4 (-ReleaseResources@CText@@AEAAXXZ.c)
 *     ??1CRenderDataVisual@@MEAA@XZ @ 0x180016284 (--1CRenderDataVisual@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

CText *__fastcall CText::`scalar deleting destructor'(CText *this, char a2)
{
  __int64 v3; // rdx

  v3 = *((_QWORD *)this + 36);
  *(_QWORD *)this = &CText::`vftable';
  if ( v3 )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 36) = 0LL;
  }
  CText::ReleaseResources((CBaseObject **)this);
  CRenderDataVisual::~CRenderDataVisual((CBaseObject **)this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CText *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
