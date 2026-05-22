/*
 * XREFs of ?SetActiveClient@GameInputServerProxy@@UEAAXK@Z @ 0x180042EC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GameInputServerProxy::SetActiveClient(RTL_SRWLOCK *this, unsigned int a2)
{
  PVOID Ptr; // rcx

  if ( TryAcquireSRWLockShared(this + 3) )
  {
    Ptr = this[4].Ptr;
    if ( Ptr )
      (*(void (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)Ptr + 64LL))(Ptr, a2);
    ReleaseSRWLockShared(this + 3);
  }
}
