/*
 * XREFs of ?RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z @ 0x140003D60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNode@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@AEBAPEAVCNode@12@AEBQEAUIUnknown@@AEAI1AEAPEAV312@@Z @ 0x140003F9C (-GetNode@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V.c)
 *     ?SetAt@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIUnknown@@AEBUListValue@DeviceRegistrations@GraphStreamingResourceManager@@@Z @ 0x140003FE0 (-SetAt@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V-$.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1400193A4 (-RemoveAtPos@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManage.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x14001A8BC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GraphStreamingResourceManager::RegisterDevice(
        GraphStreamingResourceManager *this,
        struct IAudioDeviceEndpoint *a2,
        struct DeviceRegistrationToken__ **a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  __int64 v7; // r12
  __int64 Node; // rax
  struct DeviceRegistrationToken__ *v9; // rbx
  int v10; // edi
  __int64 v12; // [rsp+40h] [rbp-A8h] BYREF
  char v13; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v14; // [rsp+50h] [rbp-98h] BYREF
  __int64 v15; // [rsp+58h] [rbp-90h] BYREF
  __int64 v16; // [rsp+60h] [rbp-88h] BYREF
  char *v17; // [rsp+68h] [rbp-80h]
  char *v18; // [rsp+70h] [rbp-78h]
  __int128 v19; // [rsp+78h] [rbp-70h] BYREF
  __int64 v20; // [rsp+88h] [rbp-60h]
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+90h] [rbp-58h]
  _BYTE v22[80]; // [rsp+98h] [rbp-50h] BYREF
  char v23; // [rsp+108h] [rbp+20h] BYREF

  v12 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v18 = (char *)this + 16;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v21 = v6;
  ((void (__fastcall *)(struct IAudioDeviceEndpoint *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
    a2,
    &GUID_00000000_0000_0000_c000_000000000046,
    &v14);
  v7 = v14;
  v12 = v14;
  v15 = v14;
  v17 = (char *)this + 200;
  Node = ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::GetNode(
           (int)this + 200,
           (unsigned int)&v15,
           (unsigned int)&v13,
           (unsigned int)&v23,
           (__int64)v22);
  v9 = (struct DeviceRegistrationToken__ *)Node;
  if ( Node )
  {
    _InterlockedIncrement((volatile signed __int32 *)(Node + 8));
  }
  else
  {
    v19 = 0LL;
    v20 = 0LL;
    LODWORD(v19) = 1;
    v16 = v7;
    v9 = (struct DeviceRegistrationToken__ *)ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::SetAt(
                                               (char *)this + 200,
                                               &v16,
                                               &v19);
    v10 = (*(__int64 (__fastcall **)(char *, struct IAudioDeviceEndpoint *, __int64))(*((_QWORD *)this - 1) + 64LL))(
            (char *)this - 8,
            a2,
            (__int64)v9 + 16);
    if ( v10 < 0 )
      goto LABEL_4;
  }
  *a3 = v9;
  v9 = 0LL;
  v10 = 0;
LABEL_4:
  if ( v9 )
    ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::RemoveAtPos(
      v17,
      v9);
  if ( v18 )
    LeaveCriticalSection(v6);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  return (unsigned int)v10;
}
