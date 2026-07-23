/*
 * XREFs of NtAlpcRevokeSecurityContext @ 0x1408BDEB0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     AlpcpDereferenceBlobEx @ 0x1406103F0 (AlpcpDereferenceBlobEx.c)
 *     AlpcReferenceBlobByHandle @ 0x1406106A0 (AlpcReferenceBlobByHandle.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
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
      v8 = AlpcReferenceBlobByHandle(*((_QWORD *)Object + 2) + 40LL, v5, AlpcSecurityType);
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
