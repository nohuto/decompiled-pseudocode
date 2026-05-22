/*
 * XREFs of ?SendRestInputToClient@GameInputServerProxy@@UEAAXIK@Z @ 0x180042DC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GameInputServerProxy::SendRestInputToClient(RTL_SRWLOCK *this, unsigned int a2, unsigned int a3)
{
  PVOID Ptr; // rcx

  if ( TryAcquireSRWLockShared(this + 3) )
  {
    Ptr = this[4].Ptr;
    if ( Ptr )
      (*(void (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)Ptr + 48LL))(Ptr, a2, a3);
    ReleaseSRWLockShared(this + 3);
  }
}
