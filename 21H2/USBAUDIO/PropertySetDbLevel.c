/*
 * XREFs of PropertySetDbLevel @ 0x1C00292D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF__guid_dd @ 0x1C0003390 (WPP_RECORDER_SF__guid_dd.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C0003488 (WPP_RECORDER_SF_dddd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012E90 (_guard_dispatch_icall_nop.c)
 *     DeviceRequestPowerUp @ 0x1C00234BC (DeviceRequestPowerUp.c)
 *     QueuePropertyRequest @ 0x1C002BEA4 (QueuePropertyRequest.c)
 */

__int64 __fastcall PropertySetDbLevel(PIRP Irp, __int64 a2, _DWORD *a3)
{
  __int64 v5; // r13
  int v6; // r14d
  __int64 v7; // r8
  __int64 v8; // r9
  PKSFILTER FilterFromIrp; // r12
  int v10; // ebx
  _UNKNOWN **v11; // rdx
  const KSFILTER_DESCRIPTOR *Descriptor; // rax
  PIRP *Context; // r12
  __int64 v14; // rbp
  __int64 v15; // rsi
  _DWORD *v16; // rsi
  int v17; // edi
  _DWORD *v18; // r9
  int v20; // [rsp+20h] [rbp-68h]
  __int64 v21; // [rsp+28h] [rbp-60h]
  unsigned int v22; // [rsp+90h] [rbp+8h] BYREF
  struct _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+98h] [rbp+10h]
  _DWORD *v24; // [rsp+A0h] [rbp+18h]

  v24 = a3;
  v22 = 0;
  v5 = *(unsigned int *)(a2 + 32);
  v6 = *a3;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  FilterFromIrp = KsGetFilterFromIrp(Irp);
  v10 = -1073741811;
  v11 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF__guid_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)&WPP_RECORDER_INITIALIZED,
      v7,
      0x13u,
      v20,
      a2);
    v11 = &WPP_RECORDER_INITIALIZED;
  }
  if ( FilterFromIrp )
  {
    Descriptor = FilterFromIrp->Descriptor;
    Context = (PIRP *)FilterFromIrp->Context;
    v14 = (__int64)&Descriptor->NodeDescriptors[7 * *(unsigned int *)(a2 + 24)];
    v15 = *(_QWORD *)(v14 + 128);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)&WPP_RECORDER_INITIALIZED,
        v7,
        0x14u,
        v20);
    if ( LODWORD(Context[2][2].UserBuffer) == 1 )
    {
      if ( (unsigned int)v5 < *(_DWORD *)(v14 + 92) )
      {
        v16 = (_DWORD *)(32 * v5 + v15);
        v17 = v16[7];
        if ( v6 <= v17 )
        {
          v17 = v6;
          if ( v6 < v16[6] )
            v17 = v16[6];
        }
        v18 = v24;
        *v24 = v17;
        v10 = (*(__int64 (__fastcall **)(PIRP *, __int64, _QWORD, _DWORD *, _DWORD, int, unsigned int *))(v14 + 136))(
                Context,
                v14,
                CurrentStackLocation->Parameters.Read.Length,
                v18,
                v5,
                1,
                &v22);
        if ( v10 >= 0 )
        {
          v16[3] = v17;
          Irp->IoStatus.Information = v22;
LABEL_16:
          if ( v10 >= 0 )
            return (unsigned int)v10;
        }
      }
    }
    else
    {
      if ( DeviceRequestPowerUp(Context, (__int64)v11, v7, v8) >= 0 )
      {
        v10 = QueuePropertyRequest(Irp);
        goto LABEL_16;
      }
      v10 = -1073741661;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v21) = v10;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)v11,
      0xAu,
      0x15u,
      (__int64)&WPP_daa3c8234111352579d92ba3cb45b39f_Traceguids,
      v21);
  }
  return (unsigned int)v10;
}
