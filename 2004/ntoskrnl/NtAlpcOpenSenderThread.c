/*
 * XREFs of NtAlpcOpenSenderThread @ 0x1406FC080
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     RtlCompareMemory @ 0x1403FF870 (RtlCompareMemory.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14062CB24 (AlpcpProbeAndCaptureMessageHeader.c)
 *     PsOpenThread @ 0x1406677B4 (PsOpenThread.c)
 *     AlpcpUnlockMessage @ 0x140682914 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x1406871E0 (AlpcpLookupMessage.c)
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
  ULONG_PTR v19; // [rsp+38h] [rbp-70h] BYREF
  int v20[2]; // [rsp+40h] [rbp-68h] BYREF
  __int128 Source2; // [rsp+48h] [rbp-60h] BYREF
  __int128 v22; // [rsp+58h] [rbp-50h]
  unsigned __int64 ClientViewSize; // [rsp+68h] [rbp-40h]
  OBJECT_ATTRIBUTES v24; // [rsp+70h] [rbp-38h] BYREF

  Source2 = 0LL;
  v22 = 0LL;
  ClientViewSize = 0LL;
  *(_QWORD *)v20 = 0LL;
  v19 = 0LL;
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
    v11 = AlpcpLookupMessage((__int64)DmaAdapter, DWORD2(v22), ClientViewSize, (__int64)v12, &v19);
    if ( v11 < 0 )
    {
      HalPutDmaAdapter(v14);
    }
    else
    {
      v15 = v19;
      if ( (*(_DWORD *)(v19 + 40) & 0x80u) != 0 )
      {
        AlpcpUnlockMessage(v19);
        HalPutDmaAdapter(v14);
        v11 = -1073740029;
      }
      else
      {
        v16 = *(struct _DMA_ADAPTER **)(v19 + 32);
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
