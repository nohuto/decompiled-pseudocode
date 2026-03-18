/*
 * XREFs of ??0CPartitionVerticalBlankScheduler@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z @ 0x18002E4BC
 * Callers:
 *     ?MainCompositionThreadLoop@CConnection@@AEAAJXZ @ 0x1800DD6EC (-MainCompositionThreadLoop@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ??0CDwmRenderThreadWatchdog@@QEAA@XZ @ 0x18002CC5C (--0CDwmRenderThreadWatchdog@@QEAA@XZ.c)
 *     ??0CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAA@XZ @ 0x18002E6F4 (--0CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180079F40 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing@@@details@wil@@.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18008ED70 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Reset@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x1800DDBEC (-Reset@-$LinearFitT@$0BAA@@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

CPartitionVerticalBlankScheduler *__fastcall CPartitionVerticalBlankScheduler::CPartitionVerticalBlankScheduler(
        CPartitionVerticalBlankScheduler *this,
        struct CTransport *a2,
        struct CConnection *a3)
{
  DWORD CurrentThreadId; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  void *v11; // rcx

  *(_QWORD *)this = &CPartitionVerticalBlankScheduler::`vftable';
  CDwmRenderThreadWatchdog::CDwmRenderThreadWatchdog((CPartitionVerticalBlankScheduler *)((char *)this + 72));
  `vector constructor iterator'((char *)this + 144, 0x110uLL, 0x10uLL, (void *(*)(void *))CFrameInfo::CFrameInfo);
  *((_QWORD *)this + 608) = 0LL;
  *((_QWORD *)this + 609) = 0LL;
  *((_DWORD *)this + 1220) = 0;
  *((_DWORD *)this + 1221) = 0;
  *((_DWORD *)this + 1222) = 0;
  *((_QWORD *)this + 678) = GetTickCount64() + 3600000;
  *((_DWORD *)this + 1352) = 0;
  *((_QWORD *)this + 677) = (char *)this + 4896;
  *((_DWORD *)this + 1353) = 2048;
  if ( ((char *)this + 5408 >= (char *)this + 4896 ? 0x40 : 0) != 0 )
    memset64(
      (char *)this + 4896,
      ((unsigned __int64)this + 5408) | 1,
      (char *)this + 5408 >= (char *)this + 4896 ? 0x40 : 0);
  InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::CTelemetryTouchLatencyAnalysis((CPartitionVerticalBlankScheduler *)((char *)this + 5440));
  *((_DWORD *)this + 4159) = -1;
  *((_DWORD *)this + 4158) = -1;
  *((_DWORD *)this + 3123) = -1;
  *((_DWORD *)this + 3122) = -1;
  *((_QWORD *)this + 2078) = g_qpcFrequency.QuadPart / 60;
  *((_QWORD *)this + 2151) = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  LOBYTE(v7) = 1;
  *((_DWORD *)this + 1125) = 15;
  *((_DWORD *)this + 4288) = CurrentThreadId;
  v8 = 272LL * *((unsigned int *)this + 1124);
  *((_DWORD *)this + 1126) = -1;
  *((_DWORD *)this + 1127) = -1;
  *((_QWORD *)this + 564) = (char *)this + v8 + 144;
  *((_BYTE *)this + 4855) = 1;
  *((_QWORD *)this + 565) = (char *)this + 4224;
  *((_QWORD *)this + 6) = a2;
  *((_QWORD *)this + 7) = a3;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing>::GetImpl'::`2'::impl,
    v7);
  v9 = operator new(0x1068uLL);
  v10 = v9;
  if ( v9 )
  {
    v9[11] = 0LL;
    v9[12] = 0LL;
    *v9 = &LinearFitT<256>::`vftable';
    v9[4] = 0x3FF0000000000000LL;
    LinearFitT<256>::Reset(v9);
    *v10 = &CPartitionVerticalBlankScheduler::SchedulerLinearFit::`vftable';
  }
  else
  {
    v10 = 0LL;
  }
  v11 = (void *)*((_QWORD *)this + 2151);
  *((_QWORD *)this + 2151) = v10;
  if ( v11 )
  {
    operator delete(v11, 0x1068uLL);
    v10 = (_QWORD *)*((_QWORD *)this + 2151);
  }
  v10[11] = 1LL;
  *(_QWORD *)(*((_QWORD *)this + 2151) + 96LL) = 5 * g_qpcFrequency.QuadPart;
  return this;
}
