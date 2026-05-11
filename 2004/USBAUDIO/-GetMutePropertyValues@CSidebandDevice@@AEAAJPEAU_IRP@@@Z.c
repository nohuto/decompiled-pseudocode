/*
 * XREFs of ?GetMutePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000EED8
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000D59C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00084E8 (WPP_RECORDER_SF_dd.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C000B2FC (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     ?GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000C920 (-GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     WPP_RECORDER_SF_dq @ 0x1C000E280 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall CSidebandDevice::GetMutePropertyValues(CSidebandDevice *this, PIRP Irp, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  unsigned int MutePropertyBasicSupport; // edi
  unsigned __int16 v7; // r9
  unsigned int NamedPipeType; // esi
  PVOID UserBuffer; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  int v13; // [rsp+20h] [rbp-38h]
  int v14; // [rsp+28h] [rbp-30h]
  unsigned int Length; // [rsp+68h] [rbp+10h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options == 4 )
  {
    NamedPipeType = CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
    if ( !CSidebandDevice::IsValidEndpointIndex(this, NamedPipeType) )
    {
      MutePropertyBasicSupport = -1073741811;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_10;
      v7 = 42;
      v14 = NamedPipeType;
      goto LABEL_4;
    }
    UserBuffer = Irp->UserBuffer;
    Length = CurrentStackLocation->Parameters.Read.Length;
    MutePropertyBasicSupport = CSidebandDevice::GetMutePropertyBasicSupport(this, NamedPipeType, &Length, UserBuffer);
    Irp->IoStatus.Information = Length;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dq((__int64)WPP_GLOBAL_Control->DeviceExtension, v10, v11, 0x2Bu, v13);
  }
  else
  {
    MutePropertyBasicSupport = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 41;
      v14 = 4;
LABEL_4:
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)Irp,
        a3,
        v7,
        (__int64)&WPP_e298431ce78b37773429aeb487faa819_Traceguids,
        v14,
        -1073741811);
    }
  }
LABEL_10:
  Irp->IoStatus.Status = MutePropertyBasicSupport;
  IofCompleteRequest(Irp, 0);
  return MutePropertyBasicSupport;
}
