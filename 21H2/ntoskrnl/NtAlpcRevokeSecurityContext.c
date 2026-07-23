/*
 * XREFs of NtAlpcRevokeSecurityContext @ 0x1408C28D0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     AlpcReferenceBlobByHandle @ 0x140655760 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDereferenceBlobEx @ 0x1406D9720 (AlpcpDereferenceBlobEx.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtAlpcRevokeSecurityContext(HANDLE PortHandle, ULONG Flags, ALPC_HANDLE ContextHandle)
{
  __int64 v3; // r9
  struct _KTHREAD *CurrentThread; // rax
  int v5; // esi
  int v6; // edi
  struct _DMA_ADAPTER *v7; // rbp
  ULONG_PTR v8; // rax
  ULONG_PTR v9; // rsi
  volatile signed __int64 *v10; // rbp
  int v11; // eax
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = (int)ContextHandle;
  --CurrentThread->KernelApcDisable;
  if ( Flags )
  {
    v6 = -1073741811;
  }
  else
  {
    Object = 0LL;
    v6 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
    if ( v6 >= 0 )
    {
      v7 = (struct _DMA_ADAPTER *)Object;
      v8 = AlpcReferenceBlobByHandle((_QWORD *)(*((_QWORD *)Object + 2) + 40LL), v5, AlpcSecurityType);
      v9 = v8;
      if ( v8 )
      {
        if ( v7 == *(struct _DMA_ADAPTER **)(v8 + 24) )
        {
          v10 = (volatile signed __int64 *)(v8 - 16);
          ExAcquirePushLockExclusiveEx(v8 - 16, 0LL);
          v11 = *(_DWORD *)(v9 + 104);
          if ( (v11 & 2) != 0 )
          {
            v6 = -1073741823;
          }
          else
          {
            *(_DWORD *)(v9 + 104) = v11 | 1;
            v6 = 0;
          }
          if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v10);
          KeAbPostRelease((ULONG_PTR)v10);
          v7 = (struct _DMA_ADAPTER *)Object;
        }
        else
        {
          v6 = -1073741790;
        }
        AlpcpDereferenceBlobEx(v9, 1);
      }
      else
      {
        v6 = -1073741816;
      }
      HalPutDmaAdapter(v7);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), *(__int64 *)&Flags, (__int64)ContextHandle, v3);
  return v6;
}
