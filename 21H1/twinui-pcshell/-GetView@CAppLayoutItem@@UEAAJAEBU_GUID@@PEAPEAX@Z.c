/*
 * XREFs of ?GetView@CAppLayoutItem@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180460C60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayoutItem::GetView(RTL_SRWLOCK *this, const struct _GUID *a2, void **a3)
{
  RTL_SRWLOCK *v6; // rbp
  unsigned int v7; // ebx

  *a3 = 0LL;
  v6 = this + 3;
  AcquireSRWLockShared(this + 3);
  v7 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, const struct _GUID *, void **))this[-1].Ptr + 4))(this - 1, a2, a3);
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v7;
}
