/*
 * XREFs of ??1ObservableObjectArray@@QEAA@XZ @ 0x18036FBD8
 * Callers:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VObservableObjectArray@@UIApplicationViewChangeListener@@UISwitchItemCollection@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18036FBA0 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VObservableObjectArray@@.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VObservableObjectArray@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180371780 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VObservableObjectArray@@V-$VirtualDes.c)
 *     ??_EVirtualDesktopItemCollection@@UEAAPEAXI@Z @ 0x1803717C0 (--_EVirtualDesktopItemCollection@@UEAAPEAXI@Z.c)
 *     ??1SwitchItemFilteredCollection@@UEAA@XZ @ 0x180372918 (--1SwitchItemFilteredCollection@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VObservableObjectArray@@UIObservableObjectArrayChanged@@UIObservableObjectArrayChangedBeginEnd@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$ChainInterfaces@UISwitchItemFilteredCollection@@UIObservableObjectArray@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180372B60 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VObservableObjectArray@@UIObservableO.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ObservableObjectArray::~ObservableObjectArray(ObservableObjectArray *this)
{
  void *v2; // rcx
  unsigned __int64 v3; // rsi
  void *v4; // rcx
  unsigned __int64 v5; // rsi
  void *v6; // rcx
  unsigned __int64 v7; // rdi

  v2 = (void *)*((_QWORD *)this + 14);
  if ( v2 )
  {
    v3 = 0LL;
    if ( *((_QWORD *)this + 15) )
    {
      do
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(*((_QWORD *)this + 14) + 8 * v3++));
      while ( v3 < *((_QWORD *)this + 15) );
      v2 = (void *)*((_QWORD *)this + 14);
    }
    CoTaskMemFree(v2);
    *((_QWORD *)this + 14) = 0LL;
  }
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 12);
  v4 = (void *)*((_QWORD *)this + 8);
  if ( v4 )
  {
    v5 = 0LL;
    if ( *((_QWORD *)this + 9) )
    {
      do
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(*((_QWORD *)this + 8) + 8 * v5++));
      while ( v5 < *((_QWORD *)this + 9) );
      v4 = (void *)*((_QWORD *)this + 8);
    }
    CoTaskMemFree(v4);
    *((_QWORD *)this + 8) = 0LL;
  }
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 6);
  v6 = (void *)*((_QWORD *)this + 2);
  if ( v6 )
  {
    v7 = 0LL;
    if ( *((_QWORD *)this + 3) )
    {
      do
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(*((_QWORD *)this + 2) + 8 * v7++));
      while ( v7 < *((_QWORD *)this + 3) );
      v6 = (void *)*((_QWORD *)this + 2);
    }
    CoTaskMemFree(v6);
    *((_QWORD *)this + 2) = 0LL;
  }
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
}
