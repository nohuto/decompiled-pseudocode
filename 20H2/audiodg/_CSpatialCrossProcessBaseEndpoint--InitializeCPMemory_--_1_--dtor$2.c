/*
 * XREFs of _CSpatialCrossProcessBaseEndpoint::InitializeCPMemory_::_1_::dtor$2 @ 0x14006A99B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSpatialCrossProcessBaseEndpoint::InitializeCPMemory_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  std::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::~shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>(a2 + 96);
}
