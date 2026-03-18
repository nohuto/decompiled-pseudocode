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
  __int64 v11; // rdx
  int v12; // ebx
  __int64 v13; // r8
  _OWORD *v14; // r9
  __int64 v15; // rcx
  struct _DMA_ADAPTER *v16; // rdi
  ULONG_PTR v17; // rbx
  struct _DMA_ADAPTER *v18; // rsi
  PADAPTER_OBJECT DmaAdapter; // [rsp+30h] [rbp-78h] BYREF
  ULONG_PTR v21; // [rsp+38h] [rbp-70h] BYREF
  int v22[2]; // [rsp+40h] [rbp-68h] BYREF
  __int128 Source2; // [rsp+48h] [rbp-60h] BYREF
  __int128 v24; // [rsp+58h] [rbp-50h]
  __int64 v25; // [rsp+68h] [rbp-40h]
  int v26[4]; // [rsp+70h] [rbp-38h] BYREF
  __int128 v27; // [rsp+80h] [rbp-28h]
  __int128 v28; // [rsp+90h] [rbp-18h]

  Source2 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  *(_QWORD *)v22 = 0LL;
  v21 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  DmaAdapter = 0LL;
  v12 = ObReferenceObjectByHandle(a2, 0x20000u, AlpcPortObjectType, PreviousMode, (PVOID *)&DmaAdapter, 0LL);
  if ( v12 >= 0 )
  {
    if ( PreviousMode )
    {
      v15 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
        v15 = (__int64)a1;
      *(_QWORD *)v15 = *(_QWORD *)v15;
      AlpcpProbeAndCaptureMessageHeader(a3, (__int64)&Source2, a4);
      if ( a6 < v14 )
        v14 = a6;
      *(_OWORD *)v26 = *v14;
      v27 = v14[1];
      v28 = v14[2];
    }
    else
    {
      Source2 = *(_OWORD *)a3;
      v24 = *(_OWORD *)(a3 + 16);
      v25 = *(_QWORD *)(a3 + 32);
      *(_OWORD *)v26 = *a6;
      v27 = a6[1];
      v28 = a6[2];
    }
    v16 = DmaAdapter;
    v12 = AlpcpLookupMessage((__int64)DmaAdapter, DWORD2(v24), v25, (__int64)v14, &v21);
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
                  a5,
                  (__int64)v26,
                  (__int128 *)((char *)&Source2 + 8),
                  0,
                  PreviousMode);
          HalPutDmaAdapter(v18);
          HalPutDmaAdapter(v16);
          if ( v12 >= 0 )
            *a1 = *(_QWORD *)v22;
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
  return (unsigned int)v12;
}
