/*
 * XREFs of NtAlpcOpenSenderProcess @ 0x1406CF700
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     RtlCompareMemory @ 0x140408390 (RtlCompareMemory.c)
 *     PsOpenProcess @ 0x14064F550 (PsOpenProcess.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x1406CF9E4 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpLookupMessage @ 0x1406D5FD0 (AlpcpLookupMessage.c)
 *     AlpcpUnlockMessage @ 0x1406D962C (AlpcpUnlockMessage.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtAlpcOpenSenderProcess(
        PHANDLE ProcessHandle,
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
  __int64 v18; // rsi
  _QWORD *v19; // rsi
  __int64 v21; // rsi
  signed __int64 *v22; // rbx
  struct _DMA_ADAPTER *v23; // rcx
  PVOID Object; // [rsp+30h] [rbp-98h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-90h] BYREF
  void *v26; // [rsp+40h] [rbp-88h] BYREF
  __int128 Source2; // [rsp+48h] [rbp-80h] BYREF
  __int128 v28; // [rsp+58h] [rbp-70h]
  unsigned __int64 ClientViewSize; // [rsp+68h] [rbp-60h]
  OBJECT_ATTRIBUTES v30; // [rsp+70h] [rbp-58h] BYREF

  Source2 = 0LL;
  v28 = 0LL;
  ClientViewSize = 0LL;
  v26 = 0LL;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v12 < 0 )
    goto LABEL_15;
  if ( PreviousMode )
  {
    v15 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ProcessHandle < 0x7FFFFFFF0000LL )
      v15 = (__int64)ProcessHandle;
    *(_QWORD *)v15 = *(_QWORD *)v15;
    AlpcpProbeAndCaptureMessageHeader(PortMessage, &Source2, Flags);
    if ( ObjectAttributes < v14 )
      v14 = ObjectAttributes;
    v30 = *v14;
  }
  else
  {
    Source2 = *(_OWORD *)&PortMessage->u1.s1.DataLength;
    v28 = *(__int128 *)((char *)&PortMessage->8 + 8);
    ClientViewSize = PortMessage->ClientViewSize;
    v30 = *ObjectAttributes;
  }
  v16 = (struct _DMA_ADAPTER *)Object;
  v12 = AlpcpLookupMessage((_DWORD)Object, DWORD2(v28), ClientViewSize, (_DWORD)v14, (__int64)&BugCheckParameter2);
  if ( v12 < 0 )
  {
    HalPutDmaAdapter(v16);
    goto LABEL_15;
  }
  v17 = BugCheckParameter2;
  if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) != 0 )
  {
    AlpcpUnlockMessage(BugCheckParameter2);
    HalPutDmaAdapter(v16);
    v12 = -1073740029;
    goto LABEL_15;
  }
  v18 = *(_QWORD *)(BugCheckParameter2 + 32);
  if ( v18 )
  {
    if ( RtlCompareMemory((const void *)(v18 + 1144), (char *)&Source2 + 8, 0x10uLL) != 16 )
    {
      AlpcpUnlockMessage(v17);
      HalPutDmaAdapter(v16);
      v12 = -1073741813;
      goto LABEL_15;
    }
    v19 = *(_QWORD **)(v18 + 544);
    ObfReferenceObjectWithTag(v19, 0x63706C41u);
    goto LABEL_13;
  }
  v21 = *(_QWORD *)(BugCheckParameter2 + 24);
  if ( !v21 )
  {
    AlpcpUnlockMessage(BugCheckParameter2);
    v23 = v16;
    goto LABEL_28;
  }
  v22 = (signed __int64 *)(v21 + 352);
  ExAcquirePushLockSharedEx(v21 + 352, 0LL);
  if ( (*(_DWORD *)(v21 + 416) & 0x40) == 0 )
  {
    v19 = *(_QWORD **)(v21 + 24);
    if ( v19[136] == *((_QWORD *)&Source2 + 1) )
    {
      ObfReferenceObjectWithTag(v19, 0x63706C41u);
      if ( _InterlockedCompareExchange64(v22, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v22);
      KeAbPostRelease((ULONG_PTR)v22);
      v17 = BugCheckParameter2;
      v16 = (struct _DMA_ADAPTER *)Object;
LABEL_13:
      AlpcpUnlockMessage(v17);
      v12 = PsOpenProcess(
              (unsigned __int64)&v26,
              DesiredAccess,
              (__int64)&v30,
              (__int128 *)((char *)&Source2 + 8),
              0,
              PreviousMode);
      ObfDereferenceObjectWithTag(v19, 0x63706C41u);
      HalPutDmaAdapter(v16);
      if ( v12 >= 0 )
        *ProcessHandle = v26;
      goto LABEL_15;
    }
    if ( _InterlockedCompareExchange64(v22, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v22);
    KeAbPostRelease((ULONG_PTR)v22);
    AlpcpUnlockMessage(BugCheckParameter2);
    v23 = (struct _DMA_ADAPTER *)Object;
LABEL_28:
    HalPutDmaAdapter(v23);
    v12 = -1073741790;
    goto LABEL_15;
  }
  if ( _InterlockedCompareExchange64(v22, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v21 + 352));
  KeAbPostRelease(v21 + 352);
  AlpcpUnlockMessage(BugCheckParameter2);
  HalPutDmaAdapter((PADAPTER_OBJECT)Object);
  v12 = -1073741769;
LABEL_15:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v13, (__int64)v14);
  return v12;
}
