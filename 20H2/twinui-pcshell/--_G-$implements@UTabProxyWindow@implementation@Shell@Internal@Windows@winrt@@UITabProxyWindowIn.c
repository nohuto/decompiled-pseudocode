/*
 * XREFs of ??_G?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@UEAAPEAXI@Z @ 0x1800D563C
 * Callers:
 *     ??_E?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@W7EAAPEAXI@Z @ 0x1801009F0 (--_E-$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowIn.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

volatile signed __int32 *__fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::`scalar deleting destructor'(
        volatile signed __int32 *a1,
        char a2)
{
  _InterlockedExchangeAdd(a1 + 4, 0xFFFFFFFF);
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 0xFFFFFFFF);
  if ( (a2 & 1) != 0 )
    operator delete((void *)a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
