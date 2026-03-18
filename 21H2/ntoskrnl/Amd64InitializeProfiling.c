/*
 * XREFs of Amd64InitializeProfiling @ 0x140A63680
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x1403B3BA0 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpMmAllocateMemory @ 0x1403BECF8 (HalpMmAllocateMemory.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     Amd64FreeCounter @ 0x14052BA4C (Amd64FreeCounter.c)
 *     Amd64GetGenericPerfEvent @ 0x14052BC28 (Amd64GetGenericPerfEvent.c)
 */

__int64 Amd64InitializeProfiling()
{
  __int64 v0; // r13
  unsigned int v6; // edx
  int v7; // r8d
  int v8; // ecx
  __int64 v9; // rbx
  __int64 v10; // r9
  unsigned int v11; // ebx
  int v12; // r9d
  __int64 v13; // r10
  __int64 v14; // rcx
  int v15; // eax
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v17; // r8
  int v18; // ebx
  __int64 v19; // r9
  unsigned int MaximumRegisteredProcessorCount; // esi
  unsigned int v31; // ebx
  void *Memory; // rax
  unsigned int v33; // ebx
  void *v34; // rax
  unsigned int v35; // ebx
  unsigned int v36; // ebx
  unsigned int v37; // r9d
  unsigned int v38; // r8d
  unsigned int v39; // ebp
  __int64 v40; // r10
  __int64 v41; // r11
  __int64 v42; // r15
  __int64 v43; // r12
  __int64 v44; // rax
  __int64 *v45; // r11
  unsigned int v46; // r9d
  __int64 v47; // rbx
  char v48; // r10
  __int64 GenericPerfEvent; // rax
  __int64 *v50; // rcx
  __int64 **v51; // rax
  unsigned __int16 *v52; // rbx
  __int64 result; // rax
  unsigned int i; // edi
  unsigned int Number; // [rsp+30h] [rbp-48h]

  Number = KeGetPcr()->Prcb.Number;
  v0 = 18LL;
  if ( !Number )
  {
    _RAX = 2147483649LL;
    __asm { cpuid }
    v6 = 4;
    v7 = _RCX;
    if ( (_RCX & 0x800000) != 0 )
    {
      Amd64PerfFeatures |= 1u;
      v8 = -1073675776;
      Amd64NumberCoreCounters = 6;
      v9 = 0LL;
      v10 = 6LL;
      do
      {
        *(_DWORD *)((char *)&Amd64EventSelectRegisters + v9) = v8;
        *(_DWORD *)((char *)&Amd64PerfCounterRegisters + v9) = v8 + 1;
        v8 += 2;
        v9 += 4LL;
        --v10;
      }
      while ( v10 );
    }
    else
    {
      Amd64PerfCounterRegisters = (__int128)_mm_load_si128((const __m128i *)&_xmm_c0010007c0010006c0010005c0010004);
      Amd64NumberCoreCounters = 4;
      Amd64EventSelectRegisters = (__int128)_mm_load_si128((const __m128i *)&_xmm_c0010003c0010002c0010001c0010000);
    }
    v11 = Amd64NumberCoreCounters;
    Amd64NumberCounters = Amd64NumberCoreCounters;
    if ( (v7 & 0x1000000) != 0 && (v7 & 0x400000) != 0 )
    {
      Amd64PerfFeatures |= 2u;
      v12 = -1073675712;
      Amd64NumberDataFabricCounters = 4;
      v13 = 4LL;
      do
      {
        v14 = v11;
        v15 = v12 + 1;
        ++v11;
        *((_DWORD *)&Amd64EventSelectRegisters + v14) = v12;
        v12 += 2;
        *((_DWORD *)&Amd64PerfCounterRegisters + v14) = v15;
        --v13;
      }
      while ( v13 );
      Amd64NumberCounters += 4;
      qword_140C49E98 = (__int64)&Amd64DataFabricStatusHead;
      Amd64DataFabricStatusHead = (__int64)&Amd64DataFabricStatusHead;
    }
    if ( (v7 & 0x10000000) != 0 && (v7 & 0x400000) != 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      Amd64PerfFeatures |= 4u;
      if ( CurrentPrcb->CpuType != 22 )
        v6 = 6;
      v17 = (unsigned int)(Amd64NumberCoreCounters + Amd64NumberDataFabricCounters);
      Amd64NumberCacheCounters = v6;
      v18 = -1073675728;
      v19 = v6;
      do
      {
        *((_DWORD *)&Amd64EventSelectRegisters + v17) = v18;
        *((_DWORD *)&Amd64PerfCounterRegisters + v17) = v18 + 1;
        v18 += 2;
        v17 = (unsigned int)(v17 + 1);
        --v19;
      }
      while ( v19 );
      Amd64NumberCounters += Amd64NumberCacheCounters;
      qword_140C49F48 = (__int64)&Amd64CacheStatusHead;
      Amd64CacheStatusHead = (__int64)&Amd64CacheStatusHead;
    }
    _RAX = 0x80000000LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX >= 0x80000008 )
    {
      _RAX = 2147483656LL;
      __asm { cpuid }
      if ( (_RBX & 2) != 0 && (KeGetCurrentPrcb()->CpuType != 23 || KeGetCurrentPrcb()->CpuModel >= 0x1Fu) )
        Amd64PerfFeatures |= 8u;
    }
    MaximumRegisteredProcessorCount = HalpQueryMaximumRegisteredProcessorCount();
    v31 = 24 * MaximumRegisteredProcessorCount * Amd64NumberCounters;
    Memory = (void *)HalpMmAllocateMemory(v31);
    Amd64CounterStatus = (__int64)Memory;
    if ( !Memory )
      KeBugCheckEx(0xACu, v31, 0xAB00uLL, (ULONG_PTR)"minkernel\\hals\\lib\\hwperfcnt\\pc\\amd64.c", 0x83FuLL);
    memset(Memory, 0, v31);
    v33 = 8 * MaximumRegisteredProcessorCount * Amd64NumberCounters;
    v34 = (void *)HalpMmAllocateMemory(v33);
    HalpCounterStatus = (__int64)v34;
    if ( !v34 )
      KeBugCheckEx(0xACu, v33, 0xAB00uLL, (ULONG_PTR)"minkernel\\hals\\lib\\hwperfcnt\\pc\\amd64.c", 0x84FuLL);
    memset(v34, 0, v33);
    v35 = 40 * MaximumRegisteredProcessorCount * Amd64NumberCoreCounters;
    Amd64CoreCounterStatus = HalpMmAllocateMemory(v35);
    if ( !Amd64CoreCounterStatus )
      KeBugCheckEx(0xACu, v35, 0xAB00uLL, (ULONG_PTR)"minkernel\\hals\\lib\\hwperfcnt\\pc\\amd64.c", 0x85FuLL);
    v36 = 0;
    v37 = Amd64NumberCounters;
    HalpNumberOfGpCounters = Amd64NumberCoreCounters;
    HalpProfileIntervalLimits = (__int64)Amd64ProfileIntervalLimits;
    qword_140C49F70 = (__int64)&DummyAmd64CounterStatus;
    HalpNumberOfCounters = Amd64NumberCounters;
    for ( HalpNumberOfFixedCounters = 0; v36 < MaximumRegisteredProcessorCount; ++v36 )
    {
      v38 = 0;
      if ( v37 )
      {
        v39 = Amd64NumberCoreCounters;
        v40 = 0LL;
        v41 = 0LL;
        v42 = Amd64CoreCounterStatus + 40LL * v36 * Amd64NumberCoreCounters;
        v43 = Amd64CounterStatus + 24LL * v36 * v37;
        do
        {
          v44 = HalpCounterStatus;
          if ( HalpProfileInterface != &DefaultProfileInterface )
            v44 = HalpCounterStatus + 8LL * v36 * v37;
          if ( v38 >= v39 )
          {
            *(_QWORD *)(v40 + v44) = &DummyCounterStatus;
          }
          else
          {
            *(_QWORD *)(v40 + v44) = v41 + v42;
            *(_QWORD *)(v41 + v42 + 16) = v43 + 24LL * v38;
          }
          ++v38;
          v41 += 40LL;
          v40 += 8LL;
        }
        while ( v38 < v37 );
      }
    }
    v45 = &HalpProfileSourceDescriptorListHead;
    HalpProfileSourceDescriptorListLock = 0LL;
    qword_140C4D0C8 = (__int64)&HalpProfileSourceDescriptorListHead;
    v46 = 0;
    HalpProfileSourceDescriptorListHead = (__int64)&HalpProfileSourceDescriptorListHead;
    do
    {
      v47 = 320LL * v46;
      v48 = byte_140C0033D[v47];
      if ( v48 && *(_DWORD *)((char *)&Amd64ProfileSourceDescriptorTable + v47) == 32 && (Amd64PerfFeatures & 8) != 0 )
      {
        v48 = 0;
        byte_140C0033D[v47] = 0;
      }
      if ( !*(_QWORD *)((char *)&unk_140C00450 + v47) )
      {
        GenericPerfEvent = Amd64GetGenericPerfEvent(*(_DWORD *)((char *)&Amd64ProfileSourceDescriptorTable + v47));
        if ( GenericPerfEvent )
          *(_QWORD *)((char *)&unk_140C00450 + v47) = GenericPerfEvent;
      }
      if ( !v48 )
      {
        v50 = (__int64 *)qword_140C4D0C8;
        v51 = (__int64 **)((char *)&unk_140C00328 + v47);
        if ( *(__int64 **)qword_140C4D0C8 != v45 )
          __fastfail(3u);
        ++HalpProfileSourceDescriptorCount;
        *v51 = v45;
        v51[1] = v50;
        *v50 = (__int64)v51;
        qword_140C4D0C8 = (__int64)&unk_140C00328 + v47;
      }
      ++v46;
    }
    while ( v46 < 0x12 );
  }
  if ( (Amd64PerfFeatures & 8) != 0 )
    __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x40000000);
  v52 = (unsigned __int16 *)&unk_140C00340;
  do
  {
    result = KeAddProcessorAffinityEx(v52, Number);
    v52 += 160;
    --v0;
  }
  while ( v0 );
  for ( i = 0; i < Amd64NumberCoreCounters; ++i )
  {
    __writemsr(*((_DWORD *)&Amd64EventSelectRegisters + i), 0LL);
    result = Amd64FreeCounter(i);
  }
  return result;
}
