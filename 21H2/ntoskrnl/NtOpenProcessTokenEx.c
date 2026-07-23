/*
 * XREFs of NtOpenProcessTokenEx @ 0x14071DAA0
 * Callers:
 *     NtOpenProcessToken @ 0x14071DA80 (NtOpenProcessToken.c)
 *     RtlpSysVolTakeOwnership @ 0x140915FE8 (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObFastReferenceObject @ 0x14026A680 (ObFastReferenceObject.c)
 *     ObFastReferenceObjectLocked @ 0x1402AAC68 (ObFastReferenceObjectLocked.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140707FE0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObOpenObjectByPointer @ 0x14071DC60 (ObOpenObjectByPointer.c)
 */

NTSTATUS __stdcall NtOpenProcessTokenEx(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  KPROCESSOR_MODE AccessMode; // r15
  int v7; // ebx
  ULONG v8; // ebx
  __int64 v9; // rdx
  NTSTATUS result; // eax
  PVOID v11; // rsi
  _QWORD *v12; // r12
  struct _DMA_ADAPTER *v13; // rdi
  int v14; // ebx
  signed __int64 *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  POBJECT_TYPE ObjectType; // [rsp+20h] [rbp-58h]
  PVOID Object; // [rsp+40h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-30h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-28h]

  Handle = 0LL;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  v7 = 73714;
  if ( AccessMode )
    v7 = 7666;
  v8 = HandleAttributes & v7;
  if ( AccessMode )
  {
    v9 = (__int64)TokenHandle;
    if ( (unsigned __int64)TokenHandle >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v9 = *(_QWORD *)v9;
  }
  Object = 0LL;
  LODWORD(ObjectType) = 1699967824;
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)ProcessHandle,
             4096LL,
             PsProcessType,
             (unsigned __int8)KeGetCurrentThread()->$6BEBF485330D18E60173AA6D991B35AC::gap0[10],
             ObjectType,
             &Object,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    v11 = Object;
    v12 = (char *)Object + 1208;
    v13 = (struct _DMA_ADAPTER *)ObFastReferenceObject((signed __int64 *)Object + 151);
    if ( !v13 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v15 = (signed __int64 *)((char *)Object + 1080);
      ExAcquirePushLockSharedEx((ULONG_PTR)Object + 1080, 0LL);
      v13 = (struct _DMA_ADAPTER *)ObFastReferenceObjectLocked(v12);
      if ( _InterlockedCompareExchange64(v15, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v15);
      KeAbPostRelease((ULONG_PTR)v15);
      KeLeaveCriticalRegionThread((__int64)CurrentThread, v16, v17, v18);
      v11 = Object;
    }
    ObfDereferenceObjectWithTag(v11, 0x65537350u);
    v14 = ObOpenObjectByPointer(v13, v8, 0LL, DesiredAccess, (POBJECT_TYPE)SeTokenObjectType, AccessMode, &Handle);
    HalPutDmaAdapter(v13);
    if ( v14 >= 0 )
      *TokenHandle = Handle;
    return v14;
  }
  return result;
}
