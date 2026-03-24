/*
 * XREFs of PerfLogImageUnload @ 0x140629C50
 * Callers:
 *     MiUnmapViewOfSection @ 0x14061E0F0 (MiUnmapViewOfSection.c)
 *     MiUnloadSystemImage @ 0x1406D11C8 (MiUnloadSystemImage.c)
 * Callees:
 *     EtwpTraceImageUnload @ 0x14025A6BC (EtwpTraceImageUnload.c)
 *     KeAreAllApcsDisabled @ 0x14025AC80 (KeAreAllApcsDisabled.c)
 *     KeInsertQueueApc @ 0x14025F8C0 (KeInsertQueueApc.c)
 *     KeInitializeApc @ 0x140278E60 (KeInitializeApc.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     RtlImageNtHeader @ 0x14031C950 (RtlImageNtHeader.c)
 *     ObfReferenceObject @ 0x14034B230 (ObfReferenceObject.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     EtwpCoverageSamplerUnloadImage @ 0x1409476F0 (EtwpCoverageSamplerUnloadImage.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

void __fastcall PerfLogImageUnload(
        unsigned __int16 *a1,
        struct _DMA_ADAPTER *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9)
{
  __int64 v13; // rbx
  int v14; // edi
  __int64 v15; // rax
  _QWORD *PoolWithTag; // rsi
  __int64 v17; // rdx
  int v18; // eax
  unsigned __int16 *v19; // rcx
  int v20; // [rsp+50h] [rbp-68h]
  __int64 v21; // [rsp+58h] [rbp-60h]
  __int64 v22; // [rsp+60h] [rbp-58h] BYREF
  _OWORD v23[5]; // [rsp+68h] [rbp-50h] BYREF

  v13 = 0LL;
  v21 = 0LL;
  v23[0] = 0LL;
  v22 = 0LL;
  v14 = 0;
  v20 = 0;
  if ( EtwpHostSiloState != -4548 && (*(_DWORD *)(EtwpHostSiloState + 4548) & 4) != 0 )
    EtwpCoverageSamplerUnloadImage(a3, a4, a5);
  if ( a3 )
  {
    v15 = RtlImageNtHeader(a4);
    if ( v15 )
    {
      a6 = *(_DWORD *)(v15 + 88);
      v14 = *(_DWORD *)(v15 + 8);
      v20 = v14;
      v13 = *(_QWORD *)(v15 + 48);
      v21 = v13;
    }
  }
  if ( a2 )
  {
    if ( a9 || KeAreAllApcsDisabled() )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x41777445u);
      if ( PoolWithTag )
      {
        ObfReferenceObject(a2);
        PoolWithTag[11] = a2;
        PoolWithTag[12] = a3;
        PoolWithTag[13] = a4;
        PoolWithTag[14] = a5;
        *((_DWORD *)PoolWithTag + 30) = a6;
        *((_DWORD *)PoolWithTag + 31) = v14;
        *((_DWORD *)PoolWithTag + 32) = a7;
        *((_DWORD *)PoolWithTag + 33) = a8;
        PoolWithTag[17] = v13;
        KeInitializeApc(
          (__int64)PoolWithTag,
          (__int64)KeGetCurrentThread(),
          0,
          (__int64)xHalTimerWatchdogStop,
          (__int64)EtwpCancelTraceImageUnloadApc,
          (__int64)EtwpTraceImageUnloadApc,
          0,
          (__int64)PoolWithTag);
        if ( KeInsertQueueApc((__int64)PoolWithTag, 0LL, 0LL, 0) )
          return;
        ExFreePoolWithTag(PoolWithTag, 0);
        HalPutDmaAdapter(a2);
        v13 = v21;
        v14 = v20;
      }
      v17 = 512LL;
    }
    else
    {
      v17 = 1024LL;
    }
    if ( FltMgrCallbacks )
    {
      v18 = (*(__int64 (__fastcall **)(struct _DMA_ADAPTER *, __int64, _OWORD *, __int64 *))(FltMgrCallbacks + 24))(
              a2,
              v17,
              v23,
              &v22);
      v19 = (unsigned __int16 *)v23;
      if ( v18 < 0 )
        v19 = a1;
      a1 = v19;
    }
  }
  EtwpTraceImageUnload(a1, a3, a4, a5, a6, v14, a7, a8, v13, a9);
  if ( v22 )
    (*(void (**)(void))(FltMgrCallbacks + 32))();
}
