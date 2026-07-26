/*
 * XREFs of ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x1C00318D0
 * Callers:
 *     ?ndisWdmPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0032330 (-ndisWdmPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     NdisWdfPnPAddDevice @ 0x1C00620F0 (NdisWdfPnPAddDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008B64 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C0031DE8 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     ??1NDIS_MINIPORT_CREATION_CONFIG@@QEAA@XZ @ 0x1C0032114 (--1NDIS_MINIPORT_CREATION_CONFIG@@QEAA@XZ.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1C00321B0 (WPP_RECORDER_SF__guid_.c)
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003DB58 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     McTemplateK0z_EtwWriteTransfer @ 0x1C0060414 (McTemplateK0z_EtwWriteTransfer.c)
 *     ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C01001E8 (-ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJEC.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEB_WAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0100418 (-QueryValueString@KRegKey@@QEAAJPEB_WAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@R.c)
 *     ?ndisTemporarilyScribbleNetLuidIndex@@YAXAEAVKRegKey@@AEAT_NET_LUID_LH@@@Z @ 0x1C0106DF0 (-ndisTemporarilyScribbleNetLuidIndex@@YAXAEAVKRegKey@@AEAT_NET_LUID_LH@@@Z.c)
 *     ?ndisCheckIfDeviceNeedsUpdates@@YAJAEAVKRegKey@@AEA_N@Z @ 0x1C0106F40 (-ndisCheckIfDeviceNeedsUpdates@@YAJAEAVKRegKey@@AEA_N@Z.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z @ 0x1C01078D8 (-QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z.c)
 *     ndisMiniBlockFromDriverObject @ 0x1C0108094 (ndisMiniBlockFromDriverObject.c)
 *     ?ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C01080D0 (-ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_.c)
 *     ?ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C01081BC (-ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$defaul.c)
 *     ?ndisCheckIfDeviceNeedsInstallation@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C01082E8 (-ndisCheckIfDeviceNeedsInstallation@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z @ 0x1C0108408 (-QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z.c)
 *     ?ndisCheckAlwaysStartFlag@@YAJAEAVKRegKey@@AEA_N@Z @ 0x1C0115238 (-ndisCheckAlwaysStartFlag@@YAJAEAVKRegKey@@AEA_N@Z.c)
 *     ?ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z @ 0x1C0115E5C (-ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C012C504 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 */

