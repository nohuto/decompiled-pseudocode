/*
 * XREFs of NtAlpcDeleteSectionView @ 0x14070A470
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     AlpcpDereferenceBlobEx @ 0x1406103F0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteView @ 0x140612DF8 (AlpcpDeleteView.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     AlpcpEnumerateResourcesPort @ 0x14070A9A4 (AlpcpEnumerateResourcesPort.c)
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
        v6 = AlpcpDeleteView(BugCheckParameter2[1]) == 0 ? 0xC0000056 : 0;
        AlpcpDereferenceBlobEx(v12, 1);
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
