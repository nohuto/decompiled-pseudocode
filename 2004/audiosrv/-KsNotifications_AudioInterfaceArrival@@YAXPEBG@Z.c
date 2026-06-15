/*
 * XREFs of ?KsNotifications_AudioInterfaceArrival@@YAXPEBG@Z @ 0x180105938
 * Callers:
 *     ?DeviceArrivalEvent@CAudioSrv@@UEAAJV?$CHeapPtr@U_DEV_BROADCAST_DEVICEINTERFACE_W@@VCCRTAllocator@ATL@@@ATL@@@Z @ 0x1800B9490 (-DeviceArrivalEvent@CAudioSrv@@UEAAJV-$CHeapPtr@U_DEV_BROADCAST_DEVICEINTERFACE_W@@VCCRTAllocato.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18002C164 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?KsNotifications_ProcessPnpInterface@@YAXPEAUIMMDevice@@PEBG1@Z @ 0x180057D14 (-KsNotifications_ProcessPnpInterface@@YAXPEAUIMMDevice@@PEBG1@Z.c)
 *     ??0?$CComQIPtr@UIPnpDeviceEnumerator@@$1?_GUID_3e52272f_3c89_45f8_be26_cb3b91ab42a0@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x1800696D0 (--0-$CComQIPtr@UIPnpDeviceEnumerator@@$1-_GUID_3e52272f_3c89_45f8_be26_cb3b91ab42a0@@3U__s_GUID@.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall KsNotifications_AudioInterfaceArrival(unsigned __int16 *a1)
{
  struct IUnknown *v2; // rcx
  __int64 v3; // r9
  const unsigned __int16 *v4; // r8
  struct IUnknown *v5[2]; // [rsp+20h] [rbp-10h] BYREF
  struct IUnknown *v6; // [rsp+48h] [rbp+18h] BYREF
  __int64 v7; // [rsp+50h] [rbp+20h] BYREF
  LPVOID pv; // [rsp+58h] [rbp+28h] BYREF

  v5[1] = (struct IUnknown *)-2LL;
  ATL::CComQIPtr<IPnpDeviceEnumerator,&__s_GUID const _GUID_3e52272f_3c89_45f8_be26_cb3b91ab42a0>::CComQIPtr<IPnpDeviceEnumerator,&__s_GUID const _GUID_3e52272f_3c89_45f8_be26_cb3b91ab42a0>(&v7);
  v5[0] = 0LL;
  v2 = 0LL;
  v6 = 0LL;
  pv = 0LL;
  v3 = v7;
  if ( !v7 )
    goto LABEL_12;
  if ( (*(int (__fastcall **)(__int64, unsigned __int16 *, struct IUnknown **))(*(_QWORD *)v7 + 40LL))(v7, a1, v5) >= 0 )
  {
    v2 = v6;
    if ( v6 != v5[0] )
    {
      ATL::AtlComQIPtrAssign(&v6, v5[0], &GUID_d666063f_1587_4e43_81f1_b948e807363f);
      v2 = v6;
    }
    if ( !v2 )
      goto LABEL_9;
    if ( ((int (__fastcall *)(struct IUnknown *, LPVOID *))v2->lpVtbl[1].Release)(v2, &pv) >= 0 )
      KsNotifications_ProcessPnpInterface((struct IMMDevice *)v6, a1, v4);
  }
  v2 = v6;
LABEL_9:
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
    v2 = v6;
  }
  v3 = v7;
LABEL_12:
  if ( v2 )
  {
    ((void (__fastcall *)(struct IUnknown *))v2->lpVtbl->Release)(v2);
    v3 = v7;
  }
  if ( v5[0] )
  {
    ((void (__fastcall *)(struct IUnknown *))v5[0]->lpVtbl->Release)(v5[0]);
    v3 = v7;
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
}
