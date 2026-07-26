/*
 * XREFs of ?ndisPcwEnableAlwaysOnCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0107090
 * Callers:
 *     ?ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0106BD0 (-ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C0031848 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003D5B8 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     ?ndisPcwEnableAlwaysOnCounterSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEAVKRegKey@@W4_NDIS_COUNTER_SET_ID@@KPEB_W@Z @ 0x1C0107158 (-ndisPcwEnableAlwaysOnCounterSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEAVKRegKey@@W4_NDIS_COUNTER_SET_.c)
 */

void __fastcall ndisPcwEnableAlwaysOnCounters(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int64 v2; // [rsp+40h] [rbp+10h] BYREF
  HANDLE DeviceRegKey; // [rsp+48h] [rbp+18h] BYREF
  NTSTATUS (__stdcall *v4)(HANDLE); // [rsp+50h] [rbp+20h] BYREF

  v2 = 0LL;
  DeviceRegKey = 0LL;
  if ( IoOpenDeviceRegistryKey(a1->PhysicalDeviceObject, 2u, 1u, &DeviceRegKey) >= 0 )
  {
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      &v2,
      (__int64)DeviceRegKey);
    ndisPcwEnableAlwaysOnCounterSet(a1, &v2, 1LL);
    ndisPcwEnableAlwaysOnCounterSet(a1, &v2, 2LL);
    if ( v2 )
    {
      v4 = ZwClose;
      wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>((__int64 (__fastcall **)(_QWORD))&v4, &v2);
    }
  }
}
