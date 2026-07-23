/*
 * XREFs of NtAlpcOpenSenderThread @ 0x14060B130
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     RtlCompareMemory @ 0x140408390 (RtlCompareMemory.c)
 *     PsOpenThread @ 0x140691E18 (PsOpenThread.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x1406CF9E4 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpLookupMessage @ 0x1406D5FD0 (AlpcpLookupMessage.c)
 *     AlpcpUnlockMessage @ 0x1406D962C (AlpcpUnlockMessage.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
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
  int v12; // ebx
  __int64 v13; // r8
  POBJECT_ATTRIBUTES v14; // r9
  __int64 v15; // rcx
  struct _DMA_ADAPTER *v16; // rdi
  ULONG_PTR v17; // rbx
  struct _DMA_ADAPTER *v18; // rsi
  PADAPTER_OBJECT DmaAdapter; // [rsp+30h] [rbp-78h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-70h] BYREF
  int v22[2]; // [rsp+40h] [rbp-68h] BYREF
  __int128 Source2; // [rsp+48h] [rbp-60h] BYREF
  __int128 v24; // [rsp+58h] [rbp-50h]
  unsigned __int64 ClientViewSize; // [rsp+68h] [rbp-40h]
  OBJECT_ATTRIBUTES v26; // [rsp+70h] [rbp-38h] BYREF

  Source2 = 0LL;
  v24 = 0LL;
  ClientViewSize = 0LL;
  *(_QWORD *)v22 = 0LL;
  BugCheckParameter2 = 0LL;
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
      AlpcpProbeAndCaptureMessageHeader(PortMessage, &Source2, Flags);
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
    v12 = AlpcpLookupMessage((_DWORD)DmaAdapter, DWORD2(v24), ClientViewSize, (_DWORD)v14, (__int64)&BugCheckParameter2);
    if ( v12 < 0 )
    {
      HalPutDmaAdapter(v16);
    }
    else
    {
      v17 = BugCheckParameter2;
      if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) != 0 )
      {
        AlpcpUnlockMessage(BugCheckParameter2);
        HalPutDmaAdapter(v16);
        v12 = -1073740029;
      }
      else
      {
        v18 = *(struct _DMA_ADAPTER **)(BugCheckParameter2 + 32);
        if ( v18 && RtlCompareMemory(&v18[71].DmaOperations, (char *)&Source2 + 8, 0x10uLL) == 16 )
        {
          ObfReferenceObject(v18);
          AlpcpUnlockMessage(v17);
          v12 = PsOpenThread((int)v22, DesiredAccess, (int)&v26, (int)&Source2 + 8, 0, PreviousMode);
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