__int64 __fastcall ndisPnPAddDevice(struct _DRIVER_OBJECT *a1, struct _DEVICE_OBJECT *a2, void *a3, void **a4)
{
  NTSTATUS updated; // edi
  PVOID *p_P; // rdx
  PVOID *v10; // rcx
  PVOID v12; // rbx
  int v13; // edx
  int v14; // eax
  unsigned __int8 v15; // cl
  __int64 v16; // rcx
  __int64 v17; // r8
  LOGICAL CheckStamp[2]; // [rsp+30h] [rbp-A9h]
  bool v19[8]; // [rsp+40h] [rbp-99h] BYREF
  PVOID P; // [rsp+48h] [rbp-91h] BYREF
  bool v21; // [rsp+50h] [rbp-89h] BYREF
  struct KRegKey v22; // [rsp+58h] [rbp-81h] BYREF
  void *m_ptr; // [rsp+60h] [rbp-79h] BYREF
  HANDLE DeviceRegKey; // [rsp+68h] [rbp-71h] BYREF
  GUID Guid; // [rsp+70h] [rbp-69h] BYREF
  union _NET_LUID_LH v26; // [rsp+80h] [rbp-59h] BYREF
  __int64 v27; // [rsp+88h] [rbp-51h] BYREF
  struct _DEVICE_OBJECT *v28; // [rsp+90h] [rbp-49h]
  char v29; // [rsp+98h] [rbp-41h]
  int v30; // [rsp+9Ch] [rbp-3Dh]
  __int128 v31; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v32; // [rsp+B0h] [rbp-29h]
  int v33; // [rsp+B8h] [rbp-21h]
  void *v34; // [rsp+C0h] [rbp-19h]
  unsigned __int8 v35[4]; // [rsp+C8h] [rbp-11h] BYREF
  int v36; // [rsp+CCh] [rbp-Dh]
  __int64 v37; // [rsp+D0h] [rbp-9h]

  DeviceRegKey = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x3Du,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
      (char)a1,
      a2);
  updated = IoOpenDeviceRegistryKey(a2, 2u, 0xC2000000, &DeviceRegKey);
  if ( updated < 0 )
    goto LABEL_47;
  v22.m_ptr = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    &v22,
    DeviceRegKey);
  v19[0] = 0;
  v21 = 0;
  P = 0LL;
  updated = ndisCheckIfDeviceNeedsInstallation(&v22, &P, v19);
  if ( updated < 0 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0x7274534Bu);
    if ( !v22.m_ptr )
      goto LABEL_47;
    P = v22.m_ptr;
    p_P = &P;
    v10 = &m_ptr;
    m_ptr = ZwClose;
    goto LABEL_9;
  }
  if ( !v19[0] )
  {
    updated = ndisCheckIfDeviceNeedsPseudoMigration(&v22);
    if ( updated < 0 )
    {
LABEL_12:
      if ( P )
        ExFreePoolWithTag(P, 0x7274534Bu);
      if ( !v22.m_ptr )
        goto LABEL_47;
      m_ptr = v22.m_ptr;
      p_P = &m_ptr;
      v10 = &P;
      P = ZwClose;
LABEL_9:
      wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>(v10, p_P);
      goto LABEL_47;
    }
    if ( !v19[0] )
    {
      updated = ndisCheckIfDeviceNeedsFullMigration(&v22, &P, v19);
      if ( updated < 0 )
        goto LABEL_12;
      if ( !v19[0] )
      {
        updated = ndisCheckIfDeviceNeedsUpdates(&v22, v19);
        if ( updated < 0 )
          goto LABEL_12;
        if ( !v19[0] )
          goto LABEL_30;
      }
    }
  }
  ZwUpdateWnfStateData(&WNF_NDIS_ADAPTER_ARRIVAL, 0LL, 0, 0LL, 0LL, 0, 0);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x3Eu,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids);
  updated = ndisCheckAlwaysStartFlag(&v22, &v21);
  if ( updated < 0 )
    goto LABEL_12;
  if ( v21 )
  {
LABEL_30:
    v12 = P;
    v27 = 0LL;
    v26.Value = 0LL;
    v28 = 0LL;
    v29 = 0;
    v30 = 0;
    v31 = 0LL;
    v32 = 0LL;
    v33 = 0;
    *(_WORD *)v35 = 0;
    v36 = 0;
    v37 = 0LL;
    v34 = a3;
    updated = RtlGUIDFromString((PCUNICODE_STRING)P, &Guid);
    if ( updated >= 0 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = 4;
        WPP_RECORDER_SF__guid_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v13,
          13,
          63,
          (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
          (__int64)&Guid);
      }
      if ( !a3 )
        goto LABEL_41;
      v14 = KRegKey::QueryValueBoolean(&v22, L"HardwareLoopback", v35, FailIfNotFound);
      v15 = v35[0];
      if ( v14 < 0 )
        v15 = 0;
      v35[0] = v15;
      updated = ndisWdfUpdateAddDeviceParameters(&v22, (struct NDIS_MINIPORT_CREATION_CONFIG *)&Guid);
      if ( updated >= 0 )
      {
LABEL_41:
        if ( !ndisIfReadInterfaceAddDeviceParameters((struct NDIS_MINIPORT_CREATION_CONFIG *)&Guid, a2) )
        {
          LODWORD(P) = 0;
          KRegKey::QueryValueUlong(&v22, L"IMMiniport", (unsigned int *)&P);
          KRegKey::QueryValueString(&v22, L"ComponentID", &v31);
          ndisTemporarilyScribbleNetLuidIndex(&v22, &v26);
          if ( Microsoft_Windows_NDISEnableBits < 0 )
            McTemplateK0z_EtwWriteTransfer(v16, &AddPnPDevice, v17, *(_QWORD *)(*((_QWORD *)&v31 + 1) + 8LL));
          v37 = ndisMiniBlockFromDriverObject(a1);
          v28 = a2;
          wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
            &v27,
            v22.m_ptr);
          updated = ndisAddDevice(&Guid, a4);
          NDIS_MINIPORT_CREATION_CONFIG::~NDIS_MINIPORT_CREATION_CONFIG((NDIS_MINIPORT_CREATION_CONFIG *)&Guid);
          if ( v12 )
            ExFreePoolWithTag(v12, 0x7274534Bu);
          goto LABEL_47;
        }
        updated = -1073741823;
      }
    }
    NDIS_MINIPORT_CREATION_CONFIG::~NDIS_MINIPORT_CREATION_CONFIG((NDIS_MINIPORT_CREATION_CONFIG *)&Guid);
    if ( v12 )
      ExFreePoolWithTag(v12, 0x7274534Bu);
    if ( v22.m_ptr )
    {
      m_ptr = v22.m_ptr;
      P = ZwClose;
      wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>(&P, &m_ptr);
    }
LABEL_47:
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      CheckStamp[0] = updated;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xDu,
        0x40u,
        (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
        (char)a2,
        *(_QWORD *)CheckStamp);
    }
    return (unsigned int)updated;
  }
  if ( P )
    ExFreePoolWithTag(P, 0x7274534Bu);
  if ( v22.m_ptr )
  {
    m_ptr = v22.m_ptr;
    P = ZwClose;
    wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>(&P, &m_ptr);
  }
  return 3221226645LL;
}
