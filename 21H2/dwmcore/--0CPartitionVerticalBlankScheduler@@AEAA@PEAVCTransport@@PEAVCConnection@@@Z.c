/*
 * XREFs of ??0CPartitionVerticalBlankScheduler@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z @ 0x180027274
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x18002692C (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ??0CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x180027428 (--0CTelemetryTouchLatencyAnalysis@@QEAA@XZ.c)
 *     ??0CDwmRenderThreadWatchdog@@QEAA@XZ @ 0x1800275D0 (--0CDwmRenderThreadWatchdog@@QEAA@XZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800949F0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

CPartitionVerticalBlankScheduler *__fastcall CPartitionVerticalBlankScheduler::CPartitionVerticalBlankScheduler(
        CPartitionVerticalBlankScheduler *this,
        struct CTransport *a2,
        struct CConnection *a3)
{
  __int64 v6; // rcx
  CPartitionVerticalBlankScheduler *result; // rax

  *(_QWORD *)this = &CPartitionVerticalBlankScheduler::`vftable';
  CDwmRenderThreadWatchdog::CDwmRenderThreadWatchdog((CPartitionVerticalBlankScheduler *)((char *)this + 72));
  `vector constructor iterator'((char *)this + 152, 0x130uLL, 0x10uLL, (void *(*)(void *))CFrameInfo::CFrameInfo);
  *((_QWORD *)this + 672) = 0LL;
  *((_QWORD *)this + 673) = 0LL;
  *((_DWORD *)this + 1348) = 0;
  *((_DWORD *)this + 1349) = 0;
  *((_DWORD *)this + 1350) = 0;
  *((_QWORD *)this + 742) = GetTickCount64() + 3600000;
  *((_DWORD *)this + 1480) = 0;
  *((_QWORD *)this + 741) = (char *)this + 5408;
  *((_DWORD *)this + 1481) = 2048;
  if ( ((char *)this + 5920 >= (char *)this + 5408 ? 0x40 : 0) != 0 )
    memset64(
      (char *)this + 5408,
      ((unsigned __int64)this + 5920) | 1,
      (char *)this + 5920 >= (char *)this + 5408 ? 0x40 : 0);
  CTelemetryTouchLatencyAnalysis::CTelemetryTouchLatencyAnalysis((CPartitionVerticalBlankScheduler *)((char *)this + 5952));
  *((_DWORD *)this + 2802) = 0;
  *((_QWORD *)this + 1400) = &CDebugFrameCounter::`vftable';
  *((_QWORD *)this + 1982) = &CDisplayDebugFrameCounter::`vftable';
  *((_DWORD *)this + 3966) = 0;
  *((_DWORD *)this + 3841) = -1;
  *((_DWORD *)this + 3840) = -1;
  *((_DWORD *)this + 2805) = -1;
  *((_DWORD *)this + 2804) = -1;
  *((_DWORD *)this + 3839) = 1;
  *((_DWORD *)this + 3838) = 1;
  *((_DWORD *)this + 3974) = GetCurrentThreadId();
  v6 = 304LL * *((unsigned int *)this + 1254);
  *((_QWORD *)this + 6) = a2;
  *((_QWORD *)this + 629) = (char *)this + v6 + 152;
  *((_QWORD *)this + 630) = (char *)this + 4712;
  result = this;
  *((_QWORD *)this + 7) = a3;
  *((_DWORD *)this + 1255) = 15;
  *((_DWORD *)this + 1256) = -1;
  *((_DWORD *)this + 1257) = -1;
  *((_BYTE *)this + 5375) = 1;
  return result;
}
