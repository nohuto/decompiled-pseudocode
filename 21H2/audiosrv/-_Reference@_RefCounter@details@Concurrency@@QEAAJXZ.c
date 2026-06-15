/*
 * XREFs of ?_Reference@_RefCounter@details@Concurrency@@QEAAJXZ @ 0x18004CC40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Concurrency::details::_RefCounter::_Reference(Concurrency::details::_RefCounter *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
