/*
 * XREFs of ?ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C010711C
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C012F258 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_qDD @ 0x1C00184FC (WPP_RECORDER_SF_qDD_ea_1C00184FC.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C0031A88 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003D7F8 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     ?ndisCheckDeviceNeedReinstallWithNewIfType@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C006CBD4 (-ndisCheckDeviceNeedReinstallWithNewIfType@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAP.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z @ 0x1C0107878 (-QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z.c)
 *     ?QueryValueUshort@KRegKey@@QEAAJPEB_WPEAG@Z @ 0x1C0107990 (-QueryValueUshort@KRegKey@@QEAAJPEB_WPEAG@Z.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x1C010B4B8 (ndisIfOpenInterfaceRegistryKey.c)
 *     ?SetValueUlong@KRegKey@@QEAAJPEB_WK@Z @ 0x1C0122154 (-SetValueUlong@KRegKey@@QEAAJPEB_WK@Z.c)
 */

__int64 __fastcall ndisCheckNetworkInterfaceDataMismatch(
        struct _NDIS_MINIPORT_BLOCK *a1,
        const struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *a2)
{
  bool v4; // zf
  char v5; // r14
  wchar_t *v6; // rsi
  NTSTATUS v7; // ebx
  _DEVICE_OBJECT *PhysicalDeviceObject; // rcx
  unsigned __int16 IfType; // bx
  int v10; // r13d
  __int64 v11; // r14
  __int64 v12; // r13
  unsigned int v13; // r8d
  unsigned int v14; // eax
  unsigned __int16 v15; // r9
  const wchar_t *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v20; // [rsp+38h] [rbp-91h]
  char v21[4]; // [rsp+38h] [rbp-91h]
  char v22[4]; // [rsp+38h] [rbp-91h]
  unsigned __int16 v23; // [rsp+40h] [rbp-89h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-81h] BYREF
  unsigned int Data; // [rsp+50h] [rbp-79h] BYREF
  unsigned int v26; // [rsp+58h] [rbp-71h] BYREF
  wchar_t *v27; // [rsp+60h] [rbp-69h] BYREF
  _UNICODE_STRING ValueName; // [rsp+68h] [rbp-61h] BYREF
  wchar_t *v29; // [rsp+78h] [rbp-51h]
  wchar_t *v30; // [rsp+80h] [rbp-49h]
  HANDLE DeviceRegKey; // [rsp+88h] [rbp-41h] BYREF
  __int128 v32; // [rsp+90h] [rbp-39h] BYREF
  int v33; // [rsp+A0h] [rbp-29h]
  wchar_t v34; // [rsp+A4h] [rbp-25h]
  wchar_t v35[8]; // [rsp+A8h] [rbp-21h] BYREF
  _OWORD v36[2]; // [rsp+B8h] [rbp-11h] BYREF
  int v37; // [rsp+D8h] [rbp+Fh]
  wchar_t v38; // [rsp+DCh] [rbp+13h]

  v33 = *(_DWORD *)L"pe";
  v34 = aMediatype_0[10];
  v4 = (a1->Flags & 0x100) == 0;
  v5 = 0;
  wcscpy(v35, L"*IfType");
  v37 = *(_DWORD *)L"pe";
  v32 = *(_OWORD *)L"*MediaType";
  v38 = aPhysicalmediat_0[18];
  *(_QWORD *)&ValueName.Length = a2;
  v36[0] = *(_OWORD *)L"*PhysicalMediaType";
  v23 = 0;
  v36[1] = *(_OWORD *)L"lMediaType";
  v26 = 0;
  Data = 0;
  DeviceRegKey = 0LL;
  KeyHandle = 0LL;
  if ( v4 )
  {
    PhysicalDeviceObject = a1->PhysicalDeviceObject;
    v6 = v35;
    v29 = (wchar_t *)&v32;
    v27 = v35;
    v30 = (wchar_t *)v36;
    v7 = IoOpenDeviceRegistryKey(PhysicalDeviceObject, 2u, 0xC2000000, &DeviceRegKey);
    if ( v7 < 0 )
      goto LABEL_45;
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      (__int64 *)&KeyHandle,
      (__int64)DeviceRegKey);
  }
  else
  {
    v29 = (wchar_t *)&v32 + 1;
    v6 = &v35[1];
    v30 = (wchar_t *)v36 + 1;
    v27 = &v35[1];
    v7 = ndisIfOpenInterfaceRegistryKey(&a1->InterfaceGuid, (KRegKey *)&KeyHandle, 1u, PropertyBag);
    if ( v7 < 0 )
      goto LABEL_45;
  }
  v7 = KRegKey::QueryValueUshort((KRegKey *)&KeyHandle, v6, &v23);
  if ( v7 < 0 )
    goto LABEL_45;
  IfType = a2->IfType;
  v10 = v23;
  if ( v23 != IfType )
  {
    if ( a1->MajorNdisVersion >= 6u )
    {
      v11 = *(_QWORD *)&ValueName.Length;
      if ( ndisCheckDeviceNeedReinstallWithNewIfType(
             a1,
             *(const struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES **)&ValueName.Length) != 1 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v22 = v10;
          WPP_RECORDER_SF_qDD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xDu,
            0xC9u,
            (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
            (char)a1,
            IfType,
            *(_DWORD *)v22);
        }
        goto LABEL_31;
      }
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v21 = v10;
        WPP_RECORDER_SF_qDD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          3u,
          0xDu,
          0xC8u,
          (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
          (char)a1,
          IfType,
          *(_DWORD *)v21);
        IfType = *(_WORD *)(v11 + 180);
      }
    }
    v7 = KRegKey::SetValueUlong((KRegKey *)&KeyHandle, v27, IfType);
    if ( v7 < 0 )
      goto LABEL_45;
    v5 = 1;
  }
  v7 = KRegKey::QueryValueUlong((KRegKey *)&KeyHandle, v29, &v26);
  if ( v7 < 0 )
    goto LABEL_45;
  v12 = *(_QWORD *)&ValueName.Length;
  v13 = v26;
  v14 = *(_DWORD *)(*(_QWORD *)&ValueName.Length + 8LL);
  if ( v26 != v14 )
  {
    if ( a1->MajorNdisVersion > 6u || a1->MajorNdisVersion == 6 && a1->MinorNdisVersion >= 0x3Cu )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v15 = 202;
LABEL_34:
        LODWORD(v20) = v13;
        WPP_RECORDER_SF_qDD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xDu,
          v15,
          (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
          (char)a1,
          v14,
          v20);
      }
