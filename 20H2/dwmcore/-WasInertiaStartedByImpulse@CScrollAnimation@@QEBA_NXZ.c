/*
 * XREFs of ?WasInertiaStartedByImpulse@CScrollAnimation@@QEBA_NXZ @ 0x180201DA4
 * Callers:
 *     ?WasInertiaStartedByImpulse@CInteractionTracker@@QEBA_NW4ScrollAxis@@@Z @ 0x1801CCC68 (-WasInertiaStartedByImpulse@CInteractionTracker@@QEBA_NW4ScrollAxis@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CScrollAnimation::WasInertiaStartedByImpulse(CScrollAnimation *this)
{
  return (*(_BYTE *)((*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 328LL))(this) + 8) & 4) != 0;
}
