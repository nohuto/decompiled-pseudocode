/*
 * XREFs of ?StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000F554
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000CD2C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0008558 (WPP_RECORDER_SF_dd.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C000AAAC (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000AAE4 (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z @ 0x1C000B4D0 (-GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z.c)
 *     PinSetDeviceState @ 0x1C0024CB0 (PinSetDeviceState.c)
 */

__int64 __fastcall CSidebandDevice::StreamSuspend(CSidebandDevice *this, struct _IRP *a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  int v5; // ecx
  unsigned __int16 v6; // r9
  unsigned int NamedPipeType; // ebx
  int PinFromEpIndex; // eax
  __int64 v9; // rdx
  unsigned __int16 v10; // r9
  PKSPIN v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rdx
  unsigned int v18; // ebx
  __int64 v20; // [rsp+28h] [rbp-38h]
  int v21; // [rsp+28h] [rbp-38h]
  PKSPIN Pin; // [rsp+40h] [rbp-20h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v23; // [rsp+48h] [rbp-18h] BYREF
  PVOID Object; // [rsp+50h] [rbp-10h]
  PIRP Irp; // [rsp+A8h] [rbp+48h]
  unsigned int v26; // [rsp+B0h] [rbp+50h]
  unsigned int v27; // [rsp+B8h] [rbp+58h] BYREF

  Irp = a2;
  v27 = -1;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v23 = 0LL;
  Pin = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x57u,
      (__int64)&WPP_30b6f709e09a32649d007c2c655dfdf5_Traceguids);
    a2 = Irp;
  }
  a2->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options == 4 )
  {
    NamedPipeType = CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
    if ( CSidebandDevice::IsValidEndpointIndex(this, NamedPipeType) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (__int64)a2,
          9u,
          0x5Bu,
          (__int64)&WPP_30b6f709e09a32649d007c2c655dfdf5_Traceguids,
          NamedPipeType);
      PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, NamedPipeType, &v27, &v23);
      v26 = PinFromEpIndex;
      v5 = PinFromEpIndex;
      if ( PinFromEpIndex >= 0 )
      {
        PinFromEpIndex = CSidebandDevice::GetPinFromPinsInUseList(this, v27, &Pin);
        v26 = PinFromEpIndex;
        v5 = PinFromEpIndex;
        if ( PinFromEpIndex >= 0 )
        {
          v11 = Pin;
          Object = KsPinGetParentFilter(Pin);
          KsAcquireControl(Object);
          v12 = PinSetDeviceState(v11, 2LL);
          if ( v12 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v20) = v12;
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v13,
              9u,
              0x5Eu,
              (__int64)&WPP_30b6f709e09a32649d007c2c655dfdf5_Traceguids,
              v20);
          }
          v14 = PinSetDeviceState(v11, 1LL);
          if ( v14 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v20) = v14;
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v15,
              9u,
              0x5Fu,
              (__int64)&WPP_30b6f709e09a32649d007c2c655dfdf5_Traceguids,
              v20);
          }
          v16 = PinSetDeviceState(v11, 0LL);
          v26 = v16;
          if ( v16 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v20) = v16;
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v17,
              9u,
              0x60u,
              (__int64)&WPP_30b6f709e09a32649d007c2c655dfdf5_Traceguids,
              v20);
          }
          KsReleaseControl(Object);
          goto LABEL_30;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_31;
        v10 = 93;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_31;
        v10 = 92;
      }
      LODWORD(v20) = PinFromEpIndex;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v9,
        9u,
        v10,
        (__int64)&WPP_30b6f709e09a32649d007c2c655dfdf5_Traceguids,
        v20);
      goto LABEL_30;
    }
    v5 = -1073741811;
    v26 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 90;
      v21 = NamedPipeType;
      goto LABEL_7;
    }
  }
  else
  {
    v5 = -1073741811;
    v26 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 89;
      v21 = 4;
LABEL_7:
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)a2,
        a3,
        v6,
        (__int64)&WPP_30b6f709e09a32649d007c2c655dfdf5_Traceguids,
        v21,
        -1073741811);
LABEL_30:
      v5 = v26;
    }
  }
LABEL_31:
  v18 = v5;
  Irp->IoStatus.Status = v5;
  IofCompleteRequest(Irp, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v20) = v26;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v26,
      9u,
      0x58u,
      (__int64)&WPP_30b6f709e09a32649d007c2c655dfdf5_Traceguids,
      v20);
  }
  return v18;
}
