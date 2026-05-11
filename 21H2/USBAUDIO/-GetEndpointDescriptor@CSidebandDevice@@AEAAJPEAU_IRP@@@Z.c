/*
 * XREFs of ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000E124
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000D28C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0008AB8 (WPP_RECORDER_SF_dd.c)
 *     ?GetDeviceContainerId@CSidebandDevice@@AEAAJPEAU_GUID@@@Z @ 0x1C0009E80 (-GetDeviceContainerId@CSidebandDevice@@AEAAJPEAU_GUID@@@Z.c)
 *     ?GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z @ 0x1C000ACB0 (-GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C000B00C (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000B044 (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1C000BC50 (-GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     ?GetVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000C220 (-GetVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000CA98 (-GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     memset @ 0x1C0013D80 (memset.c)
 */

__int64 __fastcall CSidebandDevice::GetEndpointDescriptor(CSidebandDevice *this, struct _IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v6; // r14
  bool v7; // zf
  NTSTATUS v8; // ecx
  unsigned __int16 v9; // r9
  unsigned int v10; // ebx
  unsigned int NamedPipeType; // r15d
  int PinFromEpIndex; // eax
  __int64 v13; // rdx
  unsigned __int16 v14; // r9
  __int64 v15; // r13
  int EndpointCapabilities; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned __int16 v19; // r9
  ULONG Length; // eax
  unsigned int v21; // edi
  _DWORD *UserBuffer; // r14
  _SIDEBANDAUDIO_ENDPOINT_CAPABILITIES v23; // xmm0
  unsigned int VolumePropertyBasicSupport; // eax
  __int64 v25; // rdx
  unsigned __int16 v26; // r9
  __int64 v28; // [rsp+28h] [rbp-50h]
  int v29; // [rsp+28h] [rbp-50h]
  struct _KSPIN_DESCRIPTOR_EX *v30; // [rsp+40h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-30h] BYREF
  _SIDEBANDAUDIO_ENDPOINT_CAPABILITIES v32; // [rsp+58h] [rbp-20h] BYREF
  unsigned int v33; // [rsp+C0h] [rbp+48h]
  unsigned int v35; // [rsp+D0h] [rbp+58h] BYREF
  unsigned int v36; // [rsp+D8h] [rbp+60h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0LL;
  a2->IoStatus.Information = 0LL;
  v4 = *((_QWORD *)this + 4);
  v30 = 0LL;
  v32 = 0LL;
  v6 = *(_QWORD *)(v4 + 16);
  DestinationString = 0LL;
  v7 = CurrentStackLocation->Parameters.Create.Options == 4;
  v35 = -1;
  v36 = -1;
  if ( v7 )
  {
    NamedPipeType = CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
    if ( !CSidebandDevice::IsValidEndpointIndex(this, NamedPipeType) )
    {
      v8 = -1073741811;
      v33 = -1073741811;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_6;
      v9 = 18;
      v29 = NamedPipeType;
      goto LABEL_4;
    }
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v6 + 24));
    PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, NamedPipeType, &v35, &v30);
    v33 = PinFromEpIndex;
    v8 = PinFromEpIndex;
    if ( PinFromEpIndex < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_6;
      v14 = 19;
      goto LABEL_13;
    }
    PinFromEpIndex = CSidebandDevice::GetBridgePinForDataPin(this, (struct _KSFILTER_DESCRIPTOR *)(v6 + 128), v35, &v36);
    v33 = PinFromEpIndex;
    v8 = PinFromEpIndex;
    if ( PinFromEpIndex < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_6;
      v14 = 20;
LABEL_13:
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v13,
        9u,
        v14,
        (__int64)&WPP_30b6f709e09a32649d007c2c655dfdf5_Traceguids,
        PinFromEpIndex);
      goto LABEL_5;
    }
    v15 = *(_QWORD *)(v6 + 168) + v36 * *(_DWORD *)(v6 + 164);
    EndpointCapabilities = CSidebandDevice::GetEndpointCapabilities(this, v35, &v32);
    v33 = EndpointCapabilities;
    v8 = EndpointCapabilities;
    if ( EndpointCapabilities < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_6;
      v19 = 21;
      goto LABEL_28;
    }
    Length = CurrentStackLocation->Parameters.Read.Length;
    v21 = DestinationString.MaximumLength + 80;
    if ( !Length )
    {
      v10 = -1073741789;
      a2->IoStatus.Information = v21;
      v8 = -1073741789;
      v33 = -1073741789;
      goto LABEL_42;
    }
    if ( Length != v21 )
    {
      v8 = -1073741811;
      v33 = -1073741811;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_6;
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v17,
        v18,
        0x16u,
        (__int64)&WPP_30b6f709e09a32649d007c2c655dfdf5_Traceguids,
        DestinationString.MaximumLength + 80,
        -1073741811);
