/*
 * XREFs of ?get@?$runtime_class_name@UIObjectWithSite@@X@impl@winrt@@SA?AUhstring@3@XZ @ 0x18046666C
 * Callers:
 *     ?GetRuntimeClassName@?$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIDragDropSimulator@34567@@winrt@@EEBA?AUhstring@2@XZ @ 0x1800DC8A0 (-GetRuntimeClassName@-$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@S.c)
 * Callees:
 *     WINRT_WindowsCreateString @ 0x18008E961 (WINRT_WindowsCreateString.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801B25C8 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

HSTRING *__fastcall winrt::impl::runtime_class_name<IObjectWithSite,void>::get(HSTRING *a1)
{
  HRESULT v2; // eax
  HSTRING string; // [rsp+30h] [rbp+8h] BYREF

  string = 0LL;
  v2 = WINRT_WindowsCreateString(L"{fc4801a3-2ba9-11cf-a229-00aa003d7352}", 0x26u, &string);
  if ( v2 < 0 )
    winrt::throw_hresult(v2);
  *a1 = string;
  return a1;
}
