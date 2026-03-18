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

__int64 __fastcall NtAlpcOpenSenderThread(
        _QWORD *a1,
        void *a2,
        unsigned __int64 a3,
        int a4,
        unsigned int a5,
        _OWORD *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r14
  int v11; // ebx
  _OWORD *v12; // r9
  __int64 v13; // rcx
  struct _DMA_ADAPTER *v14; // rdi
  ULONG_PTR v15; // rbx
  struct _DMA_ADAPTER *v16; // rsi
  PADAPTER_OBJECT DmaAdapter; // [rsp+30h] [rbp-78h] BYREF
  ULONG_PTR v19; // [rsp+38h] [rbp-70h] BYREF
  int v20[2]; // [rsp+40h] [rbp-68h] BYREF
  __int128 Source2; // [rsp+48h] [rbp-60h] BYREF
  __int128 v22; // [rsp+58h] [rbp-50h]
  __int64 v23; // [rsp+68h] [rbp-40h]
  int v24[4]; // [rsp+70h] [rbp-38h] BYREF
  __int128 v25; // [rsp+80h] [rbp-28h]
  __int128 v26; // [rsp+90h] [rbp-18h]

  Source2 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  *(_QWORD *)v20 = 0LL;
  v19 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  DmaAdapter = 0LL;
  v11 = ObReferenceObjectByHandle(a2, 0x20000u, AlpcPortObjectType, PreviousMode, (PVOID *)&DmaAdapter, 0LL);
  if ( v11 >= 0 )
  {
    if ( PreviousMode )
    {
      v13 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
        v13 = (__int64)a1;
      *(_QWORD *)v13 = *(_QWORD *)v13;
      AlpcpProbeAndCaptureMessageHeader(a3, (__int64)&Source2, a4);
      if ( a6 < v12 )
        v12 = a6;
      *(_OWORD *)v24 = *v12;
      v25 = v12[1];
      v26 = v12[2];
    }
    else
    {
      Source2 = *(_OWORD *)a3;
      v22 = *(_OWORD *)(a3 + 16);
      v23 = *(_QWORD *)(a3 + 32);
      *(_OWORD *)v24 = *a6;
      v25 = a6[1];
      v26 = a6[2];
    }
    v14 = DmaAdapter;
    v11 = AlpcpLookupMessage((__int64)DmaAdapter, DWORD2(v22), v23, (__int64)v12, &v19);
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
                  a5,
                  (__int64)v24,
                  (__int128 *)((char *)&Source2 + 8),
                  0,
                  PreviousMode);
          HalPutDmaAdapter(v16);
          HalPutDmaAdapter(v14);
          if ( v11 >= 0 )
            *a1 = *(_QWORD *)v20;
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
  return (unsigned int)v11;
}
