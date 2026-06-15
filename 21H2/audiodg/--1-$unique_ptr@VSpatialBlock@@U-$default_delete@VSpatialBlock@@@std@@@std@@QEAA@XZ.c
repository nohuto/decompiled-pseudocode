/*
 * XREFs of ??1?$unique_ptr@VSpatialBlock@@U?$default_delete@VSpatialBlock@@@std@@@std@@QEAA@XZ @ 0x140068B8C
 * Callers:
 *     _std::make_unique_SpatialBlock_0__::_1_::dtor$1 @ 0x140068A5A (_std--make_unique_SpatialBlock_0__--_1_--dtor$1.c)
 *     _CSpatialCrossProcessBaseEndpoint::InitializeCPMemory_::_1_::dtor$1 @ 0x14006AACF (_CSpatialCrossProcessBaseEndpoint--InitializeCPMemory_--_1_--dtor$1.c)
 *     _CSpatialCrossProcessBaseEndpoint::MapCPMemory_::_1_::dtor$2 @ 0x14006AE30 (_CSpatialCrossProcessBaseEndpoint--MapCPMemory_--_1_--dtor$2.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCA8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<SpatialBlock>::~unique_ptr<SpatialBlock>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
