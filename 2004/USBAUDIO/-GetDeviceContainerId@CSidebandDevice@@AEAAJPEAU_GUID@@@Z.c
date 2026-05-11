/*
 * XREFs of ?GetDeviceContainerId@CSidebandDevice@@AEAAJPEAU_GUID@@@Z @ 0x1C000A170
 * Callers:
 *     ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000E514 (-GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_s @ 0x1C0009074 (WPP_RECORDER_SF_s.c)
 */

__int64 __fastcall CSidebandDevice::GetDeviceContainerId(CSidebandDevice *this, struct _GUID *a2)
{
  _WORD *v4; // rdx
  _WORD *PoolWithTag; // rdi
  NTSTATUS DeviceProperty; // ebx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r8
  __int16 v9; // ax
  _WORD *v10; // rax
  unsigned __int16 v11; // r9
  int v12; // r8d
  int v13; // r9d
  int ResultLength; // [rsp+20h] [rbp-38h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  ULONG v17; // [rsp+70h] [rbp+18h] BYREF

  v17 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"{00000000-0000-0000-0000-000000000000}");
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, DestinationString.MaximumLength, 0x34627845u);
  if ( PoolWithTag )
  {
    v7 = (unsigned __int64)DestinationString.MaximumLength >> 1;
    DeviceProperty = v7 == 0 ? 0xC000000D : 0;
    if ( v7 )
    {
      v4 = PoolWithTag;
      v8 = 2147483646 - v7;
      do
      {
        if ( !(v8 + v7) )
          break;
        v9 = *(_WORD *)((char *)v4 + (char *)L"{00000000-0000-0000-0000-000000000000}" - (char *)PoolWithTag);
        if ( !v9 )
          break;
        *v4++ = v9;
        --v7;
      }
      while ( v7 );
      v10 = v4 - 1;
      if ( v7 )
        v10 = v4;
      DeviceProperty = v7 == 0 ? 0x80000005 : 0;
      *v10 = 0;
    }
    if ( DeviceProperty >= 0 )
    {
      DeviceProperty = IoGetDeviceProperty(
                         *(PDEVICE_OBJECT *)(*((_QWORD *)this + 4) + 32LL),
                         DevicePropertyContainerID,
                         DestinationString.MaximumLength,
                         PoolWithTag,
                         &v17);
      if ( DeviceProperty < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_24;
        v11 = 30;
        goto LABEL_15;
      }
      RtlInitUnicodeString(&DestinationString, PoolWithTag);
      DeviceProperty = RtlGUIDFromString(&DestinationString, a2);
      if ( DeviceProperty >= 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_s(
            WPP_GLOBAL_Control->DeviceExtension,
            (_DWORD)v4,
            v12,
            v13,
            ResultLength,
            (__int64)DestinationString.Buffer);
        goto LABEL_24;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = 31;
        goto LABEL_15;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 29;
LABEL_15:
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)v4,
        9u,
        v11,
        (__int64)&WPP_9a66b6eae4133a4cf31086db8acffc88_Traceguids,
        DeviceProperty);
    }
LABEL_24:
    ExFreePool(PoolWithTag);
    return (unsigned int)DeviceProperty;
  }
  DeviceProperty = -1073741664;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)v4,
      9u,
      0x1Cu,
      (__int64)&WPP_9a66b6eae4133a4cf31086db8acffc88_Traceguids,
      -1073741664);
  return (unsigned int)DeviceProperty;
}