LABEL_31:
      v7 = -1073741823;
      goto LABEL_45;
    }
    if ( v5 )
    {
      v7 = KRegKey::SetValueUlong((KRegKey *)&KeyHandle, v29, v14);
      if ( v7 < 0 )
        goto LABEL_45;
    }
  }
  v7 = KRegKey::QueryValueUlong((KRegKey *)&KeyHandle, v30, &Data);
  if ( v7 < 0 )
    goto LABEL_45;
  v14 = *(_DWORD *)(v12 + 12);
  v13 = Data;
  if ( Data != v14 )
  {
    if ( a1->MajorNdisVersion <= 6u && (a1->MajorNdisVersion != 6 || a1->MinorNdisVersion < 0x3Cu) )
    {
      if ( !v5 )
        goto LABEL_45;
      v7 = KRegKey::SetValueUlong((KRegKey *)&KeyHandle, v30, v14);
      if ( v7 < 0 )
        goto LABEL_45;
      goto LABEL_37;
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v15 = 203;
      goto LABEL_34;
    }
    goto LABEL_31;
  }
LABEL_37:
  if ( v5 )
  {
    v16 = L"NdisUpdatedNetworkInterface";
    ValueName = 0LL;
    v17 = 0x7FFFLL;
    do
    {
      if ( !*v16 )
        break;
      ++v16;
      --v17;
    }
    while ( v17 );
    v18 = (0x7FFF - v17) & -(__int64)(v17 != 0);
    v7 = v17 == 0 ? 0xC000000D : 0;
    if ( v17 )
    {
      ValueName.Buffer = L"NdisUpdatedNetworkInterface";
      ValueName.Length = 2 * v18;
      ValueName.MaximumLength = 2 * v18 + 2;
      Data = 1;
      v7 = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
    }
    if ( v7 >= 0 )
      ZwUpdateWnfStateData(&WNF_NDIS_ADAPTER_ARRIVAL, 0LL, 0, 0LL, 0LL, 0, 0);
  }
LABEL_45:
  if ( KeyHandle )
  {
    *(_QWORD *)&ValueName.Length = KeyHandle;
    v27 = (wchar_t *)ZwClose;
    wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>((__int64 (__fastcall **)(_QWORD))&v27, &ValueName);
  }
  return (unsigned int)v7;
}
