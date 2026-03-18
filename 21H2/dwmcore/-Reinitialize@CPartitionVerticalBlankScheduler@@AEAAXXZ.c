/*
 * XREFs of ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800DD978
 * Callers:
 *     ?Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x1800DD7C4 (-Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ?Reset@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800DD8E0 (-Reset@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180079F40 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing@@@details@wil@@.c)
 *     ?UpdateCurrentTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18007BD78 (-UpdateCurrentTime@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?Clear@CFrameInfo@@QEAAXXZ @ 0x18007CA98 (-Clear@CFrameInfo@@QEAAXXZ.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::Reinitialize(CPartitionVerticalBlankScheduler *this)
{
  char v1; // dl
  __int64 v3; // rcx
  CFrameInfo *v4; // rbp
  __int64 v5; // rsi
  char *v6; // rdi
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r12
  char v10; // r13
  LARGE_INTEGER v11; // kr00_8
  char LowPart; // cl
  LARGE_INTEGER v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp+8h] BYREF

  v1 = *((_BYTE *)this + 4855);
  *((_QWORD *)this + 1559) = 0LL;
  *((_QWORD *)this + 566) = 0LL;
  *(_WORD *)((char *)this + 4853) = 0;
  *((_BYTE *)this + 4852) = 0;
  *((_BYTE *)this + 4856) = 0;
  if ( v1 )
  {
    *((_QWORD *)this + 2147) = 0LL;
    *((_QWORD *)this + 2149) = ((unsigned __int64)this + 17192) | (((_QWORD)this + 17192) << 32);
    CPartitionVerticalBlankScheduler::UpdateCurrentTime(this);
    v1 = *((_BYTE *)this + 4855);
    *((_QWORD *)this + 2146) = *((_QWORD *)this + 2147);
  }
  v3 = *((_QWORD *)this + 565);
  v4 = (CPartitionVerticalBlankScheduler *)((char *)this + 144);
  v5 = 0LL;
  v6 = (char *)this + 400;
  v7 = 16LL;
  v8 = *(_QWORD *)(v3 + 16);
  if ( !v1 )
    v5 = *(_QWORD *)(*((_QWORD *)this + 564) + 232LL);
  v9 = *(_QWORD *)(v3 + 232);
  v10 = *(_BYTE *)(v3 + 240);
  LOBYTE(PerformanceCount.LowPart) = *(_BYTE *)(v3 + 242);
  do
  {
    CFrameInfo::Clear(v4);
    *(v6 - 32) = 0;
    *((_QWORD *)v6 - 3) = 0LL;
    *(v6 - 16) = 0;
    *(v6 - 14) = 0;
    v11 = g_qpcFrequency;
    v6[8] = 1;
    *((_QWORD *)v6 - 1) = v11.QuadPart / 60;
    v4 = (CFrameInfo *)((char *)v4 + 272);
    *(_QWORD *)v6 = v11.QuadPart / 60;
    v6 += 272;
    --v7;
  }
  while ( v7 );
  LowPart = PerformanceCount.LowPart;
  *(_QWORD *)(*((_QWORD *)this + 565) + 16LL) = v8;
  *(_QWORD *)(*((_QWORD *)this + 565) + 232LL) = v9;
  *(_BYTE *)(*((_QWORD *)this + 565) + 240LL) = v10;
  *(_BYTE *)(*((_QWORD *)this + 565) + 242LL) = LowPart;
  *(_QWORD *)(*((_QWORD *)this + 564) + 232LL) = v5;
  *(_BYTE *)(*((_QWORD *)this + 565) + 155LL) = 1;
  if ( *((_BYTE *)this + 4855) )
    *((_BYTE *)this + 4855) = 0;
  *((_QWORD *)this + 2140) = this;
  *((_QWORD *)this + 1553) = 0LL;
  *(_OWORD *)((char *)this + 12440) = 0LL;
  *((_DWORD *)this + 3108) = 0;
  *(_OWORD *)((char *)this + 12456) = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  v13 = PerformanceCount;
  *((_QWORD *)this + 1552) = 0LL;
  *((LARGE_INTEGER *)this + 1551) = v13;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing>::GetImpl'::`2'::impl,
    1u,
    v14,
    v15);
  LinearFitT<256>::Reset(*((_QWORD *)this + 2151));
}
