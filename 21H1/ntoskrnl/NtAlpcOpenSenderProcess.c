/*
 * XREFs of NtAlpcOpenSenderProcess @ 0x14064A3F0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     RtlCompareMemory @ 0x1403FE5E0 (RtlCompareMemory.c)
 *     PsOpenProcess @ 0x140602740 (PsOpenProcess.c)
 *     AlpcpUnlockMessage @ 0x14060A7C4 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x14060F060 (AlpcpLookupMessage.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14064A6D4 (AlpcpProbeAndCaptureMessageHeader.c)
 */

__int64 __fastcall NtAlpcOpenSenderProcess(
        _QWORD *a1,
        void *a2,
        __int128 *a3,
        unsigned int a4,
        ACCESS_MASK a5,
        __int128 *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v11; // rdx
  int v12; // ebx
  __int64 v13; // r8
  __int128 *v14; // r9
  __int64 v15; // rcx
  struct _DMA_ADAPTER *v16; // rdi
  ULONG_PTR v17; // rbx
  __int64 v18; // rsi
  _QWORD *v19; // rsi
  __int64 v21; // rsi
  signed __int64 *v22; // rbx
  struct _DMA_ADAPTER *v23; // rcx
  PVOID Object; // [rsp+30h] [rbp-98h] BYREF
  ULONG_PTR v25; // [rsp+38h] [rbp-90h] BYREF
  __int64 v26; // [rsp+40h] [rbp-88h] BYREF
  __int128 Source2; // [rsp+48h] [rbp-80h] BYREF
  __int128 v28; // [rsp+58h] [rbp-70h]
  __int64 v29; // [rsp+68h] [rbp-60h]
  __int128 v30; // [rsp+70h] [rbp-58h] BYREF
  __int128 v31; // [rsp+80h] [rbp-48h]
  __int128 v32; // [rsp+90h] [rbp-38h]

  Source2 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(a2, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v12 < 0 )
    goto LABEL_15;
  if ( PreviousMode )
  {
    v15 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v15 = (__int64)a1;
    *(_QWORD *)v15 = *(_QWORD *)v15;
    AlpcpProbeAndCaptureMessageHeader(a3, &Source2, a4);
    if ( a6 < v14 )
      v14 = a6;
    v30 = *v14;
    v31 = v14[1];
    v32 = v14[2];
  }
  else
  {
    Source2 = *a3;
    v28 = a3[1];
    v29 = *((_QWORD *)a3 + 4);
    v30 = *a6;
    v31 = a6[1];
    v32 = a6[2];
  }
  v16 = (struct _DMA_ADAPTER *)Object;
  v12 = AlpcpLookupMessage((__int64)Object, DWORD2(v28), v29, (__int64)v14, &v25);
  if ( v12 < 0 )
  {
    HalPutDmaAdapter(v16);
    goto LABEL_15;
  }
  v17 = v25;
  if ( (*(_DWORD *)(v25 + 40) & 0x80u) != 0 )
  {
    AlpcpUnlockMessage(v25);
    HalPutDmaAdapter(v16);
    v12 = -1073740029;
    goto LABEL_15;
  }
  v18 = *(_QWORD *)(v25 + 32);
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
  v21 = *(_QWORD *)(v25 + 24);
  if ( !v21 )
  {
    AlpcpUnlockMessage(v25);
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
      v17 = v25;
      v16 = (struct _DMA_ADAPTER *)Object;
LABEL_13:
      AlpcpUnlockMessage(v17);
      v12 = PsOpenProcess(
              (unsigned __int64)&v26,
              a5,
              (__int64)&v30,
              (__int128 *)((char *)&Source2 + 8),
              0,
              PreviousMode);
      ObfDereferenceObjectWithTag(v19, 0x63706C41u);
      HalPutDmaAdapter(v16);
      if ( v12 >= 0 )
        *a1 = v26;
      goto LABEL_15;
    }
    if ( _InterlockedCompareExchange64(v22, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v22);
    KeAbPostRelease((ULONG_PTR)v22);
    AlpcpUnlockMessage(v25);
    v23 = (struct _DMA_ADAPTER *)Object;
LABEL_28:
    HalPutDmaAdapter(v23);
    v12 = -1073741790;
    goto LABEL_15;
  }
  if ( _InterlockedCompareExchange64(v22, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v21 + 352));
  KeAbPostRelease(v21 + 352);
  AlpcpUnlockMessage(v25);
  HalPutDmaAdapter((PADAPTER_OBJECT)Object);
  v12 = -1073741769;
LABEL_15:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v13, (__int64)v14);
  return (unsigned int)v12;
}
