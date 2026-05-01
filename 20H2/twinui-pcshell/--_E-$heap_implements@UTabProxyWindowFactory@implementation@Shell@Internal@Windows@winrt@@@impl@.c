/*
 * XREFs of ??_E?$heap_implements@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1800C9B8C
 * Callers:
 *     ??_ETabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@W7EAAPEAXI@Z @ 0x180100890 (--_ETabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800D12B8 (--1TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory *__fastcall winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory>::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory *a1,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory::~TabProxyWindowFactory(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x58);
  return a1;
}
