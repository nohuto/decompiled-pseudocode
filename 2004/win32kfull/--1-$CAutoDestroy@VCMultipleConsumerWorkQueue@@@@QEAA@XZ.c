/*
 * XREFs of ??1?$CAutoDestroy@VCMultipleConsumerWorkQueue@@@@QEAA@XZ @ 0x1C02DF6C8
 * Callers:
 *     ?UmfdCallSessionInitialize@@YAJXZ @ 0x1C010DF38 (-UmfdCallSessionInitialize@@YAJXZ.c)
 * Callees:
 *     ?Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z @ 0x1C0123634 (-Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z.c)
 */

void __fastcall CAutoDestroy<CMultipleConsumerWorkQueue>::~CAutoDestroy<CMultipleConsumerWorkQueue>(void ***a1)
{
  void **v1; // rcx

  v1 = *a1;
  if ( v1 )
    CMultipleConsumerWorkQueue::Destroy(v1);
}
