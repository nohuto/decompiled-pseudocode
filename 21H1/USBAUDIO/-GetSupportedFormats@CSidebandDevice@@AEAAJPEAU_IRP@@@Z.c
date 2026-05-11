/*
 * XREFs of ?GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0010C98
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000D59C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00084E8 (WPP_RECORDER_SF_dd.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C000B2FC (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000B334 (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?IntersectDataFormatsWithDataRange@CSidebandDevice@@AEAAJPEAPEATKSDATAFORMAT@@KPEAU_KSPIN_DESCRIPTOR_EX@@PEAEPEAK3@Z @ 0x1C000B4B8 (-IntersectDataFormatsWithDataRange@CSidebandDevice@@AEAAJPEAPEATKSDATAFORMAT@@KPEAU_KSPIN_DESCRI.c)
 *     memset @ 0x1C00142C0 (memset.c)
 */

__int64 __fastcall CSidebandDevice::GetSupportedFormats(CSidebandDevice *this, __int64 Irp, __int64 a3)
{
  struct _IO_STACK_LOCATION *v3; // r13
  PIRP v4; // r14
  int v6; // ebx
  unsigned __int16 v7; // r9
  PNAMED_PIPE_CREATE_PARAMETERS Parameters; // r15
  int PinFromEpIndex; // eax
  CSidebandDevice *v10; // rcx
  unsigned __int16 v11; // r9
  unsigned int CompletionMode; // r8d
  union KSDATAFORMAT **v13; // rdx
  __int64 v14; // rbx
  ULONG Length; // eax
  unsigned int v16; // r12d
  ULONG_PTR v17; // rax
  __int64 *UserBuffer; // r13
  struct _KSPIN_DESCRIPTOR_EX *v19; // r9
  int v20; // r12d
  __int64 v21; // rcx
  __int64 v22; // r8
  _DWORD *v23; // rax
  unsigned int *v25; // [rsp+28h] [rbp-38h]
  unsigned int *v26; // [rsp+30h] [rbp-30h]
  __int64 v27; // [rsp+40h] [rbp-20h]
  unsigned __int8 *v28; // [rsp+48h] [rbp-18h]
  ULONG_PTR v29; // [rsp+50h] [rbp-10h]
  unsigned int v30; // [rsp+A8h] [rbp+48h] BYREF
  unsigned int v31; // [rsp+B0h] [rbp+50h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v32; // [rsp+B8h] [rbp+58h] BYREF

  v3 = *(struct _IO_STACK_LOCATION **)(Irp + 184);
  v30 = -1;
  v4 = (PIRP)Irp;
  *(_QWORD *)(Irp + 56) = 0LL;
  v32 = 0LL;
  if ( v3->Parameters.Create.Options >= 0x18 )
  {
    Parameters = v3->Parameters.CreatePipe.Parameters;
    if ( !CSidebandDevice::IsValidEndpointIndex(this, Parameters->ReadMode) )
    {
      v6 = -1073741811;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_31;
      LODWORD(v26) = -1073741811;
      v7 = 128;
      LODWORD(v25) = Parameters->ReadMode;
      goto LABEL_4;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        Irp,
        9u,
        0x81u,
        (__int64)&WPP_79bead6f9d27363c8bef3ec1aaaaff7a_Traceguids,
        Parameters->ReadMode);
    PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, Parameters->ReadMode, &v30, &v32);
    v6 = PinFromEpIndex;
    if ( PinFromEpIndex >= 0 )
    {
      CompletionMode = Parameters->CompletionMode;
      v13 = *(union KSDATAFORMAT ***)&Parameters->InboundQuota;
      v30 = 0;
      v31 = 0;
      PinFromEpIndex = CSidebandDevice::IntersectDataFormatsWithDataRange(
                         v10,
                         v13,
                         CompletionMode,
                         v32,
                         0LL,
                         &v31,
                         &v30);
      v6 = PinFromEpIndex;
      if ( PinFromEpIndex >= 0 )
      {
        v14 = v31;
        Length = v3->Parameters.Read.Length;
        v16 = v30 + 24 + 8 * v31;
        if ( Length )
        {
          if ( Length != v16 )
          {
            v6 = -1073741811;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_31;
            LODWORD(v26) = -1073741811;
            v7 = 132;
            LODWORD(v25) = v30 + 24 + 8 * v31;
            goto LABEL_4;
          }
          UserBuffer = (__int64 *)v4->UserBuffer;
          v29 = v16;
          memset(UserBuffer, 0, v16);
          v19 = v32;
          *(_DWORD *)UserBuffer = v16;
          v20 = 0;
          *((_DWORD *)UserBuffer + 1) = Parameters->ReadMode;
          UserBuffer[2] = (__int64)(UserBuffer + 3);
          *((_DWORD *)UserBuffer + 2) = v14;
          v28 = (unsigned __int8 *)&UserBuffer[v14 + 3];
          v27 = v14;
          v6 = CSidebandDevice::IntersectDataFormatsWithDataRange(
                 (CSidebandDevice *)(UserBuffer + 1),
                 *(union KSDATAFORMAT ***)&Parameters->InboundQuota,
                 Parameters->CompletionMode,
                 v19,
                 v28,
                 (unsigned int *)UserBuffer + 2,
                 &v30);
          if ( v31 )
          {
            Irp = UserBuffer[2];
            v21 = 0LL;
            v22 = v27;
            do
            {
              *(_QWORD *)(v21 + Irp) = &v28[v20];
              Irp = UserBuffer[2];
              v23 = *(_DWORD **)(v21 + Irp);
              v21 += 8LL;
              v20 += *v23;
              --v22;
            }
            while ( v22 );
          }
          if ( v6 < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_31;
            v11 = 133;
            LODWORD(v25) = v6;
            goto LABEL_14;
          }
          v17 = v29;
        }
        else
        {
          v17 = v16;
          v6 = -1073741789;
        }
        v4->IoStatus.Information = v17;
        goto LABEL_31;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_31;
      v11 = 131;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_31;
      v11 = 130;
    }
    LODWORD(v25) = PinFromEpIndex;
LABEL_14:
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      Irp,
      9u,
      v11,
      (__int64)&WPP_79bead6f9d27363c8bef3ec1aaaaff7a_Traceguids,
      v25);
    goto LABEL_31;
  }
  v6 = -1073741811;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v26) = -1073741811;
    v7 = 127;
    LODWORD(v25) = 24;
LABEL_4:
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      Irp,
      a3,
      v7,
      (__int64)&WPP_79bead6f9d27363c8bef3ec1aaaaff7a_Traceguids,
      v25,
      v26);
  }
LABEL_31:
  v4->IoStatus.Status = v6;
  IofCompleteRequest(v4, 0);
  return (unsigned int)v6;
}
