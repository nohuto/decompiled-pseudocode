/*
 * XREFs of ?RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180109048
 * Callers:
 *     ?HandleAppVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1801078CC (-HandleAppVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006D6F0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DelayWorkUntil@CWorkFifo@@QEAAJ_J@Z @ 0x180106E38 (-DelayWorkUntil@CWorkFifo@@QEAAJ_J@Z.c)
 *     ?GetFirstStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z @ 0x180107310 (-GetFirstStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z.c)
 *     ?GetNextStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z @ 0x1801074A4 (-GetNextStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z.c)
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1801091C8 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z @ 0x18010C520 (-SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z.c)
 */

void __fastcall Sarm::CSpatialAudioResourceManager::RevokeApplicationResources(PTP_TIMER *this, int a2)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  struct Sarm::CStreamResource *i; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 *v9; // rcx
  double v10; // xmm0_8
  char v11; // bl
  __int64 v12; // rdi
  struct Sarm::CStreamResource *FirstStream; // rax
  int v14; // eax
  __int128 v15; // [rsp+20h] [rbp-50h]
  __int64 (__fastcall **v16)(); // [rsp+30h] [rbp-40h] BYREF
  __int128 v17; // [rsp+38h] [rbp-38h]
  __int64 (__fastcall ***v18)(); // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  LARGE_INTEGER PerformanceCount; // [rsp+A0h] [rbp+30h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  for ( i = Sarm::CSpatialAudioResourceManager::GetFirstStream((Sarm::CSpatialAudioResourceManager *)this, a2);
        i;
        i = Sarm::CSpatialAudioResourceManager::GetNextStream((Sarm::CSpatialAudioResourceManager *)this, a2) )
  {
    v7 = v2;
    v8 = v3;
    v9 = *(__int64 **)(*((_QWORD *)i + 1) + 16LL);
    v2 = *v9;
    v3 = v9[1];
    if ( v7 > *v9 )
      v2 = v7;
    if ( v8 > v3 )
      v3 = v8;
  }
  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
    v10 = (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1))
        + (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1));
  else
    v10 = (double)(int)g_u64QPCFrequency;
  v11 = 0;
  v12 = v2 - (unsigned int)(int)((double)(int)PerformanceCount.LowPart * -10000000.0 / v10);
  FirstStream = Sarm::CSpatialAudioResourceManager::GetFirstStream((Sarm::CSpatialAudioResourceManager *)this, a2);
  if ( FirstStream )
  {
    do
    {
      if ( *((_DWORD *)FirstStream + 20) )
      {
        v14 = Sarm::CStreamResource::SetDynamicObjects(FirstStream, 0, v12);
        if ( v14 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            880LL,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
            (const char *)(unsigned int)v14);
        v11 = 1;
      }
      FirstStream = Sarm::CSpatialAudioResourceManager::GetNextStream((Sarm::CSpatialAudioResourceManager *)this, a2);
    }
    while ( FirstStream );
    if ( v11 )
    {
      CWorkFifo::DelayWorkUntil(this + 43, v12 + v3);
      *(_QWORD *)&v15 = this;
      v16 = off_180156810;
      DWORD2(v15) = a2;
      v18 = &v16;
      v17 = v15;
      CWorkFifo::ScheduleWorkItem((CWorkFifo *)(this + 43));
    }
  }
}
