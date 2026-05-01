/*
 * XREFs of ?Release@?$implements_delegate@UNetworkStatusChangedEventHandler@Connectivity@Networking@Windows@winrt@@V_lambda_be8a6f579aab40e35446f4addbd39028_@@@impl@winrt@@UEAAIXZ @ 0x1800DCD80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler,_lambda_be8a6f579aab40e35446f4addbd39028_>::Release(
        volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 4);
  if ( !v1 )
    operator delete((void *)a1, (const struct std::nothrow_t *)0x18);
  return v1;
}
