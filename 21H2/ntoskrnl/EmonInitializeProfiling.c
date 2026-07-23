/*
 * XREFs of EmonInitializeProfiling @ 0x1409A15F0
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x1402CDC80 (KeAddProcessorAffinityEx.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x1403A24C4 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     EmonFreeCounter @ 0x1403BB328 (EmonFreeCounter.c)
 *     HalpMmAllocateMemory @ 0x1403BB360 (HalpMmAllocateMemory.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     EmonInitializePebs @ 0x1409A1928 (EmonInitializePebs.c)
 */

__int64 EmonInitializeProfiling()
{
  unsigned int Number; // ebp
  unsigned int v6; // r9d
  unsigned int v7; // r14d
  int v8; // r15d
  unsigned int v9; // edi
  unsigned __int8 *v10; // rbx
  void *v11; // rdx
  __int64 v12; // rsi
  __int64 result; // rax
  unsigned int v14; // r9d
  unsigned int i; // ebx
  unsigned int v16; // r8d
  unsigned __int64 v17; // rbx
  unsigned int v18; // r11d
  int v19; // r8d
  unsigned int v20; // r10d
  int v21; // edx
  int MaximumRegisteredProcessorCount; // eax
  __int64 Memory; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  char v27; // r10
  char v28; // r9
  __int64 v29; // rdx

  Number = KeGetPcr()->Prcb.Number;
  _RAX = 10LL;
  __asm { cpuid }
  v6 = _RDX;
  v7 = BYTE3(_RAX);
  v8 = _RBX;
  if ( !Number )
  {
    v21 = 0;
    EmonNumberFixedCounters = 0;
    EmonCounterResolution = BYTE2(_RAX);
    EmonPebsAvailable = 0;
    EmonVersion = (unsigned __int8)_RAX;
    EmonNumberArchCounters = BYTE1(_RAX);
    if ( (unsigned __int8)_RAX >= 2u )
    {
      v21 = v6 & 0xF;
      EmonFixedCounterResolution = (unsigned __int8)(v6 >> 5);
      EmonNumberFixedCounters = v21;
    }
    EmonNumberCounters = BYTE1(_RAX) + v21;
    MaximumRegisteredProcessorCount = HalpQueryMaximumRegisteredProcessorCount();
    Memory = HalpMmAllocateMemory((unsigned int)(16 * MaximumRegisteredProcessorCount * EmonNumberCounters));
    EmonProfileSourceDescriptorListLock = 0LL;
    EmonReservedResourcesLock = 0LL;
    _RCX = (unsigned __int64)&EmonReservedResourcesList;
    qword_140C49048 = (__int64)&EmonProfileSourceDescriptorListHead;
    EmonProfileSourceDescriptorListHead = (__int64)&EmonProfileSourceDescriptorListHead;
    qword_140C49068 = (__int64)&EmonReservedResourcesList;
    EmonReservedResourcesList = (__int64)&EmonReservedResourcesList;
    EmonCounterStatus = Memory;
    if ( Memory )
    {
      LODWORD(_RCX) = 0;
      do
      {
        v24 = 224LL * (unsigned int)_RCX;
        if ( !EmonProfileSourceDescriptorTable[v24 + 29] )
        {
          v25 = &EmonProfileSourceDescriptorTable[v24 + 8];
          v26 = (_QWORD *)qword_140C49048;
          if ( *(__int64 **)qword_140C49048 != &EmonProfileSourceDescriptorListHead )
            __fastfail(3u);
          ++EmonProfileSourceDescriptorCount;
          *v25 = &EmonProfileSourceDescriptorListHead;
          v25[1] = v26;
          *v26 = v25;
          qword_140C49048 = (__int64)v25;
        }
        _RCX = (unsigned int)(_RCX + 1);
      }
      while ( (unsigned int)_RCX < 0x12 );
    }
  }
  v9 = 0;
  v10 = (unsigned __int8 *)&unk_140C03534;
  v11 = &unk_140C03480;
  v12 = 32LL;
  do
  {
    result = *v10;
    if ( v10[8] )
    {
      if ( (unsigned int)result < EmonNumberFixedCounters )
        goto LABEL_7;
    }
    else if ( (_BYTE)result != 0xFF && (unsigned int)result < v7 && !_bittest(&v8, result)
           || *((_DWORD *)v10 - 53) == 32 && HalpLbrIsInitialized )
    {
LABEL_7:
      result = KeAddProcessorAffinityEx((_WORD *)&unk_140C03480 + 112 * v9, Number);
      v11 = &unk_140C03480;
    }
    ++v9;
    v10 += 224;
  }
  while ( v9 < 0x12 );
  v14 = EmonNumberArchCounters;
  for ( i = 0; i < v14; ++i )
  {
    __writemsr(i + 390, 0LL);
    result = EmonFreeCounter(i);
  }
  if ( EmonNumberFixedCounters )
  {
    __writemsr(0x38Du, 0LL);
    v16 = 0;
    v17 = __readmsr(0x38Fu);
    do
    {
      v17 &= ~(1LL << v12);
      EmonFreeCounter(v14 + v16);
      v16 = v19 + 1;
      ++v12;
    }
    while ( v16 < v20 );
    result = v17;
    v11 = (void *)HIDWORD(v17);
    _RCX = v18;
    __writemsr(v18, v17);
  }
  if ( !Number )
  {
    EmonInitializePebs(_RCX, v11);
    result = (1LL << v28) - 1;
    v29 = result | (((1LL << v27) - 1) << 32);
    EmonOverflowMask = v29;
    if ( EmonPebsAvailable )
    {
      result = 0x4000000000000000LL;
      EmonOverflowMask = v29 | 0x4000000000000000LL;
    }
  }
  if ( (unsigned int)EmonVersion >= 2 )
  {
    result = EmonOverflowMask;
    __writemsr(0x390u, EmonOverflowMask);
  }
  return result;
}
