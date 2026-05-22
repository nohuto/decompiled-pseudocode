/*
 * XREFs of ?FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x18002808C
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x180026EC0 (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 * Callees:
 *     ?GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAUHSTRING__@@@Z @ 0x180026D30 (-GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAU.c)
 *     ?FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x180027194 (-FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _anonymous_namespace_::WindowsSafeIsEqualString @ 0x18009F710 (_anonymous_namespace_--WindowsSafeIsEqualString.c)
 */

__int64 __fastcall PnpDeviceWatcher::FindDeviceListEntryByInterfacePath(
        PnpDeviceWatcher *this,
        HSTRING *a2,
        char a3,
        struct PnpDeviceWatcher::DeviceListEntry **a4)
{
  char *v4; // rsi
  char *i; // rbx
  int DeviceStringProperty; // eax
  HSTRING v11; // rcx
  unsigned int DeviceListEntryByInstanceId; // ebx
  HSTRING *v14; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HSTRING string; // [rsp+50h] [rbp+8h] BYREF

  v4 = (char *)this + 56;
  for ( i = (char *)*((_QWORD *)this + 7); ; i = *(char **)i )
  {
    if ( i == v4 )
    {
      *a4 = 0LL;
      WindowsDeleteString(0LL);
      string = 0LL;
      v14 = a2;
      DeviceStringProperty = PnpApiWrapper::Details::GetDeviceStringProperty(
                               (PnpApiWrapper::Details *)PnpApiWrapper::Adapters::GetDeviceInterfaceProperty,
                               (unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *))&v14,
                               (void *)&DEVPKEY_Device_InstanceId,
                               &string);
      v11 = string;
      DeviceListEntryByInstanceId = DeviceStringProperty;
      if ( string )
      {
        if ( DeviceStringProperty < 0 )
        {
LABEL_7:
          WindowsDeleteString(v11);
          return DeviceListEntryByInstanceId;
        }
        DeviceListEntryByInstanceId = PnpDeviceWatcher::FindDeviceListEntryByInstanceId(this, string, a3, a4);
      }
      else
      {
        if ( DeviceStringProperty < 0 )
          goto LABEL_7;
        DeviceListEntryByInstanceId = -2147467259;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2EB,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
          (const char *)0x80004005LL,
          (int)v14);
      }
      v11 = string;
      goto LABEL_7;
    }
    if ( (unsigned __int8)anonymous_namespace_::WindowsSafeIsEqualString(*(_QWORD *)(*((_QWORD *)i + 2) + 32LL), a2) )
      break;
  }
  *a4 = (struct PnpDeviceWatcher::DeviceListEntry *)i;
  return 0LL;
}
