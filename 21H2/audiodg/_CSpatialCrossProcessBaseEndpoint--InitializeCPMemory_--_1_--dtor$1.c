/*
 * XREFs of _CSpatialCrossProcessBaseEndpoint::InitializeCPMemory_::_1_::dtor$1 @ 0x14006AACF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSpatialCrossProcessBaseEndpoint::InitializeCPMemory_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::unique_ptr<SpatialBlock>::~unique_ptr<SpatialBlock>((void **)(a2 + 80));
}
