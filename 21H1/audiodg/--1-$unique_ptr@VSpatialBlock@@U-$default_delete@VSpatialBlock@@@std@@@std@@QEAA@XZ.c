/*
 * XREFs of ??1?$unique_ptr@VSpatialBlock@@U?$default_delete@VSpatialBlock@@@std@@@std@@QEAA@XZ @ 0x14005FF1C
 * Callers:
 *     _std::make_unique_SpatialBlock_0__::_1_::dtor$1 @ 0x14005FDEA (_std--make_unique_SpatialBlock_0__--_1_--dtor$1.c)
 *     _CSpatialCrossProcessBaseEndpoint::InitializeCPMemory_::_1_::dtor$1 @ 0x140061E5F (_CSpatialCrossProcessBaseEndpoint--InitializeCPMemory_--_1_--dtor$1.c)
 *     _CSpatialCrossProcessBaseEndpoint::MapCPMemory_::_1_::dtor$2 @ 0x1400621C0 (_CSpatialCrossProcessBaseEndpoint--MapCPMemory_--_1_--dtor$2.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C938 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<SpatialBlock>::~unique_ptr<SpatialBlock>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
