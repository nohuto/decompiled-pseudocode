/*
 * XREFs of ?GetVolumeImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000C1D8
 * Callers:
 *     ?GetVolumeStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000EE2C (-GetVolumeStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0004174 (WPP_RECORDER_SF_ddd.c)
 *     ?GetNodeOfType@CSidebandDevice@@AEAAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z @ 0x1C000A874 (-GetNodeOfType@CSidebandDevice@@AEAAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C000B2FC (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000B334 (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1C000BF40 (-GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     PropertyGetDbLevelSideband @ 0x1C0028FD4 (PropertyGetDbLevelSideband.c)
 */

__int64 __fastcall CSidebandDevice::GetVolumeImmediate(CSidebandDevice *this, struct _IRP *a2)
{
  struct _IRP *v2; // r14
  __int16 v3; // r10
  __int64 v5; // rax
  __int64 v6; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  unsigned int v8; // ebx
  unsigned int *p_NamedPipeType; // rsi
  BOOL IsValidEndpointIndex; // eax
  int PinFromEpIndex; // eax
  unsigned __int16 v12; // r9
  unsigned int v13; // r12d
  int v14; // ecx
  unsigned int v15; // ebx
  _OWORD *UserBuffer; // rax
  unsigned int *v18; // [rsp+28h] [rbp-30h]
  struct _KSPIN_DESCRIPTOR_EX *v19; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v20; // [rsp+A0h] [rbp+48h] BYREF
  unsigned int v21; // [rsp+A8h] [rbp+50h] BYREF
  unsigned int v22; // [rsp+B0h] [rbp+58h] BYREF
  unsigned int v23; // [rsp+B8h] [rbp+60h] BYREF

  v2 = a2;
  v3 = 0;
  v21 = -1;
  v20 = -1;
  v22 = -1;
  v5 = *((_QWORD *)this + 4);
  v19 = 0LL;
  v23 = 0;
  v6 = *(_QWORD *)(v5 + 16);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x58u,
      (__int64)&WPP_7785e2eca0573873336158315744df4b_Traceguids);
    v3 = 0;
  }
  CurrentStackLocation = v2->Tail.Overlay.CurrentStackLocation;
  v2->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options == 16 )
  {
    p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
    IsValidEndpointIndex = CSidebandDevice::IsValidEndpointIndex(this, *p_NamedPipeType);
    v3 = 0;
    if ( IsValidEndpointIndex )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (__int64)a2,
          9u,
          0x59u,
          (__int64)&WPP_7785e2eca0573873336158315744df4b_Traceguids,
          p_NamedPipeType[2]);
      PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, *p_NamedPipeType, &v21, &v19);
      v8 = PinFromEpIndex;
      if ( PinFromEpIndex >= 0 )
      {
        v13 = v21;
        PinFromEpIndex = CSidebandDevice::GetBridgePinForDataPin(
                           this,
                           (struct _KSFILTER_DESCRIPTOR *)(v6 + 128),
                           v21,
                           &v20);
        v8 = PinFromEpIndex;
        if ( PinFromEpIndex >= 0 )
        {
          PinFromEpIndex = CSidebandDevice::GetNodeOfType(
                             this,
                             v20,
                             v13,
                             (struct _KSFILTER_DESCRIPTOR *)(v6 + 128),
                             &GUID_3a5acc00_c557_11d0_8a2b_00a0c9255ac1,
                             &v22);
          v3 = 0;
          v8 = PinFromEpIndex;
          if ( PinFromEpIndex >= 0 )
          {
            v15 = v22;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v18) = v20;
              WPP_RECORDER_SF_ddd(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                (__int64)a2,
                9u,
                0x5Du,
                (__int64)&WPP_7785e2eca0573873336158315744df4b_Traceguids,
                v18,
                v13,
                v22,
                v19);
              v3 = 0;
            }
            a2 = (struct _IRP *)(*(_QWORD *)(v6 + 200) + v15 * *(_DWORD *)(v6 + 196));
            if ( CurrentStackLocation->Parameters.Read.Length != 16 )
            {
              v8 = -1073741789;
              goto LABEL_30;
            }
            UserBuffer = v2->UserBuffer;
            *UserBuffer = *(_OWORD *)p_NamedPipeType;
            PinFromEpIndex = PropertyGetDbLevelSideband(
                               v14,
                               (_DWORD)a2,
                               (unsigned int)&v23,
                               p_NamedPipeType[2],
                               (__int64)UserBuffer + 12);
            v8 = PinFromEpIndex;
            if ( PinFromEpIndex >= 0 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v18) = p_NamedPipeType[3];
                WPP_RECORDER_SF_d(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  (__int64)a2,
                  9u,
                  0x5Fu,
                  (__int64)&WPP_7785e2eca0573873336158315744df4b_Traceguids,
                  v18);
                v3 = 0;
              }
              v2->IoStatus.Information = v23;
              goto LABEL_30;
            }
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              return v8;
            v12 = 94;
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              return v8;
            v12 = 92;
          }
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return v8;
          v12 = 91;
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v8;
        v12 = 90;
      }
      LODWORD(v18) = PinFromEpIndex;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)a2,
        9u,
        v12,
        (__int64)&WPP_7785e2eca0573873336158315744df4b_Traceguids,
        v18);
      v3 = 0;
    }
    else
    {
      v8 = -1073741811;
    }
  }
  else
  {
    v8 = -1073741811;
  }
LABEL_30:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) != v3 )
  {
    LODWORD(v18) = v8;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x60u,
      (__int64)&WPP_7785e2eca0573873336158315744df4b_Traceguids,
      v18);
  }
  return v8;
}
