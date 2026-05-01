/*
 * XREFs of ?DelayedUpdateActivationTimestamp@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@_K@Z @ 0x1800B74B8
 * Callers:
 *     ?OnApplicationViewChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800B88D0 (-OnApplicationViewChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIA.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18008D1AC (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_InitCoro$1 @ 0x1800B5818 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActivationTimestamp.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v6; // rax
  unsigned int v8; // [rsp+338h] [rbp+10h] BYREF

  v6 = operator new(0x2F0uLL);
  v8 = 0;
  winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp__InitCoro_1(
    &v8,
    v6,
    a2,
    a3,
    a1);
  return a2;
}
