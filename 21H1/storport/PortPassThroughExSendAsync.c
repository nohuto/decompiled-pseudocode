/*
 * XREFs of PortPassThroughExSendAsync @ 0x1C007C3CC
 * Callers:
 *     RaidAdapterPassThrough @ 0x1C0077794 (RaidAdapterPassThrough.c)
 * Callees:
 *     PortPassThroughFreeIrp @ 0x1C0001E3C (PortPassThroughFreeIrp.c)
 *     StorASyncScsiPassThroughCompletion @ 0x1C0031E30 (StorASyncScsiPassThroughCompletion.c)
 *     PortPassThroughExBasicValidation @ 0x1C0058410 (PortPassThroughExBasicValidation.c)
 *     PortPassThroughExFreeSrbEx @ 0x1C00584A4 (PortPassThroughExFreeSrbEx.c)
 *     PortPassThroughExValidate @ 0x1C0058760 (PortPassThroughExValidate.c)
 *     PortpEnableCancel @ 0x1C0058D94 (PortpEnableCancel.c)
 *     PortPassThroughBuildIrp @ 0x1C0071008 (PortPassThroughBuildIrp.c)
 *     PortPassThroughExBuildSrbEx @ 0x1C007C0E4 (PortPassThroughExBuildSrbEx.c)
 *     PortPassThroughExGetDataBuffers @ 0x1C007C380 (PortPassThroughExGetDataBuffers.c)
 *     PortPassThroughSendAsync @ 0x1C007C9B8 (PortPassThroughSendAsync.c)
 */

__int64 __fastcall PortPassThroughExSendAsync(
        struct _DEVICE_OBJECT *a1,
        IRP *a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        void *a7,
        __int64 a8)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  void *v9; // r14
  int v14; // ebx
  unsigned int *PoolWithTag; // rsi
  KPROCESSOR_MODE RequestorMode; // al
  __int64 v17; // rbx
  ULONG v18; // r8d
  void *v19; // rdx
  PIRP v20; // r15
  _DWORD *v21; // rax
  _BYTE *v22; // rbp
  _BYTE *v23; // rax
  __int64 v24; // rdx
  _IO_STACK_LOCATION *v25; // rax
  int v26; // [rsp+30h] [rbp-38h]
  void *v27; // [rsp+78h] [rbp+10h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v9 = 0LL;
  a7 = 0LL;
  v27 = 0LL;
  if ( ((CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 315460) & 0xFFFFFFFB) != 0 )
    return PortPassThroughSendAsync(a1, a5, a6, v26, a8);
  v14 = PortPassThroughExBasicValidation(a2);
  if ( v14 < 0 )
    goto LABEL_24;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(
                                  NonPagedPoolNx,
                                  (unsigned int)(LODWORD(a2->AssociatedIrp.MasterIrp->MdlAddress) + 63),
                                  0x69506C50u);
  if ( !PoolWithTag )
  {
    v14 = -1073741670;
LABEL_24:
    a2->IoStatus.Status = v14;
    StorASyncScsiPassThroughCompletion(a2);
    return (unsigned int)v14;
  }
  v14 = PortPassThroughExValidate((__int64)a1, a2, a3, a5, a6, PoolWithTag);
  if ( v14 < 0 )
  {
LABEL_23:
    ExFreePoolWithTag(PoolWithTag, 0x69506C50u);
    goto LABEL_24;
  }
  PortPassThroughExGetDataBuffers((__int64)PoolWithTag, (__int64)a2, a3, &a7, &v27);
  if ( a3 )
    RequestorMode = a2->RequestorMode;
  else
    RequestorMode = 0;
  v17 = (__int64)a7;
  if ( a7 )
    v18 = PoolWithTag[8];
  else
    v18 = PoolWithTag[9];
  v19 = v27;
  if ( a7 )
    v19 = a7;
  v20 = PortPassThroughBuildIrp((__int64)a1, v19, v18, *((_BYTE *)PoolWithTag + 18) == 1, RequestorMode);
  if ( !v20 )
  {
    v14 = -1073741670;
    goto LABEL_23;
  }
  v21 = PortPassThroughExBuildSrbEx(a2, (__int64)PoolWithTag, v17, (__int64)v27);
  v22 = v21;
  if ( !v21
    || (*((_QWORD *)v21 + 10) = v20,
        v20->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)v21,
        v23 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x69506C50u),
        (v9 = v23) == 0LL) )
  {
    v14 = -1073741670;
LABEL_19:
    PortPassThroughFreeIrp(v20);
    if ( v22 )
      PortPassThroughExFreeSrbEx(v22);
    if ( v9 )
      ExFreePoolWithTag(v9, 0x69506C50u);
    goto LABEL_23;
  }
  *((_QWORD *)v23 + 3) = v22;
  *((_QWORD *)v23 + 1) = v20;
  v24 = (__int64)v23;
  *v23 = a3;
  *((_QWORD *)v23 + 2) = a2;
  *((_QWORD *)v23 + 4) = StorASyncScsiPassThroughCompletion;
  *((_QWORD *)v23 + 5) = a8;
  v25 = v20->Tail.Overlay.CurrentStackLocation;
  v25[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))PortpAsyncCompletion;
  v25[-1].Context = v9;
  v25[-1].Control = -32;
  v14 = PortpEnableCancel((__int64)a2, v24);
  if ( v14 != 259 )
    goto LABEL_19;
  ExFreePoolWithTag(PoolWithTag, 0x69506C50u);
  IofCallDriver(a1, v20);
  return 259LL;
}
