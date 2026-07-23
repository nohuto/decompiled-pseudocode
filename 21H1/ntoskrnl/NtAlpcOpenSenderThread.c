/*
 * XREFs of NtAlpcOpenSenderThread @ 0x1406D8620
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     RtlCompareMemory @ 0x1403FE5E0 (RtlCompareMemory.c)
 *     PsOpenThread @ 0x1405E14B4 (PsOpenThread.c)
 *     AlpcpUnlockMessage @ 0x14060A7C4 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x14060F060 (AlpcpLookupMessage.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14064A6D4 (AlpcpProbeAndCaptureMessageHeader.c)
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
  __int64 v11; // rdx
  NTSTATUS v12; // ebx
  __int64 v13; // r8
  POBJECT_ATTRIBUTES v14; // r9
  __int64 v15; // rcx
  struct _DMA_ADAPTER *v16; // rdi
  ULONG_PTR v17; // rbx
  struct _DMA_ADAPTER *v18; // rsi
  PADAPTER_OBJECT DmaAdapter; // [rsp+30h] [rbp-78h] BYREF
  ULONG_PTR v21; // [rsp+38h] [rbp-70h] BYREF
  int v22[2]; // [rsp+40h] [rbp-68h] BYREF
  __int128 Source2; // [rsp+48h] [rbp-60h] BYREF
  __int128 v24; // [rsp+58h] [rbp-50h]
  unsigned __int64 ClientViewSize; // [rsp+68h] [rbp-40h]
  OBJECT_ATTRIBUTES v26; // [rsp+70h] [rbp-38h] BYREF

  Source2 = 0LL;
  v24 = 0LL;
  ClientViewSize = 0LL;
  *(_QWORD *)v22 = 0LL;
  v21 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  DmaAdapter = 0LL;
  v12 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, (PVOID *)&DmaAdapter, 0LL);
  if ( v12 >= 0 )
  {
    if ( PreviousMode )
    {
      v15 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ThreadHandle < 0x7FFFFFFF0000LL )
        v15 = (__int64)ThreadHandle;
      *(_QWORD *)v15 = *(_QWORD *)v15;
      AlpcpProbeAndCaptureMessageHeader((unsigned __int64)PortMessage, (__int64)&Source2, Flags);
      if ( ObjectAttributes < v14 )
        v14 = ObjectAttributes;
      v26 = *v14;
    }
    else
    {
      Source2 = *(_OWORD *)&PortMessage->u1.s1.DataLength;
      v24 = *(__int128 *)((char *)&PortMessage->8 + 8);
      ClientViewSize = PortMessage->ClientViewSize;
      v26 = *ObjectAttributes;
    }
    v16 = DmaAdapter;
    v12 = AlpcpLookupMessage((__int64)DmaAdapter, DWORD2(v24), ClientViewSize, (__int64)v14, &v21);
    if ( v12 < 0 )
    {
      HalPutDmaAdapter(v16);
    }
    else
    {
      v17 = v21;
      if ( (*(_DWORD *)(v21 + 40) & 0x80u) != 0 )
      {
        AlpcpUnlockMessage(v21);
        HalPutDmaAdapter(v16);
        v12 = -1073740029;
      }
      else
      {
        v18 = *(struct _DMA_ADAPTER **)(v21 + 32);
        if ( v18 && RtlCompareMemory(&v18[71].DmaOperations, (char *)&Source2 + 8, 0x10uLL) == 16 )
        {
          ObfReferenceObject(v18);
          AlpcpUnlockMessage(v17);
          v12 = PsOpenThread(
                  (unsigned __int64)v22,
                  DesiredAccess,
                  (__int64)&v26,
                  (__int128 *)((char *)&Source2 + 8),
                  0,
                  PreviousMode);
          HalPutDmaAdapter(v18);
          HalPutDmaAdapter(v16);
          if ( v12 >= 0 )
            *ThreadHandle = *(HANDLE *)v22;
        }
        else
        {
          AlpcpUnlockMessage(v17);
          HalPutDmaAdapter(v16);
          v12 = -1073741790;
        }
      }
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v13, (__int64)v14);
  return v12;
}
