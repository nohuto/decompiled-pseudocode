/*
 * XREFs of NtAlpcOpenSenderProcess @ 0x14062C840
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     RtlCompareMemory @ 0x1403FF870 (RtlCompareMemory.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14062CB24 (AlpcpProbeAndCaptureMessageHeader.c)
 *     PsOpenProcess @ 0x14067A820 (PsOpenProcess.c)
 *     AlpcpUnlockMessage @ 0x140682914 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x1406871E0 (AlpcpLookupMessage.c)
 */

__int64 __fastcall NtAlpcOpenSenderProcess(_QWORD *a1, void *a2, __int128 *a3, unsigned int a4, int a5, __int128 *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS v11; // ebx
  __int128 *v12; // r9
  __int64 v13; // rcx
  struct _DMA_ADAPTER *v14; // rdi
  ULONG_PTR v15; // rbx
  __int64 v16; // rsi
  _QWORD *v17; // rsi
  __int64 v19; // rsi
  signed __int64 *v20; // rbx
  struct _DMA_ADAPTER *v21; // rcx
  PVOID Object; // [rsp+30h] [rbp-98h] BYREF
  ULONG_PTR v23; // [rsp+38h] [rbp-90h] BYREF
  __int64 v24; // [rsp+40h] [rbp-88h] BYREF
  __int128 Source2; // [rsp+48h] [rbp-80h] BYREF
  __int128 v26; // [rsp+58h] [rbp-70h]
  __int64 v27; // [rsp+68h] [rbp-60h]
  __int128 v28; // [rsp+70h] [rbp-58h] BYREF
  __int128 v29; // [rsp+80h] [rbp-48h]
  __int128 v30; // [rsp+90h] [rbp-38h]

  Source2 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(a2, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v11 < 0 )
    goto LABEL_15;
  if ( PreviousMode )
  {
    v13 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v13 = (__int64)a1;
    *(_QWORD *)v13 = *(_QWORD *)v13;
    AlpcpProbeAndCaptureMessageHeader(a3, &Source2, a4);
    if ( a6 < v12 )
      v12 = a6;
    v28 = *v12;
    v29 = v12[1];
    v30 = v12[2];
  }
  else
  {
    Source2 = *a3;
    v26 = a3[1];
    v27 = *((_QWORD *)a3 + 4);
    v28 = *a6;
    v29 = a6[1];
    v30 = a6[2];
  }
  v14 = (struct _DMA_ADAPTER *)Object;
  v11 = AlpcpLookupMessage((_DWORD)Object, DWORD2(v26), v27, (_DWORD)v12, (__int64)&v23);
  if ( v11 < 0 )
  {
    HalPutDmaAdapter(v14);
    goto LABEL_15;
  }
  v15 = v23;
  if ( (*(_DWORD *)(v23 + 40) & 0x80u) != 0 )
  {
    AlpcpUnlockMessage(v23);
    HalPutDmaAdapter(v14);
    v11 = -1073740029;
    goto LABEL_15;
  }
  v16 = *(_QWORD *)(v23 + 32);
  if ( v16 )
  {
    if ( RtlCompareMemory((const void *)(v16 + 1144), (char *)&Source2 + 8, 0x10uLL) != 16 )
    {
      AlpcpUnlockMessage(v15);
      HalPutDmaAdapter(v14);
      v11 = -1073741813;
      goto LABEL_15;
    }
    v17 = *(_QWORD **)(v16 + 544);
    ObfReferenceObjectWithTag(v17, 0x63706C41u);
    goto LABEL_13;
  }
  v19 = *(_QWORD *)(v23 + 24);
  if ( !v19 )
  {
    AlpcpUnlockMessage(v23);
    v21 = v14;
    goto LABEL_28;
  }
  v20 = (signed __int64 *)(v19 + 352);
  ExAcquirePushLockSharedEx(v19 + 352, 0LL);
  if ( (*(_DWORD *)(v19 + 416) & 0x40) == 0 )
  {
    v17 = *(_QWORD **)(v19 + 24);
    if ( v17[136] == *((_QWORD *)&Source2 + 1) )
    {
      ObfReferenceObjectWithTag(v17, 0x63706C41u);
      if ( _InterlockedCompareExchange64(v20, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v20);
      KeAbPostRelease((ULONG_PTR)v20);
      v15 = v23;
      v14 = (struct _DMA_ADAPTER *)Object;
LABEL_13:
      AlpcpUnlockMessage(v15);
      v11 = PsOpenProcess((unsigned int)&v24, a5, (unsigned int)&v28, (unsigned int)&Source2 + 8, 0, PreviousMode);
      ObfDereferenceObjectWithTag(v17, 0x63706C41u);
      HalPutDmaAdapter(v14);
      if ( v11 >= 0 )
        *a1 = v24;
      goto LABEL_15;
    }
    if ( _InterlockedCompareExchange64(v20, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v20);
    KeAbPostRelease((ULONG_PTR)v20);
    AlpcpUnlockMessage(v23);
    v21 = (struct _DMA_ADAPTER *)Object;
LABEL_28:
    HalPutDmaAdapter(v21);
    v11 = -1073741790;
    goto LABEL_15;
  }
  if ( _InterlockedCompareExchange64(v20, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v19 + 352));
  KeAbPostRelease(v19 + 352);
  AlpcpUnlockMessage(v23);
  HalPutDmaAdapter((PADAPTER_OBJECT)Object);
  v11 = -1073741769;
LABEL_15:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v11;
}
