/*
 * XREFs of ?StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000F9F4
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000D59C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00084E8 (WPP_RECORDER_SF_dd.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C000B2FC (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     ?CreateKsPin@CSidebandDevice@@AEAAJKPEATKSDATAFORMAT@@PEAPEAU_KSPIN@@@Z @ 0x1C000B928 (-CreateKsPin@CSidebandDevice@@AEAAJKPEATKSDATAFORMAT@@PEAPEAU_KSPIN@@@Z.c)
 */

__int64 __fastcall CSidebandDevice::StreamOpen(CSidebandDevice *this, struct _IRP *a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  int v5; // ecx
  unsigned __int16 v6; // r9
  PNAMED_PIPE_CREATE_PARAMETERS Parameters; // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // [rsp+28h] [rbp-18h]
  unsigned int NamedPipeType; // [rsp+28h] [rbp-18h]
  int v13; // [rsp+30h] [rbp-10h]
  PIRP Irp; // [rsp+78h] [rbp+38h]
  unsigned int v15; // [rsp+80h] [rbp+40h]
  struct _KSPIN *v16; // [rsp+88h] [rbp+48h] BYREF

  Irp = a2;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v16 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x47u,
      (__int64)&WPP_e298431ce78b37773429aeb487faa819_Traceguids);
    a2 = Irp;
  }
  a2->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options == 24 )
  {
    Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
    if ( CSidebandDevice::IsValidEndpointIndex(this, Parameters->NamedPipeType) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        NamedPipeType = Parameters->NamedPipeType;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (__int64)a2,
          9u,
          0x4Bu,
          (__int64)&WPP_e298431ce78b37773429aeb487faa819_Traceguids,
          NamedPipeType);
      }
      v8 = CSidebandDevice::CreateKsPin(
             this,
             Parameters->NamedPipeType,
             *(union KSDATAFORMAT **)&Parameters->CompletionMode,
             &v16);
      v15 = v8;
      v5 = v8;
      if ( v8 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_17;
      v6 = 76;
      v13 = v8;
    }
    else
    {
      v5 = -1073741811;
      v15 = -1073741811;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_17;
      v6 = 74;
      v13 = -1073741811;
    }
    LODWORD(v11) = Parameters->NamedPipeType;
    goto LABEL_16;
  }
  v5 = -1073741811;
  v15 = -1073741811;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = -1073741811;
    v6 = 73;
    LODWORD(v11) = 24;
LABEL_16:
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      a3,
      v6,
      (__int64)&WPP_e298431ce78b37773429aeb487faa819_Traceguids,
      v11,
      v13);
    v5 = v15;
  }
LABEL_17:
  v9 = v5;
  Irp->IoStatus.Status = v5;
  IofCompleteRequest(Irp, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v11) = v15;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v15,
      9u,
      0x48u,
      (__int64)&WPP_e298431ce78b37773429aeb487faa819_Traceguids,
      v11);
  }
  return v9;
}
