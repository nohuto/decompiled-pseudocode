/*
 * XREFs of ?GetNextAsyncId@platform@details@Concurrency@@YAIXZ @ 0x180009990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Concurrency::details::platform::GetNextAsyncId(Concurrency::details::platform *this)
{
  return (unsigned int)_InterlockedIncrement(&dword_18005ADC0);
}
