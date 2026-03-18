/*
 * XREFs of ?CreateWaitedConsumerReturnForConsumer@CFlipManager@@QEAAJ_KPEAPEAVCFlipWaitedConsumerReturn@@@Z @ 0x1C006A2BC
 * Callers:
 *     ?CreateWaitedConsumerReturnForConsumer@FlipManagerObject@@QEAAJ_KPEAPEAVCFlipWaitedConsumerReturn@@@Z @ 0x1C00693E4 (-CreateWaitedConsumerReturnForConsumer@FlipManagerObject@@QEAAJ_KPEAPEAVCFlipWaitedConsumerRetur.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipManager::CreateWaitedConsumerReturnForConsumer(
        CFlipManager *this,
        __int64 a2,
        struct CFlipWaitedConsumerReturn **a3)
{
  struct CFlipWaitedConsumerReturn *PoolWithQuotaTag; // rax

  PoolWithQuotaTag = (struct CFlipWaitedConsumerReturn *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x18uLL, 0x72774346u);
  if ( PoolWithQuotaTag )
  {
    *((_QWORD *)PoolWithQuotaTag + 1) = 0LL;
    *(_QWORD *)PoolWithQuotaTag = &CFlipWaitedConsumerReturn::`vftable';
    *((_QWORD *)PoolWithQuotaTag + 2) = a2;
  }
  *a3 = PoolWithQuotaTag;
  return PoolWithQuotaTag == 0LL ? 0xC0000017 : 0;
}
