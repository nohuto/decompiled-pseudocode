/*
 * XREFs of DpiGetDxgAdapterFromChild @ 0x1C02C6820
 * Callers:
 *     ?DxgkCaptureAcquireSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1C022BFF0 (-DxgkCaptureAcquireSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z.c)
 *     ?DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1C022C0D0 (-DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetDxgAdapterFromChild(__int64 DeviceObject, _QWORD *a2)
{
  __int64 v3; // rbx
  PIRP v4; // rax
  IRP *v5; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  NTSTATUS v9; // eax
  __int64 v10; // rax
  _QWORD *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+50h] [rbp-28h] BYREF

  v3 = DeviceObject;
  IoStatusBlock = 0LL;
  if ( !DeviceObject || !a2 )
  {
    v10 = WdLogNewEntry5_WdError(DeviceObject, a2);
    v3 = -1073741811LL;
    goto LABEL_17;
  }
  KeInitializeEvent(&Object, SynchronizationEvent, 0);
  v4 = IoBuildSynchronousFsdRequest(0x1Bu, (PDEVICE_OBJECT)v3, 0LL, 0, 0LL, &Object, &IoStatusBlock);
  v5 = v4;
  if ( !v4 )
  {
    LODWORD(v3) = -1073741670;
    return (unsigned int)v3;
  }
  CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MinorFunction = 7;
  CurrentStackLocation[-1].Parameters.Read.Length = 4;
  v5->IoStatus.Status = -1073741637;
  LODWORD(v3) = IofCallDriver((PDEVICE_OBJECT)v3, v5);
  if ( (_DWORD)v3 == 259 )
  {
    v9 = KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    v3 = v9;
    if ( v9 )
    {
      v10 = WdLogNewEntry5_WdError(v8, v7);
LABEL_17:
      *(_QWORD *)(v10 + 24) = v3;
      goto LABEL_18;
    }
    LODWORD(v3) = IoStatusBlock.Status;
  }
  if ( (int)v3 < 0 )
  {
    v10 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v10 + 24) = (int)v3;
LABEL_18:
    WdLogEvent5_WdError(v10);
    return (unsigned int)v3;
  }
  v11 = *(_QWORD **)(IoStatusBlock.Information + 8);
  ExFreePoolWithTag((PVOID)IoStatusBlock.Information, 0);
  v15 = v11[8];
  if ( v15 && *(_DWORD *)(v15 + 16) == 1953656900 && *(_DWORD *)(v15 + 20) == 5 )
  {
    *a2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 32) + 64LL) + 3896LL);
    ObfDereferenceObject(v11);
  }
  else
  {
    LODWORD(v3) = -1073741808;
    v16 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v16 + 24) = v11;
    WdLogEvent5_WdWarning(v16);
  }
  return (unsigned int)v3;
}
