/*
 * XREFs of ?SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000EA54
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000D59C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0004174 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00084E8 (WPP_RECORDER_SF_dd.c)
 *     ?GetNodeOfType@CSidebandDevice@@AEAAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z @ 0x1C000A874 (-GetNodeOfType@CSidebandDevice@@AEAAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C000B2FC (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000B334 (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1C000BF40 (-GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     PropertySetDbLevelSideband @ 0x1C0028D54 (PropertySetDbLevelSideband.c)
 */

__int64 __fastcall CSidebandDevice::SetVolume(CSidebandDevice *this, PIRP Irp, __int64 a3)
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
  __int64 v17; // rdx
  unsigned int *v18; // [rsp+28h] [rbp-30h]
  unsigned int v19; // [rsp+28h] [rbp-30h]
  __int64 v20; // [rsp+30h] [rbp-28h]
  struct _KSPIN_DESCRIPTOR_EX *v21; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v22; // [rsp+A0h] [rbp+48h] BYREF
  unsigned int v23; // [rsp+A8h] [rbp+50h] BYREF
  unsigned int v24; // [rsp+B0h] [rbp+58h] BYREF
  unsigned int v25; // [rsp+B8h] [rbp+60h]

  v23 = -1;
  v22 = -1;
  v24 = -1;
  v5 = *((_QWORD *)this + 4);
  v21 = 0LL;
  v25 = 0;
  v6 = *(_QWORD *)(v5 + 16);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)Irp,
      9u,
      0x1Du,
      (__int64)&WPP_e298431ce78b37773429aeb487faa819_Traceguids);
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
      v9 = 31;
      v19 = *p_NamedPipeType;
      goto LABEL_7;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)Irp,
        a3,
        0x20u,
        (__int64)&WPP_e298431ce78b37773429aeb487faa819_Traceguids,
        p_NamedPipeType[2],
        p_NamedPipeType[3]);
    PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, *p_NamedPipeType, &v23, &v21);
    v8 = PinFromEpIndex;
    if ( PinFromEpIndex >= 0 )
    {
      v16 = v23;
      PinFromEpIndex = CSidebandDevice::GetBridgePinForDataPin(
                         this,
                         (struct _KSFILTER_DESCRIPTOR *)(v6 + 128),
                         v23,
                         &v22);
      v8 = PinFromEpIndex;
      if ( PinFromEpIndex >= 0 )
      {
        PinFromEpIndex = CSidebandDevice::GetNodeOfType(
                           this,
                           v22,
                           v16,
                           (struct _KSFILTER_DESCRIPTOR *)(v6 + 128),
                           &GUID_3a5acc00_c557_11d0_8a2b_00a0c9255ac1,
                           &v24);
        v8 = PinFromEpIndex;
        if ( PinFromEpIndex >= 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v20) = v16;
            LODWORD(v18) = v22;
            WPP_RECORDER_SF_ddd(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v12,
              9u,
              0x24u,
              (__int64)&WPP_e298431ce78b37773429aeb487faa819_Traceguids,
              v18,
              v20,
              v24,
              v21);
          }
          v8 = PropertySetDbLevelSideband(*((PIRP **)this + 4), (__int64)(p_NamedPipeType + 3));
          if ( v8 >= 0 )
          {
            Irp->IoStatus.Information = v25;
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v18) = v8;
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v17,
              9u,
              0x25u,
              (__int64)&WPP_e298431ce78b37773429aeb487faa819_Traceguids,
              v18);
          }
          goto LABEL_17;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_17;
        v13 = 35;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_17;
        v13 = 34;
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_17;
      v13 = 33;
    }
    LODWORD(v18) = PinFromEpIndex;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v12,
      9u,
      v13,
      (__int64)&WPP_e298431ce78b37773429aeb487faa819_Traceguids,
      v18);
    goto LABEL_17;
  }
  v8 = -1073741811;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = 30;
    v19 = 16;
LABEL_7:
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)Irp,
      a3,
      v9,
      (__int64)&WPP_e298431ce78b37773429aeb487faa819_Traceguids,
      v19,
      -1073741811);
  }
LABEL_17:
  Irp->IoStatus.Status = v8;
  IofCompleteRequest(Irp, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v18) = v8;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v14,
      9u,
      0x26u,
      (__int64)&WPP_e298431ce78b37773429aeb487faa819_Traceguids,
      v18);
  }
  return (unsigned int)v8;
}
