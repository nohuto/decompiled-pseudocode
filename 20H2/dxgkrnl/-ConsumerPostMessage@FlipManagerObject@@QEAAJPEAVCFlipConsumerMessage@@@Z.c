/*
 * XREFs of ?ConsumerPostMessage@FlipManagerObject@@QEAAJPEAVCFlipConsumerMessage@@@Z @ 0x1C0067748
 * Callers:
 *     NtFlipObjectConsumerPostMessage @ 0x1C00683C0 (NtFlipObjectConsumerPostMessage.c)
 *     ?FlipManagerDwmPostConsumerMessage@@YAJPEAUFlipManagerObject@@IPEAUFlipPropertyItem@@@Z @ 0x1C0069750 (-FlipManagerDwmPostConsumerMessage@@YAJPEAUFlipManagerObject@@IPEAUFlipPropertyItem@@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000EE2C (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0010C34 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FlipManagerObject::ConsumerPostMessage(FlipManagerObject *this, struct CFlipConsumerMessage *a2)
{
  int v4; // ebx

  v4 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v4 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, struct CFlipConsumerMessage *))(**((_QWORD **)this + 25) + 8LL))(
      *((_QWORD *)this + 25),
      a2);
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)v4;
}
