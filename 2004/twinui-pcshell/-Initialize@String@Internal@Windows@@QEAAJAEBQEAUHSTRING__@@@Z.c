/*
 * XREFs of ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180049D9C
 * Callers:
 *     ?RuntimeClassInitialize@CLaunchActivatedEventArgs@@QEAAJPEAUHSTRING__@@0@Z @ 0x180049D3C (-RuntimeClassInitialize@CLaunchActivatedEventArgs@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?RegisterForViewEventsWithOptions@ViewEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1W4ViewEventRegistrationFlags@ViewManagerInterop@Desktop@Shell@Internal@4@PEAUEventRegistrationToken@@@Z @ 0x1802A57F0 (-RegisterForViewEventsWithOptions@ViewEventDispatcher@@UEAAJPEAU-$ITypedEventHandler@PEAUIViewWr.c)
 *     ?RegisterForViewEventsWithOptions@WindowEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1W4ViewEventRegistrationFlags@ViewManagerInterop@Desktop@Shell@Internal@4@PEAUEventRegistrationToken@@@Z @ 0x1802B7F40 (-RegisterForViewEventsWithOptions@WindowEventDispatcher@@UEAAJPEAU-$ITypedEventHandler@PEAUIView.c)
 *     _lambda_609f8103609db179fd7ee2c103db6114_::operator() @ 0x1802DDB54 (_lambda_609f8103609db179fd7ee2c103db6114_--operator().c)
 *     ?SetPersistingStateName@WindowWrapperBase@@UEAAXPEAUHSTRING__@@@Z @ 0x1802E0020 (-SetPersistingStateName@WindowWrapperBase@@UEAAXPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::String::Initialize(HSTRING *this, HSTRING *a2)
{
  HRESULT v3; // ebx
  HSTRING v4; // rcx
  HSTRING newString; // [rsp+30h] [rbp+8h] BYREF

  v3 = WindowsDuplicateString(*a2, &newString);
  if ( v3 >= 0 )
  {
    v4 = *this;
    *this = newString;
    WindowsDeleteString(v4);
  }
  return (unsigned int)v3;
}
