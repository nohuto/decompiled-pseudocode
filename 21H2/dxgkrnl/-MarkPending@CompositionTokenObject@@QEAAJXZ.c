/*
 * XREFs of ?MarkPending@CompositionTokenObject@@QEAAJXZ @ 0x1C0005CB4
 * Callers:
 *     ?NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0005868 (-NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00069FC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CompositionTokenObject::MarkPending(CompositionTokenObject *this)
{
  unsigned int v2; // ebx

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)this + 72, 0LL);
  v2 = 0;
  if ( *((_DWORD *)this + 16) )
    v2 = -1073741823;
  else
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 5) + 16LL))((char *)this + 40);
  CPushLock::ReleaseLock((CompositionTokenObject *)((char *)this + 72));
  return v2;
}
