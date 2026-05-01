/*
 * XREFs of ??$make@V?$module_count_wrapper@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@details@winrt@@$$V@winrt@@YA?AUWindowTabHost@Shell@Internal@Windows@0@XZ @ 0x1800C7FA8
 * Callers:
 *     ?CreateInstance@?$wrl_class_factory@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@winrt@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800C9F50 (-CreateInstance@-$wrl_class_factory@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18008D5BC (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18008DA68 (memset_0.c)
 *     ??0?$heap_implements@V?$module_count_wrapper@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@details@winrt@@@impl@winrt@@QEAA@XZ @ 0x1800C8804 (--0-$heap_implements@V-$module_count_wrapper@UWindowTabHost@implementation@Shell@Internal@Window.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall winrt::make<winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::WindowTabHost>,>(
        __int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  void *v5; // [rsp+30h] [rbp+8h]

  v5 = operator new(0x348uLL);
  memset_0(v5, 0, 0x348uLL);
  v2 = winrt::impl::heap_implements<winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::WindowTabHost>>::heap_implements<winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::WindowTabHost>>(v5);
  v3 = 0LL;
  if ( v2 )
    v3 = v2 + 32;
  *a1 = v3;
  return a1;
}
