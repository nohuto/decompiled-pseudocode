/*
 * XREFs of ?QueryInterface@?$EventInvocationContext@$00@details@wil@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CFCF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::EventInvocationContext<1>::QueryInterface(__int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,wil::details::IEventInvocationContext,Microsoft::WRL::FtmBase>::QueryInterface(a1 - 16);
}
