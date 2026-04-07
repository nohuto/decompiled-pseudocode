/*
 * XREFs of ??_GCRedirectVisualProxy@@MEAAPEAXI@Z @ 0x18003FBC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResourceProxy@@MEAA@XZ @ 0x180019454 (--1CResourceProxy@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

CRedirectVisualProxy *__fastcall CRedirectVisualProxy::`scalar deleting destructor'(
        CRedirectVisualProxy *this,
        char a2)
{
  *(_QWORD *)this = &CRedirectVisualProxy::`vftable';
  CResourceProxy::~CResourceProxy(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CRedirectVisualProxy *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
