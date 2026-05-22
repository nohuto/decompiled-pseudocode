/*
 * XREFs of ?UnloadGameInput@GameInputServerProxy@@AEAAXXZ @ 0x1800440C4
 * Callers:
 *     ?LoadGameInput@GameInputServerProxy@@AEAAJXZ @ 0x180043430 (-LoadGameInput@GameInputServerProxy@@AEAAJXZ.c)
 *     ?OnDisposePublic@GameInputServerProxy@@EEAAXXZ @ 0x180043900 (-OnDisposePublic@GameInputServerProxy@@EEAAXXZ.c)
 * Callees:
 *     ??_GGameInputModule@@QEAAPEAXI@Z @ 0x180042F4C (--_GGameInputModule@@QEAAPEAXI@Z.c)
 *     ?StopWatching@GameInputWatcher@@QEAAXXZ @ 0x180043F70 (-StopWatching@GameInputWatcher@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GameInputServerProxy::UnloadGameInput(RTL_SRWLOCK *this)
{
  PVOID Ptr; // rcx
  struct _RTL_CRITICAL_SECTION *v3; // rcx

  AcquireSRWLockExclusive(this + 5);
  Ptr = this[6].Ptr;
  if ( Ptr )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    this[6].Ptr = 0LL;
  }
  v3 = (struct _RTL_CRITICAL_SECTION *)this[8].Ptr;
  if ( v3 )
  {
    GameInputModule::`scalar deleting destructor'(v3);
    this[8].Ptr = 0LL;
  }
  GameInputWatcher::StopWatching((GameInputWatcher *)&this[9]);
  ReleaseSRWLockExclusive(this + 5);
}
