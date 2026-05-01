/*
 * XREFs of ?GetViewData@CAppLayoutItem@@UEAAXPEAUAPPLICATION_VIEW_DATA@@@Z @ 0x180460CF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAppLayoutItem::GetViewData(RTL_SRWLOCK *this, struct APPLICATION_VIEW_DATA *a2)
{
  RTL_SRWLOCK *v4; // rsi

  v4 = this + 3;
  AcquireSRWLockShared(this + 3);
  (*((void (__fastcall **)(RTL_SRWLOCK *, struct APPLICATION_VIEW_DATA *))this[-1].Ptr + 6))(this - 1, a2);
  if ( v4 )
    ReleaseSRWLockShared(v4);
}
