/*
 * XREFs of ??_GCAnimationClock@@UEAAPEAXI@Z @ 0x1800315C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAnimationClock@@UEAA@XZ @ 0x18003151C (--1CAnimationClock@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

CAnimationClock *__fastcall CAnimationClock::`scalar deleting destructor'(CAnimationClock *this, char a2)
{
  CAnimationClock::~CAnimationClock(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CAnimationClock *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