LABEL_29:
      v8 = v33;
      goto LABEL_6;
    }
    UserBuffer = a2->UserBuffer;
    memset(UserBuffer, 0, 0x50uLL);
    *UserBuffer = v21;
    EndpointCapabilities = CSidebandDevice::GetDeviceContainerId(this, (struct _GUID *)(UserBuffer + 1));
    v33 = EndpointCapabilities;
    v8 = EndpointCapabilities;
    if ( EndpointCapabilities < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_6;
      v19 = 23;
LABEL_28:
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v17,
        9u,
        v19,
        (__int64)&WPP_30b6f709e09a32649d007c2c655dfdf5_Traceguids,
        EndpointCapabilities);
      goto LABEL_29;
    }
    *(_OWORD *)(UserBuffer + 5) = *(_OWORD *)*(_QWORD *)(v15 + 72);
    v23 = v32;
    UserBuffer[9] = *(_DWORD *)(v15 + 64);
    *((_QWORD *)UserBuffer + 8) = UserBuffer + 20;
    *(_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES *)(UserBuffer + 10) = v23;
    *((_WORD *)UserBuffer + 28) = 0;
    *((_WORD *)UserBuffer + 29) = DestinationString.MaximumLength;
    RtlCopyUnicodeString((PUNICODE_STRING)(UserBuffer + 14), &DestinationString);
    VolumePropertyBasicSupport = CSidebandDevice::GetVolumePropertyBasicSupport(
                                   this,
                                   NamedPipeType,
                                   UserBuffer + 18,
                                   0LL);
    v33 = VolumePropertyBasicSupport;
    v8 = VolumePropertyBasicSupport;
    if ( VolumePropertyBasicSupport == -1073741789 || VolumePropertyBasicSupport == -1073741275 )
    {
      VolumePropertyBasicSupport = CSidebandDevice::GetSidetoneVolumePropertyBasicSupport(
                                     this,
                                     NamedPipeType,
                                     UserBuffer + 19,
                                     0LL);
      v33 = VolumePropertyBasicSupport;
      v8 = VolumePropertyBasicSupport;
      if ( VolumePropertyBasicSupport == -1073741789 || VolumePropertyBasicSupport == -1073741275 )
      {
        v33 = 0;
        a2->IoStatus.Information = v21;
        goto LABEL_40;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v26 = 25;
        goto LABEL_34;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v26 = 24;
LABEL_34:
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v25,
        9u,
        v26,
        (__int64)&WPP_30b6f709e09a32649d007c2c655dfdf5_Traceguids,
        VolumePropertyBasicSupport);
LABEL_40:
      v8 = v33;
    }
    v10 = v8;
    goto LABEL_42;
  }
  v8 = -1073741811;
  v33 = -1073741811;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = 17;
    v29 = 4;
LABEL_4:
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      v3,
      v9,
      (__int64)&WPP_30b6f709e09a32649d007c2c655dfdf5_Traceguids,
      v29,
      -1073741811);
LABEL_5:
    v8 = v33;
  }
LABEL_6:
  v10 = v8;
LABEL_42:
  a2->IoStatus.Status = v8;
  IofCompleteRequest(a2, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v28) = v33;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v33,
      9u,
      0x10u,
      (__int64)&WPP_30b6f709e09a32649d007c2c655dfdf5_Traceguids,
      v28);
  }
  return v10;
}
