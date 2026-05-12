/*
 * XREFs of PortPassThroughExSendAsync @ 0x1C007C3C0
 * Callers:
 *     RaidAdapterPassThrough @ 0x1C00776B8 (RaidAdapterPassThrough.c)
 * Callees:
 *     PortPassThroughBuildIrpEx @ 0x1C001D194 (PortPassThroughBuildIrpEx.c)
 *     PortPassThroughFreeIrpEx @ 0x1C001D4CC (PortPassThroughFreeIrpEx.c)
 *     StorASyncScsiPassThroughCompletion @ 0x1C00323B0 (StorASyncScsiPassThroughCompletion.c)
 *     PortPassThroughExBasicValidation @ 0x1C0058B40 (PortPassThroughExBasicValidation.c)
 *     PortPassThroughExFreeSrbEx @ 0x1C0058BEC (PortPassThroughExFreeSrbEx.c)
 *     PortPassThroughExGetBasicStructureSize @ 0x1C0058C58 (PortPassThroughExGetBasicStructureSize.c)
 *     PortPassThroughExValidate @ 0x1C0058F14 (PortPassThroughExValidate.c)
 *     PortpEnableCancel @ 0x1C0059544 (PortpEnableCancel.c)
 *     PortPassThroughExBuildSrbEx @ 0x1C007C004 (PortPassThroughExBuildSrbEx.c)
 *     PortPassThroughExGetDataBuffers @ 0x1C007C374 (PortPassThroughExGetDataBuffers.c)
 *     PortPassThroughSendAsync @ 0x1C007CA18 (PortPassThroughSendAsync.c)
 */

__int64 __fastcall PortPassThroughExSendAsync(
        struct _DEVICE_OBJECT *a1,
        IRP *a2,
        char a3,
        int a4,
        int a5,
        int a6,
        PMDL MemoryDescriptorList,
        __int64 a8)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _BYTE *v12; // r13
  int v13; // r9d
  void *v14; // r14
  int BasicStructureSize; // ebx
  unsigned int *PoolWithTag; // rsi
  KPROCESSOR_MODE RequestorMode; // cl
  __int64 v19; // rbx
  ULONG v20; // r8d
  void *v21; // rdx
  PIRP v22; // r15
  struct _MDL *v23; // r12
  _DWORD *v24; // rax
  _BYTE *v25; // rax
  __int64 v26; // rdx
  _IO_STACK_LOCATION *v27; // rax
  ULONG AccessMode; // [rsp+20h] [rbp-40h]
  int v29; // [rsp+30h] [rbp-30h]
  __int64 v30; // [rsp+40h] [rbp-20h]
  int v31[2]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v33; // [rsp+A8h] [rbp+48h] BYREF
  SIZE_T NumberOfBytes; // [rsp+B8h] [rbp+58h] BYREF

  LODWORD(NumberOfBytes) = a4;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_QWORD *)v31 = 0LL;
  v33 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v12 = 0LL;
  v13 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 315460;
  MemoryDescriptorList = 0LL;
  v14 = 0LL;
  if ( (v13 & 0xFFFFFFFB) != 0 )
    return PortPassThroughSendAsync((int)a1, a2, a5, a6, v29, a8);
  BasicStructureSize = PortPassThroughExBasicValidation(a2);
  if ( BasicStructureSize < 0 )
    goto LABEL_27;
  BasicStructureSize = PortPassThroughExGetBasicStructureSize((__int64)a2, (ULONG *)&NumberOfBytes);
  if ( BasicStructureSize < 0 )
    goto LABEL_27;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x69506C50u);
  if ( !PoolWithTag )
  {
    BasicStructureSize = -1073741670;
LABEL_27:
    a2->IoStatus.Status = BasicStructureSize;
    StorASyncScsiPassThroughCompletion(a2);
    return (unsigned int)BasicStructureSize;
  }
  BasicStructureSize = PortPassThroughExValidate((__int64)a1, a2, a3, a5, a6, PoolWithTag);
  if ( BasicStructureSize < 0 )
  {
LABEL_26:
    ExFreePoolWithTag(PoolWithTag, 0x69506C50u);
    goto LABEL_27;
  }
  PortPassThroughExGetDataBuffers((__int64)PoolWithTag, (__int64)a2, a3, v31, &v33);
  if ( a3 )
    RequestorMode = a2->RequestorMode;
  else
    RequestorMode = 0;
  v19 = *(_QWORD *)v31;
  if ( *(_QWORD *)v31 )
    v20 = PoolWithTag[8];
  else
    v20 = PoolWithTag[9];
  v21 = (void *)v33;
  if ( *(_QWORD *)v31 )
    v21 = *(void **)v31;
  LODWORD(v30) = PoolWithTag[9];
  v22 = PortPassThroughBuildIrpEx(
          (__int64)a1,
          v21,
          v20,
          *((_BYTE *)PoolWithTag + 18) == 1,
          RequestorMode,
          a2,
          *((_BYTE *)PoolWithTag + 18) == 3,
          (void *)v33,
          v30,
          &MemoryDescriptorList);
  if ( !v22
    || (v24 = PortPassThroughExBuildSrbEx(a2, (__int64)PoolWithTag, v19, v33, AccessMode, (__int64)MemoryDescriptorList),
        (v12 = v24) == 0LL)
    || (*((_QWORD *)v24 + 10) = v22,
        v22->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)v24,
        v25 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x69506C50u),
        (v14 = v25) == 0LL) )
  {
    BasicStructureSize = -1073741670;
LABEL_18:
    v23 = MemoryDescriptorList;
    if ( MemoryDescriptorList )
    {
      MmUnlockPages(MemoryDescriptorList);
      IoFreeMdl(v23);
    }
    if ( v22 )
      PortPassThroughFreeIrpEx(v22);
    if ( v12 )
      PortPassThroughExFreeSrbEx(v12);
    if ( v14 )
      ExFreePoolWithTag(v14, 0x69506C50u);
    goto LABEL_26;
  }
  *((_QWORD *)v25 + 3) = v12;
  *((_QWORD *)v25 + 1) = v22;
  v26 = (__int64)v25;
  *v25 = a3;
  *((_QWORD *)v25 + 2) = a2;
  *((_QWORD *)v25 + 4) = StorASyncScsiPassThroughCompletion;
  *((_QWORD *)v25 + 5) = a8;
  v27 = v22->Tail.Overlay.CurrentStackLocation;
  v27[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))PortpAsyncCompletion;
  v27[-1].Context = v14;
  v27[-1].Control = -32;
  BasicStructureSize = PortpEnableCancel((__int64)a2, v26);
  if ( BasicStructureSize != 259 )
    goto LABEL_18;
  ExFreePoolWithTag(PoolWithTag, 0x69506C50u);
  IofCallDriver(a1, v22);
  return 259LL;
}
