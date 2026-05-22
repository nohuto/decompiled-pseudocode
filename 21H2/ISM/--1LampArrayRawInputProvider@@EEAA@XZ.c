/*
 * XREFs of ??1LampArrayRawInputProvider@@EEAA@XZ @ 0x18009ECB0
 * Callers:
 *     ??_GLampArrayRawInputProvider@@EEAAPEAXI@Z @ 0x18009EE78 (--_GLampArrayRawInputProvider@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_GLampArrayClientListEntry@LampArrayRawInputProvider@@QEAAPEAXI@Z @ 0x18009EDF8 (--_GLampArrayClientListEntry@LampArrayRawInputProvider@@QEAAPEAXI@Z.c)
 *     ??_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x18009EE3C (--_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 *     ?Clear@?$NtList@UDeviceListEntry@PnpDeviceWatcher@@@@QEAAXXZ @ 0x18009EF04 (-Clear@-$NtList@UDeviceListEntry@PnpDeviceWatcher@@@@QEAAXXZ.c)
 *     ?Clear@?$NtList@UNotificationListEntry@PnpDeviceWatcher@@@@QEAAXXZ @ 0x18009EF4C (-Clear@-$NtList@UNotificationListEntry@PnpDeviceWatcher@@@@QEAAXXZ.c)
 *     ?Release@ConsumerControlManager@@UEAAKXZ @ 0x1800A03B0 (-Release@ConsumerControlManager@@UEAAKXZ.c)
 */

void __fastcall LampArrayRawInputProvider::~LampArrayRawInputProvider(LampArrayRawInputProvider *this)
{
  ULONG_PTR v2; // rcx
  unsigned int v3; // edx
  LampArrayRawInputProvider::LampArrayClientListEntry **v4; // rdi
  LampArrayRawInputProvider::LampArrayClientListEntry *v5; // rcx
  LampArrayRawInputProvider::LampArrayClientListEntry **v6; // rax
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry **v7; // rdi
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry *v8; // rcx
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry **v9; // rax

  *(_QWORD *)this = &LampArrayRawInputProvider::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 1) = &LampArrayRawInputProvider::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &LampArrayRawInputProvider::`vftable'{for `RefCountedObject'};
  CloseHandle(*((HANDLE *)this + 30));
  v2 = *((_QWORD *)this + 31);
  if ( v2 )
  {
    *((_QWORD *)this + 31) = 0LL;
    ConsumerControlManager::Release(v2);
  }
  NtList<PnpDeviceWatcher::DeviceListEntry>::Clear((char *)this + 200);
  NtList<PnpDeviceWatcher::DeviceListEntry>::Clear((char *)this + 176);
  NtList<PnpDeviceWatcher::NotificationListEntry>::Clear((char *)this + 152);
  v4 = (LampArrayRawInputProvider::LampArrayClientListEntry **)((char *)this + 72);
  while ( 1 )
  {
    v5 = *v4;
    v6 = *(LampArrayRawInputProvider::LampArrayClientListEntry ***)*v4;
    if ( *((LampArrayRawInputProvider::LampArrayClientListEntry ***)*v4 + 1) != v4 || v6[1] != v5 )
LABEL_14:
      __fastfail(3u);
    *v4 = (LampArrayRawInputProvider::LampArrayClientListEntry *)v6;
    v6[1] = (LampArrayRawInputProvider::LampArrayClientListEntry *)v4;
    if ( v5 == (LampArrayRawInputProvider::LampArrayClientListEntry *)v4 )
      break;
    LampArrayRawInputProvider::LampArrayClientListEntry::`scalar deleting destructor'(v5, v3);
    --*((_QWORD *)this + 11);
  }
  v7 = (ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)((char *)this + 48);
  while ( 1 )
  {
    v8 = *v7;
    v9 = *(ConsumerControlManager::ConsumerControlNexusDeviceListEntry ***)*v7;
    if ( *((ConsumerControlManager::ConsumerControlNexusDeviceListEntry ***)*v7 + 1) != v7 || v9[1] != v8 )
      goto LABEL_14;
    *v7 = (ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)v9;
    v9[1] = (ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)v7;
    if ( v8 == (ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)v7 )
      break;
    ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'(v8, v3);
    --*((_QWORD *)this + 8);
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 4);
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
}
