/*
 * XREFs of ?SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000F6E4
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000D59C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00084E8 (WPP_RECORDER_SF_dd.c)
 *     ?GetSidetoneNodes@CSidebandDevice@@AEAAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z @ 0x1C000AA60 (-GetSidetoneNodes@CSidebandDevice@@AEAAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C000B2FC (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000B334 (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1C000BF40 (-GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     PropertySetBooleanSideband @ 0x1C00286C8 (PropertySetBooleanSideband.c)
 *     PropertySetDbLevelSideband @ 0x1C0028D54 (PropertySetDbLevelSideband.c)
 */

__int64 __fastcall CSidebandDevice::SetSidetone(CSidebandDevice *this, PIRP Irp, __int64 a3)
{
  __int64 v5; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  unsigned int v7; // ebx
  unsigned __int16 v8; // r9
  unsigned int *p_NamedPipeType; // r14
  int PinFromEpIndex; // eax
  __int64 v11; // rdx
  unsigned __int16 v12; // r9
  __int64 v13; // rdx
  __int64 v15; // [rsp+28h] [rbp-30h]
  unsigned int v16; // [rsp+28h] [rbp-30h]
  unsigned int v17; // [rsp+40h] [rbp-18h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v18; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v19; // [rsp+A0h] [rbp+48h] BYREF
  unsigned int v20; // [rsp+A8h] [rbp+50h] BYREF
  unsigned int v21; // [rsp+B0h] [rbp+58h] BYREF
  unsigned int v22; // [rsp+B8h] [rbp+60h] BYREF

  v22 = -1;
  v17 = -1;
  v19 = -1;
  v20 = -1;
  v5 = *(_QWORD *)(*((_QWORD *)this + 4) + 16LL) + 128LL;
  v18 = 0LL;
  v21 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)Irp,
      9u,
      0x3Du,
      (__int64)&WPP_e298431ce78b37773429aeb487faa819_Traceguids);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options == 20 )
  {
    p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
    if ( !CSidebandDevice::IsValidEndpointIndex(this, *p_NamedPipeType) )
    {
      v7 = -1073741811;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_32;
      v8 = 63;
      v16 = *p_NamedPipeType;
      goto LABEL_7;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)Irp,
        a3,
        0x40u,
        (__int64)&WPP_e298431ce78b37773429aeb487faa819_Traceguids,
        p_NamedPipeType[3],
        p_NamedPipeType[4]);
    PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, *p_NamedPipeType, &v22, &v18);
    v7 = PinFromEpIndex;
    if ( PinFromEpIndex >= 0 )
    {
      PinFromEpIndex = CSidebandDevice::GetBridgePinForDataPin(this, (struct _KSFILTER_DESCRIPTOR *)v5, v22, &v17);
      v7 = PinFromEpIndex;
      if ( PinFromEpIndex >= 0 )
      {
        PinFromEpIndex = CSidebandDevice::GetSidetoneNodes(this, v17, (struct _KSFILTER_DESCRIPTOR *)v5, &v19, &v20);
        v7 = PinFromEpIndex;
        if ( PinFromEpIndex >= 0 )
        {
          if ( v19 == -1
            || (PinFromEpIndex = PropertySetDbLevelSideband(*((PIRP **)this + 4), (__int64)(p_NamedPipeType + 3)),
                v7 = PinFromEpIndex,
                PinFromEpIndex >= 0) )
          {
            if ( v20 == -1
              || (PinFromEpIndex = PropertySetBooleanSideband(
                                     *((_QWORD *)this + 4),
                                     *(_DWORD *)(v5 + 72) + v20 * *(_DWORD *)(v5 + 68),
                                     (unsigned int)&v21,
                                     0,
                                     (__int64)(p_NamedPipeType + 4)),
                  v7 = PinFromEpIndex,
                  PinFromEpIndex >= 0) )
            {
              Irp->IoStatus.Information = v21;
              goto LABEL_32;
            }
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_32;
            v12 = 69;
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_32;
            v12 = 68;
          }
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_32;
          v12 = 67;
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_32;
        v12 = 66;
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_32;
      v12 = 65;
    }
    LODWORD(v15) = PinFromEpIndex;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v11,
      9u,
      v12,
      (__int64)&WPP_e298431ce78b37773429aeb487faa819_Traceguids,
      v15);
    goto LABEL_32;
  }
  v7 = -1073741811;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = 62;
    v16 = 20;
LABEL_7:
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)Irp,
      a3,
      v8,
      (__int64)&WPP_e298431ce78b37773429aeb487faa819_Traceguids,
      v16,
      -1073741811);
  }
LABEL_32:
  Irp->IoStatus.Status = v7;
  IofCompleteRequest(Irp, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v15) = v7;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v13,
      9u,
      0x46u,
      (__int64)&WPP_e298431ce78b37773429aeb487faa819_Traceguids,
      v15);
  }
  return v7;
}
