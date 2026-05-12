/*
 * XREFs of PortPassThroughSendAsync @ 0x1C007DF18
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1C007D8C0 (PortPassThroughExSendAsync.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001CB10 (__security_check_cookie.c)
 *     PortPassThroughBuildIrpEx @ 0x1C001F05C (PortPassThroughBuildIrpEx.c)
 *     PortPassThroughFreeIrpEx @ 0x1C001F394 (PortPassThroughFreeIrpEx.c)
 *     StorASyncScsiPassThroughCompletion @ 0x1C0033230 (StorASyncScsiPassThroughCompletion.c)
 *     PortPassThroughFreeSrb @ 0x1C0059EF0 (PortPassThroughFreeSrb.c)
 *     PortpEnableCancel @ 0x1C005A404 (PortpEnableCancel.c)
 *     PortPassThroughBuildSrb @ 0x1C007D450 (PortPassThroughBuildSrb.c)
 *     PortPassThroughGetDataBuffer @ 0x1C007DEF4 (PortPassThroughGetDataBuffer.c)
 *     PortPassThroughValidate @ 0x1C007E2D8 (PortPassThroughValidate.c)
 */

__int64 __fastcall PortPassThroughSendAsync(
        struct _DEVICE_OBJECT *a1,
        PIRP Irp,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8)
{
  char v8; // r15
  void *v11; // rdi
  int v12; // ebx
  void *DataBuffer; // rax
  int v14; // ebx
  KPROCESSOR_MODE AccessMode; // cl
  PIRP v16; // rbp
  _QWORD *v17; // r14
  _BYTE *PoolWithTag; // rax
  __int64 v20; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v22; // [rsp+40h] [rbp-88h]
  int v23[4]; // [rsp+50h] [rbp-78h] BYREF
  __int128 v24; // [rsp+60h] [rbp-68h]
  __int128 v25; // [rsp+70h] [rbp-58h]
  __int64 v26; // [rsp+80h] [rbp-48h]

  *(_OWORD *)v23 = 0LL;
  v8 = a3;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v11 = 0LL;
  v12 = PortPassThroughValidate((_DWORD)a1, (_DWORD)Irp, a3, a5, a6, (__int64)v23);
  if ( v12 < 0 )
    goto LABEL_13;
  DataBuffer = (void *)PortPassThroughGetDataBuffer((__int64)v23, (__int64)Irp, v8);
  v14 = (int)DataBuffer;
  if ( v8 )
    AccessMode = Irp->RequestorMode;
  else
    AccessMode = 0;
  LODWORD(v22) = 0;
  v16 = PortPassThroughBuildIrpEx(
          (__int64)a1,
          DataBuffer,
          v23[3],
          LOBYTE(v23[2]) != 0,
          AccessMode,
          Irp,
          0,
          0LL,
          v22,
          0LL);
  if ( !v16 )
  {
    v12 = -1073741670;
LABEL_13:
    Irp->IoStatus.Status = v12;
    StorASyncScsiPassThroughCompletion(Irp);
    return (unsigned int)v12;
  }
  v17 = PortPassThroughBuildSrb((__int64)v23, v14);
  if ( !v17
    || (v16->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)v17,
        v17[6] = v16,
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x69506C50u),
        (v11 = PoolWithTag) == 0LL) )
  {
    v12 = -1073741670;
LABEL_9:
    PortPassThroughFreeIrpEx(v16);
    if ( v17 )
      PortPassThroughFreeSrb(v17);
    if ( v11 )
      ExFreePoolWithTag(v11, 0x69506C50u);
    goto LABEL_13;
  }
  *((_QWORD *)PoolWithTag + 3) = v17;
  *((_QWORD *)PoolWithTag + 1) = v16;
  v20 = (__int64)PoolWithTag;
  *PoolWithTag = v8;
  *((_QWORD *)PoolWithTag + 2) = Irp;
  *((_QWORD *)PoolWithTag + 4) = StorASyncScsiPassThroughCompletion;
  *((_QWORD *)PoolWithTag + 5) = a8;
  CurrentStackLocation = v16->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))PortpAsyncCompletion;
  CurrentStackLocation[-1].Context = v11;
  CurrentStackLocation[-1].Control = -32;
  v12 = PortpEnableCancel((__int64)Irp, v20);
  if ( v12 != 259 )
    goto LABEL_9;
  IofCallDriver(a1, v16);
  return 259LL;
}
