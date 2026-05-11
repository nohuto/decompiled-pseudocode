/*
 * XREFs of ?GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000FC20
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000CD2C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0008558 (WPP_RECORDER_SF_dd.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C000AAAC (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000AAE4 (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z @ 0x1C000B4D0 (-GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSidebandDevice::GetSiop(CSidebandDevice *this, __int64 a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *v4; // rdi
  int v5; // ecx
  unsigned __int16 v6; // r9
  unsigned int *p_NamedPipeType; // rbx
  int PinFromEpIndex; // eax
  __int64 v9; // rdx
  unsigned __int16 v10; // r9
  struct _KSPIN *v11; // rsi
  _QWORD *Context; // rcx
  __int64 v13; // r14
  ULONG v14; // eax
  unsigned int v15; // ebx
  __int64 v17; // [rsp+28h] [rbp-38h]
  unsigned int v18; // [rsp+40h] [rbp-20h] BYREF
  struct _KSPIN *v19; // [rsp+48h] [rbp-18h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v20; // [rsp+50h] [rbp-10h] BYREF
  PIRP Irp; // [rsp+A8h] [rbp+48h]
  unsigned int v22; // [rsp+B0h] [rbp+50h]
  ULONG Length; // [rsp+B8h] [rbp+58h] BYREF

  Irp = (PIRP)a2;
  v18 = -1;
  v4 = *(struct _IO_STACK_LOCATION **)(a2 + 184);
  v20 = 0LL;
  Length = 0;
  v19 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      9u,
      0x6Cu,
      (__int64)&WPP_30b6f709e09a32649d007c2c655dfdf5_Traceguids);
    a2 = (__int64)Irp;
  }
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( v4->Parameters.Create.Options != 32 )
  {
    v5 = -1073741811;
    v22 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 110;
      LODWORD(v17) = 32;
LABEL_7:
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        a2,
        a3,
        v6,
        (__int64)&WPP_30b6f709e09a32649d007c2c655dfdf5_Traceguids,
        v17,
        -1073741811);
LABEL_33:
      v5 = v22;
      goto LABEL_34;
    }
    goto LABEL_34;
  }
  p_NamedPipeType = &v4->Parameters.CreatePipe.Parameters->NamedPipeType;
  if ( CSidebandDevice::IsValidEndpointIndex(this, *p_NamedPipeType) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        a2,
        9u,
        0x70u,
        (__int64)&WPP_30b6f709e09a32649d007c2c655dfdf5_Traceguids,
        *p_NamedPipeType);
    PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, *p_NamedPipeType, &v18, &v20);
    v22 = PinFromEpIndex;
    v5 = PinFromEpIndex;
    if ( PinFromEpIndex >= 0 )
    {
      PinFromEpIndex = CSidebandDevice::GetPinFromPinsInUseList(this, v18, &v19);
      v22 = PinFromEpIndex;
      v5 = PinFromEpIndex;
      if ( PinFromEpIndex >= 0 )
      {
        v11 = v19;
        Context = v19->Context;
        Length = v4->Parameters.Read.Length;
        v13 = *(_QWORD *)(Context[18] + 128LL);
        if ( *((_QWORD *)p_NamedPipeType + 1) == *(_QWORD *)&SIDEBANDAUDIO_PARAMS_SET_USBAUDIO.Data1
          && *((_QWORD *)p_NamedPipeType + 2) == *(_QWORD *)SIDEBANDAUDIO_PARAMS_SET_USBAUDIO.Data4 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v9,
              9u,
              0x73u,
              (__int64)&WPP_30b6f709e09a32649d007c2c655dfdf5_Traceguids);
          v22 = (*(__int64 (__fastcall **)(_QWORD, struct _KSPIN *, PVOID, ULONG *))(v13 + 88))(
                  p_NamedPipeType[6],
                  v11,
                  Irp->UserBuffer,
                  &Length);
          v14 = v4->Parameters.Read.Length;
          if ( v14 )
          {
            a2 = Length;
            if ( v14 == Length )
            {
              Irp->IoStatus.Information = Length;
              goto LABEL_33;
            }
            v5 = -1073741811;
            v22 = -1073741811;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v6 = 117;
              LODWORD(v17) = Length;
              goto LABEL_7;
            }
          }
          else
          {
            Irp->IoStatus.Information = Length;
            v5 = -1073741789;
            v22 = -1073741789;
          }
          goto LABEL_34;
        }
        v5 = -1073741637;
        v22 = -1073741637;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_34;
        v10 = 116;
        LODWORD(v17) = -1073741637;
LABEL_32:
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v9,
          9u,
          v10,
          (__int64)&WPP_30b6f709e09a32649d007c2c655dfdf5_Traceguids,
          v17);
        goto LABEL_33;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_34;
      v10 = 114;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_34;
      v10 = 113;
    }
    LODWORD(v17) = PinFromEpIndex;
    goto LABEL_32;
  }
  v5 = -1073741811;
  v22 = -1073741811;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = 111;
    LODWORD(v17) = *p_NamedPipeType;
    goto LABEL_7;
  }
LABEL_34:
  v15 = v5;
  Irp->IoStatus.Status = v5;
  IofCompleteRequest(Irp, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v17) = v22;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v22,
      9u,
      0x6Du,
      (__int64)&WPP_30b6f709e09a32649d007c2c655dfdf5_Traceguids,
      v17);
  }
  return v15;
}
