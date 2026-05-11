/*
 * XREFs of ?SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000EC20
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000D28C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0004744 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0008AB8 (WPP_RECORDER_SF_dd.c)
 *     ?GetNodeOfType@CSidebandDevice@@AEAAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z @ 0x1C000A584 (-GetNodeOfType@CSidebandDevice@@AEAAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C000B00C (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000B044 (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1C000BC50 (-GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     PropertySetBooleanSideband @ 0x1C0028AE8 (PropertySetBooleanSideband.c)
 */

__int64 __fastcall CSidebandDevice::SetMute(CSidebandDevice *this, PIRP Irp, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // r15
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  NTSTATUS v8; // ebx
  unsigned __int16 v9; // r9
  unsigned int *p_NamedPipeType; // rdi
  int PinFromEpIndex; // eax
  __int64 v12; // rdx
  unsigned __int16 v13; // r9
  __int64 v14; // rdx
  unsigned int v16; // r12d
  unsigned int v17; // ebx
  __int64 v18; // rdx
  int v19; // [rsp+20h] [rbp-38h]
  unsigned int *v20; // [rsp+28h] [rbp-30h]
  unsigned int v21; // [rsp+28h] [rbp-30h]
  struct _KSPIN_DESCRIPTOR_EX *v22; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v23; // [rsp+A0h] [rbp+48h] BYREF
  unsigned int v24; // [rsp+A8h] [rbp+50h] BYREF
  unsigned int v25; // [rsp+B0h] [rbp+58h] BYREF
  unsigned int v26; // [rsp+B8h] [rbp+60h] BYREF

  v24 = -1;
  v23 = -1;
  v25 = -1;
  v5 = *((_QWORD *)this + 4);
  v22 = 0LL;
  v26 = 0;
  v6 = *(_QWORD *)(v5 + 16);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)Irp,
      9u,
      0x2Cu,
      (__int64)&WPP_30b6f709e09a32649d007c2c655dfdf5_Traceguids);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options == 16 )
  {
    p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
    if ( !CSidebandDevice::IsValidEndpointIndex(this, *p_NamedPipeType) )
    {
      v8 = -1073741811;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_17;
      v9 = 46;
      v21 = *p_NamedPipeType;
      goto LABEL_7;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)Irp,
        a3,
        0x2Fu,
        (__int64)&WPP_30b6f709e09a32649d007c2c655dfdf5_Traceguids,
        p_NamedPipeType[2],
        p_NamedPipeType[3]);
    PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, *p_NamedPipeType, &v24, &v22);
    v8 = PinFromEpIndex;
    if ( PinFromEpIndex >= 0 )
    {
      v16 = v24;
      PinFromEpIndex = CSidebandDevice::GetBridgePinForDataPin(
                         this,
                         (struct _KSFILTER_DESCRIPTOR *)(v6 + 128),
                         v24,
                         &v23);
      v8 = PinFromEpIndex;
      if ( PinFromEpIndex >= 0 )
      {
        PinFromEpIndex = CSidebandDevice::GetNodeOfType(
                           this,
                           v23,
                           v16,
                           (struct _KSFILTER_DESCRIPTOR *)(v6 + 128),
                           &GUID_02b223c0_c557_11d0_8a2b_00a0c9255ac1,
                           &v25);
        v8 = PinFromEpIndex;
        if ( PinFromEpIndex >= 0 )
        {
          v17 = v25;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_ddd(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v12,
              9u,
              0x33u,
              (__int64)&WPP_30b6f709e09a32649d007c2c655dfdf5_Traceguids);
          v8 = PropertySetBooleanSideband(
                 *((_QWORD *)this + 4),
                 *(_DWORD *)(v6 + 200) + v17 * *(_DWORD *)(v6 + 196),
                 (unsigned int)&v26,
                 p_NamedPipeType[2],
                 v19,
                 (__int64)(p_NamedPipeType + 3));
          if ( v8 >= 0 )
          {
            Irp->IoStatus.Information = v26;
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v20) = v8;
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v18,
              9u,
              0x34u,
              (__int64)&WPP_30b6f709e09a32649d007c2c655dfdf5_Traceguids,
              v20);
          }
          goto LABEL_17;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_17;
        v13 = 50;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_17;
        v13 = 49;
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_17;
      v13 = 48;
    }
    LODWORD(v20) = PinFromEpIndex;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v12,
      9u,
      v13,
      (__int64)&WPP_30b6f709e09a32649d007c2c655dfdf5_Traceguids,
      v20);
    goto LABEL_17;
  }
  v8 = -1073741811;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = 45;
    v21 = 16;
LABEL_7:
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)Irp,
      a3,
      v9,
      (__int64)&WPP_30b6f709e09a32649d007c2c655dfdf5_Traceguids,
      v21,
      -1073741811);
  }
LABEL_17:
  Irp->IoStatus.Status = v8;
  IofCompleteRequest(Irp, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v20) = v8;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v14,
      9u,
      0x35u,
      (__int64)&WPP_30b6f709e09a32649d007c2c655dfdf5_Traceguids,
      v20);
  }
  return (unsigned int)v8;
}
