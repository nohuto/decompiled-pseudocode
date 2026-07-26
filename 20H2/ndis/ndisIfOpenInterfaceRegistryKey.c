/*
 * XREFs of ndisIfOpenInterfaceRegistryKey @ 0x1C010B4B8
 * Callers:
 *     ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0100188 (-ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJEC.c)
 *     ?ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C010711C (-ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_.c)
 *     ndisWdfOpenConfigurationKey @ 0x1C0114E30 (ndisWdfOpenConfigurationKey.c)
 *     ndisMiniportQueryInterfaceProperty @ 0x1C0116470 (ndisMiniportQueryInterfaceProperty.c)
 *     ?ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z @ 0x1C0126ABC (-ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z.c)
 *     ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C0126F14 (-ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     WPP_RECORDER_SF__guid_Dd @ 0x1C00B21A4 (WPP_RECORDER_SF__guid_Dd.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C01019F4 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C01020D8 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 */

__int64 __fastcall ndisIfOpenInterfaceRegistryKey(
        struct _GUID *a1,
        KRegKey *this,
        ACCESS_MASK a3,
        enum NetSetupSubkeyType a4)
{
  __int64 v8; // rdx
  int v9; // ebx
  PVOID v10; // r8
  __int64 v11; // r9
  int Dst; // [rsp+20h] [rbp-258h]
  wchar_t v14[256]; // [rsp+40h] [rbp-238h] BYREF

  netsetupBuildObjectPath(2LL, a1, 0, a4, v14);
  v9 = KRegKey::Open(this, a3, v14, 0LL);
  if ( v9 == -1073741772 )
  {
    v10 = qword_1C00E45D8;
    if ( !*((_BYTE *)qword_1C00E45D8 + 96) )
      goto LABEL_6;
    netsetupBuildObjectPath(2LL, a1, 1, a4, v14);
    v9 = KRegKey::Open(this, a3, v14, 0LL);
  }
  if ( v9 >= 0 )
    return 0LL;
LABEL_6:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_Dd(*((_QWORD *)WPP_GLOBAL_Control + 8), v8, (__int64)v10, v11, Dst, (__int64)a1);
  return (unsigned int)v9;
}
