/*
 * XREFs of ndisMiniportQueryDeviceProperty @ 0x1C0109138
 * Callers:
 *     ?ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z @ 0x1C0108F7C (-ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0015590 (WPP_RECORDER_SF_qqd.c)
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C0035D20 (WdmlibRtlInitUnicodeStringEx.c)
 *     ??$MakeSizedPoolPtr@U_UNICODE_STRING@@@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@K_K@Z @ 0x1C01092E8 (--$MakeSizedPoolPtr@U_UNICODE_STRING@@@@YA-AV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICO.c)
 */

__int64 __fastcall ndisMiniportQueryDeviceProperty(
        __int64 a1,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        PUNICODE_STRING *a3)
{
  char v5; // si
  _DEVICE_OBJECT *v6; // rbp
  unsigned int v7; // ebx
  PUNICODE_STRING v8; // rbx
  NTSTATUS inited; // edi
  PUNICODE_STRING v10; // rax
  unsigned __int16 v12; // r9
  ULONG BufferLength; // [rsp+78h] [rbp+10h] BYREF
  PUNICODE_STRING DestinationString; // [rsp+80h] [rbp+18h] BYREF

  *a3 = 0LL;
  v5 = a1;
  if ( DeviceProperty
    && (DeviceProperty <= DevicePropertyBootConfigurationTranslated
     || DeviceProperty > DevicePropertyPhysicalDeviceObjectName
     && DeviceProperty != DevicePropertyEnumeratorName
     && DeviceProperty != DevicePropertyContainerID) )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0xFu,
        &WPP_09eb4e84d2783563c6fda650882f065c_Traceguids,
        a1);
    return 3221225485LL;
  }
  v6 = *(_DEVICE_OBJECT **)(a1 + 3832);
  BufferLength = 0;
  v7 = IoGetDeviceProperty(v6, DeviceProperty, 0, 0LL, &BufferLength);
  if ( (int)(v7 + 0x80000000) >= 0 && v7 != -1073741789 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0x10u,
        &WPP_09eb4e84d2783563c6fda650882f065c_Traceguids,
        v5,
        (char)v6,
        v7);
    return v7;
  }
  if ( (unsigned __int64)BufferLength + 16 >= BufferLength )
  {
    MakeSizedPoolPtr<_UNICODE_STRING>(&DestinationString);
    v8 = DestinationString;
    if ( !DestinationString )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xDu,
          0x12u,
          &WPP_09eb4e84d2783563c6fda650882f065c_Traceguids,
          v5,
          v6);
      inited = -1073741670;
      goto LABEL_10;
    }
    inited = IoGetDeviceProperty(v6, DeviceProperty, BufferLength, &DestinationString[1], &BufferLength);
    if ( inited < 0 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_10;
      v12 = 19;
    }
    else
    {
      inited = WdmlibRtlInitUnicodeStringEx(v8, (PCWSTR)&v8[1]);
      if ( inited >= 0 )
      {
        v10 = v8;
        v8 = 0LL;
        inited = 0;
        *a3 = v10;
LABEL_10:
        if ( v8 )
          ExFreePoolWithTag(v8, 0);
        return (unsigned int)inited;
      }
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_10;
      v12 = 20;
    }
    WPP_RECORDER_SF_qqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xDu,
      v12,
      &WPP_09eb4e84d2783563c6fda650882f065c_Traceguids,
      v5,
      (char)v6,
      inited);
    goto LABEL_10;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xDu,
      0x11u,
      &WPP_09eb4e84d2783563c6fda650882f065c_Traceguids,
      v5,
      v6);
  return 3221225621LL;
}
