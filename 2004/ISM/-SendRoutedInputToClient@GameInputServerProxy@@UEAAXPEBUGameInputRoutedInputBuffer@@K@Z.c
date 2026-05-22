/*
 * XREFs of ?SendRoutedInputToClient@GameInputServerProxy@@UEAAXPEBUGameInputRoutedInputBuffer@@K@Z @ 0x180042EA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GameInputServerProxy::SendRoutedInputToClient(
        RTL_SRWLOCK *this,
        const struct GameInputRoutedInputBuffer *a2,
        unsigned int a3)
{
  PVOID Ptr; // rcx

  if ( TryAcquireSRWLockShared(this + 3) )
  {
    Ptr = this[4].Ptr;
    if ( Ptr )
      (*(void (__fastcall **)(PVOID, const struct GameInputRoutedInputBuffer *, _QWORD))(*(_QWORD *)Ptr + 56LL))(
        Ptr,
        a2,
        a3);
    ReleaseSRWLockShared(this + 3);
  }
}
