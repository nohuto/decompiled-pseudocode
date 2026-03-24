/*
 * XREFs of ?CreateWaitedConsumerReturnForConsumer@FlipManagerObject@@QEAAJ_KPEAPEAVCFlipWaitedConsumerReturn@@@Z @ 0x1C006A2F4
 * Callers:
 *     ?FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAPEAVCFlipTokenOperation@@@Z @ 0x1C006A484 (-FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAPEAVCFlipTokenOperation@@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000EEBC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0010CC4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?CreateWaitedConsumerReturnForConsumer@CFlipManager@@QEAAJ_KPEAPEAVCFlipWaitedConsumerReturn@@@Z @ 0x1C006B1CC (-CreateWaitedConsumerReturnForConsumer@CFlipManager@@QEAAJ_KPEAPEAVCFlipWaitedConsumerReturn@@@Z.c)
 */

__int64 __fastcall FlipManagerObject::CreateWaitedConsumerReturnForConsumer(
        FlipManagerObject *this,
        unsigned __int64 a2,
        struct CFlipWaitedConsumerReturn **a3)
{
  CPushLock *v3; // rdi
  CFlipManager *v6; // rcx
  int WaitedConsumerReturnForConsumer; // ebx

  v3 = (FlipManagerObject *)((char *)this + 40);
  WaitedConsumerReturnForConsumer = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( WaitedConsumerReturnForConsumer >= 0 )
  {
    WaitedConsumerReturnForConsumer = CFlipManager::CreateWaitedConsumerReturnForConsumer(v6, a2, a3);
    CPushLock::ReleaseLock(v3);
  }
  return (unsigned int)WaitedConsumerReturnForConsumer;
}
