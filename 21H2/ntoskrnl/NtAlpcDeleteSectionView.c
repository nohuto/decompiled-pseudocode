/*
 * XREFs of NtAlpcDeleteSectionView @ 0x1405FC380
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     AlpcpEnumerateResourcesPort @ 0x140656F78 (AlpcpEnumerateResourcesPort.c)
 *     AlpcpDeleteView @ 0x140657378 (AlpcpDeleteView.c)
 *     AlpcpDereferenceBlobEx @ 0x1406D9720 (AlpcpDereferenceBlobEx.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtAlpcDeleteSectionView(HANDLE PortHandle, ULONG Flags, PVOID ViewBase)
{
  __int64 v3; // r9
  struct _KTHREAD *CurrentThread; // rax
  signed int v6; // ebx
  PADAPTER_OBJECT v7; // rdi
  signed __int64 *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // edi
  ULONG_PTR v12; // rdi
  ULONG_PTR BugCheckParameter2[4]; // [rsp+38h] [rbp-20h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+78h] [rbp+20h] BYREF

  *(_OWORD *)BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( Flags )
  {
    v6 = -1073741811;
  }
  else
  {
    DmaAdapter = 0LL;
    v6 = ObReferenceObjectByHandle(
           PortHandle,
           1u,
           AlpcPortObjectType,
           KeGetCurrentThread()->PreviousMode,
           (PVOID *)&DmaAdapter,
           0LL);
    if ( v6 >= 0 )
    {
      BugCheckParameter2[0] = (ULONG_PTR)ViewBase;
      v7 = DmaAdapter;
      BugCheckParameter2[1] = 0LL;
      v8 = (signed __int64 *)&DmaAdapter[22];
      while ( 1 )
      {
        ExAcquirePushLockSharedEx((ULONG_PTR)v8, 0LL);
        v11 = AlpcpEnumerateResourcesPort(v7, v9, v10, BugCheckParameter2);
        if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v8);
        KeAbPostRelease((ULONG_PTR)v8);
        if ( v11 != -1073741267 )
          break;
        v7 = DmaAdapter;
      }
      v12 = BugCheckParameter2[1];
      if ( BugCheckParameter2[1] )
      {
        v6 = (unsigned __int8)AlpcpDeleteView(BugCheckParameter2[1]) == 0 ? 0xC0000056 : 0;
        AlpcpDereferenceBlobEx(v12);
      }
      else
      {
        v6 = -1073741503;
      }
      HalPutDmaAdapter(DmaAdapter);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), *(__int64 *)&Flags, (__int64)ViewBase, v3);
  return v6;
}
