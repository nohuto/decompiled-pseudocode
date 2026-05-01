/*
 * XREFs of ??_G?$wnf_subscription_state@$$BY0CA@E@details@wil@@UEAAPEAXI@Z @ 0x1800A2540
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$wnf_subscription_state@$$BY0CA@E@details@wil@@UEAA@XZ @ 0x1800A0F44 (--1-$wnf_subscription_state@$$BY0CA@E@details@wil@@UEAA@XZ.c)
 */

wil::details::wnf_subscription_state_base *__fastcall wil::details::wnf_subscription_state<unsigned char [32]>::`scalar deleting destructor'(
        wil::details::wnf_subscription_state_base *a1,
        char a2)
{
  wil::details::wnf_subscription_state<unsigned char [32]>::~wnf_subscription_state<unsigned char [32]>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x88);
  return a1;
}
