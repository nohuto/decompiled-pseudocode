/*
 * XREFs of ?SendMouseInput@GameInputServerProxy@@UEAAXIPEBU_MOUSE_INPUT_DATA@@K@Z @ 0x180042D30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GameInputServerProxy::SendMouseInput(
        RTL_SRWLOCK *this,
        unsigned int a2,
        const struct _MOUSE_INPUT_DATA *a3,
        unsigned int a4)
{
  PVOID Ptr; // rcx

  if ( TryAcquireSRWLockShared(this + 3) )
  {
    Ptr = this[4].Ptr;
    if ( Ptr )
      (*(void (__fastcall **)(PVOID, _QWORD, const struct _MOUSE_INPUT_DATA *, _QWORD))(*(_QWORD *)Ptr + 40LL))(
        Ptr,
        a2,
        a3,
        a4);
    ReleaseSRWLockShared(this + 3);
  }
}
