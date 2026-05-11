/*
 * XREFs of PropertySetFeatureValue @ 0x1C0028960
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012930 (_guard_dispatch_icall_nop.c)
 *     DeviceRequestPowerUp @ 0x1C002349C (DeviceRequestPowerUp.c)
 *     QueuePropertyRequest @ 0x1C002BC34 (QueuePropertyRequest.c)
 */

__int64 __fastcall PropertySetFeatureValue(PIRP Irp, __int64 a2, __int64 a3)
{
  PKSFILTER FilterFromIrp; // rax
  __int64 v7; // rdx
  PKSFILTER v8; // r14
  int v9; // ebp
  __int64 v10; // r9
  __int64 Descriptor; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  __int64 v13; // rdi
  PIRP *Context; // rcx
  unsigned int v16; // edx
  ULONG Length; // [rsp+28h] [rbp-40h]
  unsigned int v18; // [rsp+78h] [rbp+10h] BYREF

  v18 = 0;
  FilterFromIrp = KsGetFilterFromIrp(Irp);
  v8 = FilterFromIrp;
  v9 = -1073741811;
  if ( !FilterFromIrp )
    return (unsigned int)v9;
  v10 = *(unsigned int *)(a2 + 24);
  Descriptor = (__int64)FilterFromIrp->Descriptor;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v13 = (__int64)&FilterFromIrp->Descriptor->NodeDescriptors[7 * v10];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    Length = CurrentStackLocation->Parameters.Read.Length;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v7,
      0xAu,
      0xBu,
      (__int64)&WPP_daa3c8234111352579d92ba3cb45b39f_Traceguids,
      Length);
  }
  Context = (PIRP *)v8->Context;
  if ( LODWORD(Context[2][2].UserBuffer) == 1 )
  {
    v16 = *(_DWORD *)(a2 + 32);
    if ( v16 < *(_DWORD *)(v13 + 92) )
    {
      v9 = (*(__int64 (__fastcall **)(PIRP *, __int64, _QWORD, __int64, unsigned int, int, unsigned int *))(v13 + 136))(
             Context,
             v13,
             CurrentStackLocation->Parameters.Read.Length,
             a3,
             v16,
             1,
             &v18);
      if ( v9 >= 0 )
        Irp->IoStatus.Information = v18;
    }
    return (unsigned int)v9;
  }
  if ( DeviceRequestPowerUp(Context, v7, Descriptor, v10) < 0 )
    return 3221225635LL;
  else
    return QueuePropertyRequest(Irp);
}
