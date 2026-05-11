/*
 * XREFs of ?GetSidetoneVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000F564
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000D59C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00084E8 (WPP_RECORDER_SF_dd.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C000B2FC (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     ?GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000CD88 (-GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     WPP_RECORDER_SF_dq @ 0x1C000E280 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall CSidebandDevice::GetSidetoneVolumePropertyValues(CSidebandDevice *this, PIRP Irp, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  unsigned int v6; // edi
  unsigned __int16 v7; // r9
  unsigned int NamedPipeType; // esi
  PVOID UserBuffer; // r9
  int SidetoneVolumePropertyBasicSupport; // eax
  __int64 v11; // r8
  __int64 v12; // rdx
  int v14; // [rsp+20h] [rbp-38h]
  int v15; // [rsp+28h] [rbp-30h]
  unsigned int Length; // [rsp+68h] [rbp+10h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options == 4 )
  {
    NamedPipeType = CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
    if ( !CSidebandDevice::IsValidEndpointIndex(this, NamedPipeType) )
    {
      v6 = -1073741811;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_12;
      v7 = 57;
      v15 = NamedPipeType;
      goto LABEL_4;
    }
    UserBuffer = Irp->UserBuffer;
    Length = CurrentStackLocation->Parameters.Read.Length;
    SidetoneVolumePropertyBasicSupport = CSidebandDevice::GetSidetoneVolumePropertyBasicSupport(
                                           this,
                                           NamedPipeType,
                                           &Length,
                                           UserBuffer);
    v12 = Length;
    v6 = SidetoneVolumePropertyBasicSupport;
    if ( SidetoneVolumePropertyBasicSupport >= 0 )
      Irp->IoStatus.Information = Length;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dq((__int64)WPP_GLOBAL_Control->DeviceExtension, v12, v11, 0x3Au, v14);
  }
  else
  {
    v6 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 56;
      v15 = 4;
LABEL_4:
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)Irp,
        a3,
        v7,
        (__int64)&WPP_79bead6f9d27363c8bef3ec1aaaaff7a_Traceguids,
        v15,
        -1073741811);
    }
  }
LABEL_12:
  Irp->IoStatus.Status = v6;
  IofCompleteRequest(Irp, 0);
  return v6;
}
