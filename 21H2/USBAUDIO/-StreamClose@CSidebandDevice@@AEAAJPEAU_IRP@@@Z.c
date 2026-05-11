/*
 * XREFs of ?StreamClose@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000FDBC
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000D28C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0008AB8 (WPP_RECORDER_SF_dd.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C000B00C (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000B044 (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z @ 0x1C000BA30 (-GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z.c)
 */

__int64 __fastcall CSidebandDevice::StreamClose(CSidebandDevice *this, struct _IRP *a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  NTSTATUS v5; // ecx
  unsigned __int16 v6; // r9
  unsigned int NamedPipeType; // ebx
  int PinFromEpIndex; // eax
  __int64 v9; // rdx
  unsigned __int16 v10; // r9
  unsigned int v11; // ebx
  __int64 v13; // [rsp+28h] [rbp-28h]
  int v14; // [rsp+28h] [rbp-28h]
  struct _KSPIN *v15; // [rsp+40h] [rbp-10h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v16; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v18; // [rsp+A0h] [rbp+50h]
  unsigned int v19; // [rsp+A8h] [rbp+58h] BYREF

  v19 = -1;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v16 = 0LL;
  v15 = 0LL;
  a2->IoStatus.Information = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x61u,
      (__int64)&WPP_30b6f709e09a32649d007c2c655dfdf5_Traceguids);
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
          0x65u,
          (__int64)&WPP_30b6f709e09a32649d007c2c655dfdf5_Traceguids,
          NamedPipeType);
      PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, NamedPipeType, &v19, &v16);
      v18 = PinFromEpIndex;
      v5 = PinFromEpIndex;
      if ( PinFromEpIndex >= 0 )
      {
        PinFromEpIndex = CSidebandDevice::GetPinFromPinsInUseList(this, v19, &v15);
        v18 = PinFromEpIndex;
        v5 = PinFromEpIndex;
        if ( PinFromEpIndex >= 0 )
        {
          ObfDereferenceObject(*((PVOID *)v15->Context + 6));
          goto LABEL_21;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_22;
        v10 = 103;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_22;
        v10 = 102;
      }
      LODWORD(v13) = PinFromEpIndex;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v9,
        9u,
        v10,
        (__int64)&WPP_30b6f709e09a32649d007c2c655dfdf5_Traceguids,
        v13);
      goto LABEL_21;
    }
    v5 = -1073741811;
    v18 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 100;
      v14 = NamedPipeType;
      goto LABEL_7;
    }
  }
  else
  {
    v5 = -1073741811;
    v18 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 99;
      v14 = 4;
LABEL_7:
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)a2,
        a3,
        v6,
        (__int64)&WPP_30b6f709e09a32649d007c2c655dfdf5_Traceguids,
        v14,
        -1073741811);
LABEL_21:
      v5 = v18;
    }
  }
LABEL_22:
  v11 = v5;
  a2->IoStatus.Status = v5;
  IofCompleteRequest(a2, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v13) = v18;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v18,
      9u,
      0x62u,
      (__int64)&WPP_30b6f709e09a32649d007c2c655dfdf5_Traceguids,
      v13);
  }
  return v11;
}
