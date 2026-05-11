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
 *     PropertySetDbLevelSideband @ 0x1C0028D24 (PropertySetDbLevelSideband.c)
 */

__int64 __fastcall CSidebandDevice::SetVolume(CSidebandDevice *this, PIRP Irp, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // r15
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  unsigned int inserted; // ebx
  __int64 v9; // rdx
  unsigned int *p_NamedPipeType; // r14
  __int64 v12; // rdx
  __int64 v13; // r8
  int PinFromEpIndex; // eax
  __int64 v15; // rdx
  unsigned int v16; // r12d
  int BridgePinForDataPin; // eax
  __int64 v18; // rdx
  unsigned __int16 v19; // r9
  unsigned int v20; // r13d
  unsigned int v21; // ebx
  int v22; // eax
  __int64 v23; // rdx
  unsigned int *v24; // [rsp+28h] [rbp-30h]
  int v25; // [rsp+28h] [rbp-30h]
  unsigned int v26; // [rsp+28h] [rbp-30h]
  unsigned int v27; // [rsp+28h] [rbp-30h]
  __int64 v28; // [rsp+30h] [rbp-28h]
  int v29; // [rsp+30h] [rbp-28h]
  int v30; // [rsp+30h] [rbp-28h]
  unsigned int v31; // [rsp+30h] [rbp-28h]
  unsigned int v32; // [rsp+38h] [rbp-20h]
  int v33; // [rsp+40h] [rbp-18h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v34; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v35; // [rsp+A0h] [rbp+48h] BYREF
  unsigned int v36; // [rsp+A8h] [rbp+50h] BYREF
  unsigned int v37; // [rsp+B0h] [rbp+58h] BYREF
  unsigned int v38; // [rsp+B8h] [rbp+60h] BYREF

  v35 = -1;
  v36 = -1;
  v37 = -1;
  v5 = *((_QWORD *)this + 4);
  v34 = 0LL;
  v38 = 0;
  v33 = 0;
  v6 = *(_QWORD *)(v5 + 16);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)&WPP_79bead6f9d27363c8bef3ec1aaaaff7a_Traceguids,
      9u,
      0x1Du,
      (__int64)&WPP_79bead6f9d27363c8bef3ec1aaaaff7a_Traceguids);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options != 16 )
  {
    inserted = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v29 = -1073741811;
      v25 = 16;
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)&WPP_79bead6f9d27363c8bef3ec1aaaaff7a_Traceguids,
        a3,
        0x1Eu,
        (__int64)&WPP_79bead6f9d27363c8bef3ec1aaaaff7a_Traceguids,
        v25,
        v29);
    }
    goto LABEL_7;
  }
  p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  if ( !CSidebandDevice::IsValidEndpointIndex(this, *p_NamedPipeType) )
  {
    inserted = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v30 = -1073741811;
      v26 = *p_NamedPipeType;
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v12,
        v13,
        0x1Fu,
        (__int64)&WPP_79bead6f9d27363c8bef3ec1aaaaff7a_Traceguids,
        v26,
        v30);
    }
    goto LABEL_7;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v31 = p_NamedPipeType[3];
    v27 = p_NamedPipeType[2];
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v12,
      v13,
      0x20u,
      (__int64)&WPP_79bead6f9d27363c8bef3ec1aaaaff7a_Traceguids,
      v27,
      v31);
  }
  PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, *p_NamedPipeType, &v35, &v34);
  inserted = PinFromEpIndex;
  if ( PinFromEpIndex < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v24) = PinFromEpIndex;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v15,
        9u,
        0x21u,
        (__int64)&WPP_79bead6f9d27363c8bef3ec1aaaaff7a_Traceguids,
        v24);
    }
    goto LABEL_7;
  }
  v16 = v35;
  BridgePinForDataPin = CSidebandDevice::GetBridgePinForDataPin(
                          this,
                          (struct _KSFILTER_DESCRIPTOR *)(v6 + 128),
                          v35,
                          &v36);
  inserted = BridgePinForDataPin;
  if ( BridgePinForDataPin >= 0 )
  {
    v20 = v36;
    BridgePinForDataPin = CSidebandDevice::GetNodeOfType(
                            this,
                            v36,
                            v16,
                            (struct _KSFILTER_DESCRIPTOR *)(v6 + 128),
                            &GUID_3a5acc00_c557_11d0_8a2b_00a0c9255ac1,
                            &v37);
    inserted = BridgePinForDataPin;
    if ( BridgePinForDataPin < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_7;
      v19 = 35;
      goto LABEL_23;
    }
    v21 = v37;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v32 = v37;
      LODWORD(v28) = v16;
      LODWORD(v24) = v20;
      WPP_RECORDER_SF_ddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v18,
        9u,
        0x24u,
        (__int64)&WPP_79bead6f9d27363c8bef3ec1aaaaff7a_Traceguids,
        v24,
        v28,
        v32);
    }
    v22 = PropertySetDbLevelSideband(
            *((_QWORD *)this + 4),
            *(_DWORD *)(v6 + 200) + v21 * *(_DWORD *)(v6 + 196),
            (unsigned int)&v38,
            p_NamedPipeType[2],
            (__int64)(p_NamedPipeType + 3),
            (__int64)&v33);
    inserted = v22;
    if ( v22 >= 0 )
    {
      Irp->IoStatus.Information = v38;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v24) = v22;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v23,
        9u,
        0x25u,
        (__int64)&WPP_79bead6f9d27363c8bef3ec1aaaaff7a_Traceguids,
        v24);
    }
    if ( v33 )
    {
      inserted = IoCsqInsertIrpEx((PIO_CSQ)(*((_QWORD *)this + 5) + 160LL), Irp, 0LL, (char *)this + 64);
      goto LABEL_8;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = 34;
LABEL_23:
    LODWORD(v24) = BridgePinForDataPin;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v18,
      9u,
      v19,
      (__int64)&WPP_79bead6f9d27363c8bef3ec1aaaaff7a_Traceguids,
      v24);
  }
LABEL_7:
  Irp->IoStatus.Status = inserted;
  IofCompleteRequest(Irp, 0);
LABEL_8:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v24) = inserted;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v9,
      9u,
      0x26u,
      (__int64)&WPP_79bead6f9d27363c8bef3ec1aaaaff7a_Traceguids,
      v24);
  }
  return inserted;
}
