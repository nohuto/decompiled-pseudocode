/*
 * XREFs of NtAlpcOpenSenderThread @ 0x1406CE920
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     RtlCompareMemory @ 0x140405B40 (RtlCompareMemory.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x1405E7254 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpLookupMessage @ 0x1405EDE10 (AlpcpLookupMessage.c)
 *     AlpcpUnlockMessage @ 0x1405F150C (AlpcpUnlockMessage.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     PsOpenThread @ 0x14063B5B0 (PsOpenThread.c)
 */

NTSTATUS __cdecl NtAlpcOpenSenderThread(
        PHANDLE ThreadHandle,
        HANDLE PortHandle,
        PPORT_MESSAGE PortMessage,
        ULONG Flags,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS v11; // ebx
  POBJECT_ATTRIBUTES v12; // r9
  __int64 v13; // rcx
  struct _DMA_ADAPTER *v14; // rdi
  ULONG_PTR v15; // rbx
  struct _DMA_ADAPTER *v16; // rsi
  PADAPTER_OBJECT DmaAdapter; // [rsp+30h] [rbp-78h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-70h] BYREF
  int v20[2]; // [rsp+40h] [rbp-68h] BYREF
  __int128 Source2; // [rsp+48h] [rbp-60h] BYREF
  __int128 v22; // [rsp+58h] [rbp-50h]
  unsigned __int64 ClientViewSize; // [rsp+68h] [rbp-40h]
  OBJECT_ATTRIBUTES v24; // [rsp+70h] [rbp-38h] BYREF

  Source2 = 0LL;
  v22 = 0LL;
  ClientViewSize = 0LL;
  *(_QWORD *)v20 = 0LL;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  DmaAdapter = 0LL;
  v11 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, (PVOID *)&DmaAdapter, 0LL);
  if ( v11 >= 0 )
  {
    if ( PreviousMode )
    {
      v13 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ThreadHandle < 0x7FFFFFFF0000LL )
        v13 = (__int64)ThreadHandle;
      *(_QWORD *)v13 = *(_QWORD *)v13;
      AlpcpProbeAndCaptureMessageHeader((unsigned __int64)PortMessage, (__int64)&Source2, Flags);
      if ( ObjectAttributes < v12 )
        v12 = ObjectAttributes;
      v24 = *v12;
    }
    else
    {
      Source2 = *(_OWORD *)&PortMessage->u1.s1.DataLength;
      v22 = *(__int128 *)((char *)&PortMessage->8 + 8);
      ClientViewSize = PortMessage->ClientViewSize;
      v24 = *ObjectAttributes;
    }
    v14 = DmaAdapter;
    v11 = AlpcpLookupMessage((__int64)DmaAdapter, DWORD2(v22), ClientViewSize, (__int64)v12, &BugCheckParameter2);
    if ( v11 < 0 )
    {
      HalPutDmaAdapter(v14);
    }
    else
    {
      v15 = BugCheckParameter2;
      if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) != 0 )
      {
        AlpcpUnlockMessage(BugCheckParameter2);
        HalPutDmaAdapter(v14);
        v11 = -1073740029;
      }
      else
      {
        v16 = *(struct _DMA_ADAPTER **)(BugCheckParameter2 + 32);
        if ( v16 && RtlCompareMemory(&v16[71].DmaOperations, (char *)&Source2 + 8, 0x10uLL) == 16 )
        {
          ObfReferenceObject(v16);
          AlpcpUnlockMessage(v15);
          v11 = PsOpenThread(
                  (unsigned __int64)v20,
                  DesiredAccess,
                  (__int64)&v24,
                  (__int128 *)((char *)&Source2 + 8),
                  0,
                  PreviousMode);
          HalPutDmaAdapter(v16);
          HalPutDmaAdapter(v14);
          if ( v11 >= 0 )
            *ThreadHandle = *(HANDLE *)v20;
        }
        else
        {
          AlpcpUnlockMessage(v15);
          HalPutDmaAdapter(v14);
          v11 = -1073741790;
        }
      }
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v11;
}
