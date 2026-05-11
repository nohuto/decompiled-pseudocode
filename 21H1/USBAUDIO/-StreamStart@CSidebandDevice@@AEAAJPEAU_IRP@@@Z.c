/*
 * XREFs of ?StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000FD0C
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000D59C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00084E8 (WPP_RECORDER_SF_dd.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C000B2FC (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000B334 (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z @ 0x1C000BD20 (-GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z.c)
 *     PinSetDeviceState @ 0x1C0024950 (PinSetDeviceState.c)
 */

__int64 __fastcall CSidebandDevice::StreamStart(CSidebandDevice *this, struct _IRP *a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  int v5; // ecx
  unsigned __int16 v6; // r9
  unsigned int NamedPipeType; // ebx
  int PinFromEpIndex; // eax
  __int64 v9; // rdx
  unsigned __int16 v10; // r9
  PKSPIN v11; // rdi
  int v12; // eax
  __int64 v13; // rdx
  unsigned int v14; // ebx
  unsigned __int16 v15; // r9
  __int64 v17; // [rsp+28h] [rbp-38h]
  int v18; // [rsp+28h] [rbp-38h]
  PKSPIN Pin; // [rsp+40h] [rbp-20h] BYREF
  PVOID Object; // [rsp+48h] [rbp-18h]
  struct _KSPIN_DESCRIPTOR_EX *v21; // [rsp+50h] [rbp-10h] BYREF
  PIRP Irp; // [rsp+A8h] [rbp+48h]
  unsigned int v23; // [rsp+B0h] [rbp+50h]
  unsigned int v24; // [rsp+B8h] [rbp+58h] BYREF

  Irp = a2;
  v24 = -1;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v21 = 0LL;
  Pin = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x4Du,
      (__int64)&WPP_79bead6f9d27363c8bef3ec1aaaaff7a_Traceguids);
    a2 = Irp;
  }
  a2->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options != 4 )
  {
    v5 = -1073741811;
    v23 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 79;
      v18 = 4;
LABEL_7:
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)a2,
        a3,
        v6,
        (__int64)&WPP_79bead6f9d27363c8bef3ec1aaaaff7a_Traceguids,
        v18,
        -1073741811);
LABEL_32:
      v5 = v23;
      goto LABEL_33;
    }
    goto LABEL_33;
  }
  NamedPipeType = CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  if ( !CSidebandDevice::IsValidEndpointIndex(this, NamedPipeType) )
  {
    v5 = -1073741811;
    v23 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 80;
      v18 = NamedPipeType;
      goto LABEL_7;
    }
LABEL_33:
    v14 = v5;
    goto LABEL_34;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x51u,
      (__int64)&WPP_79bead6f9d27363c8bef3ec1aaaaff7a_Traceguids,
      NamedPipeType);
  PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, NamedPipeType, &v24, &v21);
  v23 = PinFromEpIndex;
  v5 = PinFromEpIndex;
  if ( PinFromEpIndex < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_33;
    v10 = 82;
LABEL_19:
    LODWORD(v17) = PinFromEpIndex;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v9,
      9u,
      v10,
      (__int64)&WPP_79bead6f9d27363c8bef3ec1aaaaff7a_Traceguids,
      v17);
    goto LABEL_32;
  }
  PinFromEpIndex = CSidebandDevice::GetPinFromPinsInUseList(this, v24, &Pin);
  v23 = PinFromEpIndex;
  v5 = PinFromEpIndex;
  if ( PinFromEpIndex < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_33;
    v10 = 83;
    goto LABEL_19;
  }
  v11 = Pin;
  Object = KsPinGetParentFilter(Pin);
  KsAcquireControl(Object);
  v12 = PinSetDeviceState(v11, 1LL);
  v23 = v12;
  v14 = v12;
  if ( v12 >= 0 )
  {
    v12 = PinSetDeviceState(v11, 2LL);
    v23 = v12;
    v14 = v12;
    if ( v12 >= 0 )
    {
      v12 = PinSetDeviceState(v11, 3LL);
      v23 = v12;
      v14 = v12;
      if ( v12 >= 0 )
      {
        KsReleaseControl(Object);
        goto LABEL_32;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = 86;
        goto LABEL_29;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = 85;
      goto LABEL_29;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = 84;
LABEL_29:
    LODWORD(v17) = v12;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v13,
      9u,
      v15,
      (__int64)&WPP_79bead6f9d27363c8bef3ec1aaaaff7a_Traceguids,
      v17);
    v14 = v23;
  }
  KsReleaseControl(Object);
  v5 = v23;
LABEL_34:
  Irp->IoStatus.Status = v5;
  IofCompleteRequest(Irp, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v17) = v23;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v23,
      9u,
      0x4Eu,
      (__int64)&WPP_79bead6f9d27363c8bef3ec1aaaaff7a_Traceguids,
      v17);
  }
  return v14;
}
