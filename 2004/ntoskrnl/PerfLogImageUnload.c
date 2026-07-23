/*
 * XREFs of PerfLogImageUnload @ 0x1406B3AEC
 * Callers:
 *     MiUnmapViewOfSection @ 0x140600DD0 (MiUnmapViewOfSection.c)
 *     MiUnloadSystemImage @ 0x1406A8E58 (MiUnloadSystemImage.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     RtlImageNtHeader @ 0x140224A90 (RtlImageNtHeader.c)
 *     KeAreAllApcsDisabled @ 0x14024CD10 (KeAreAllApcsDisabled.c)
 *     EtwpTraceImageUnload @ 0x14024FD38 (EtwpTraceImageUnload.c)
 *     KeInitializeApc @ 0x1402F94B0 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1402FB5E0 (KeInsertQueueApc.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     EtwpCoverageSamplerUnloadImage @ 0x140944160 (EtwpCoverageSamplerUnloadImage.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

void __fastcall PerfLogImageUnload(
        unsigned __int16 *a1,
        struct _DMA_ADAPTER *a2,
        __int64 a3,
        void *a4,
        __int64 a5,
        int CheckSum,
        int a7,
        int a8,
        unsigned int a9)
{
  __int64 ImageBase; // rbx
  int TimeDateStamp; // edi
  PIMAGE_NT_HEADERS v15; // rax
  _QWORD *PoolWithTag; // rsi
  __int64 v17; // rdx
  int v18; // eax
  unsigned __int16 *v19; // rcx
  int v20; // [rsp+50h] [rbp-68h]
  __int64 v21; // [rsp+58h] [rbp-60h]
  __int64 v22; // [rsp+60h] [rbp-58h] BYREF
  _OWORD v23[5]; // [rsp+68h] [rbp-50h] BYREF

  ImageBase = 0LL;
  v21 = 0LL;
  v23[0] = 0LL;
  v22 = 0LL;
  TimeDateStamp = 0;
  v20 = 0;
  if ( EtwpHostSiloState != -4548 && (*(_DWORD *)(EtwpHostSiloState + 4548) & 4) != 0 )
    EtwpCoverageSamplerUnloadImage(a3, a4, a5);
  if ( a3 )
  {
    v15 = RtlImageNtHeader(a4);
    if ( v15 )
    {
      CheckSum = v15->OptionalHeader.CheckSum;
      TimeDateStamp = v15->FileHeader.TimeDateStamp;
      v20 = TimeDateStamp;
      ImageBase = v15->OptionalHeader.ImageBase;
      v21 = ImageBase;
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
        *((_DWORD *)PoolWithTag + 30) = CheckSum;
        *((_DWORD *)PoolWithTag + 31) = TimeDateStamp;
        *((_DWORD *)PoolWithTag + 32) = a7;
        *((_DWORD *)PoolWithTag + 33) = a8;
        PoolWithTag[17] = ImageBase;
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
        ImageBase = v21;
        TimeDateStamp = v20;
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
  EtwpTraceImageUnload(a1, a3, (__int64)a4, a5, CheckSum, TimeDateStamp, a7, a8, ImageBase, a9);
  if ( v22 )
    (*(void (**)(void))(FltMgrCallbacks + 32))();
}
