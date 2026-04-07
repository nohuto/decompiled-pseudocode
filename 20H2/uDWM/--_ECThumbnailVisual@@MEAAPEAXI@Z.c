/*
 * XREFs of ??_ECThumbnailVisual@@MEAAPEAXI@Z @ 0x180041430
 * Callers:
 *     <none>
 * Callees:
 *     ??1CThumbnailVisual@@MEAA@XZ @ 0x180013DC4 (--1CThumbnailVisual@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

CThumbnailVisual *__fastcall CThumbnailVisual::`vector deleting destructor'(CThumbnailVisual *this, char a2)
{
  CThumbnailVisual::~CThumbnailVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CThumbnailVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
