/*
 * XREFs of ?Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z @ 0x1C0124924
 * Callers:
 *     ?UmfdCallSessionInitialize@@YAJXZ @ 0x1C00E9D24 (-UmfdCallSessionInitialize@@YAJXZ.c)
 *     UmfdSessionUninitialize @ 0x1C0129020 (UmfdSessionUninitialize.c)
 *     ??1?$CAutoDestroy@VCMultipleConsumerWorkQueue@@@@QEAA@XZ @ 0x1C02DE288 (--1-$CAutoDestroy@VCMultipleConsumerWorkQueue@@@@QEAA@XZ.c)
 * Callees:
 *     ?Destroy@CWorkItemQueue@@SAXQEAV1@@Z @ 0x1C0124964 (-Destroy@CWorkItemQueue@@SAXQEAV1@@Z.c)
 *     ?Destroy@CEventPool@@SAXQEAV1@@Z @ 0x1C01249BC (-Destroy@CEventPool@@SAXQEAV1@@Z.c)
 */

void __fastcall CMultipleConsumerWorkQueue::Destroy(void **pv)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *pv;
  if ( v2 )
    CWorkItemQueue::Destroy(v2);
  v3 = pv[1];
  if ( v3 )
    CEventPool::Destroy(v3);
  EngFreeMem(pv);
}
