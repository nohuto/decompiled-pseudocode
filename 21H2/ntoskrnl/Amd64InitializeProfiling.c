/*
 * XREFs of Amd64InitializeProfiling @ 0x1409AA650
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x1402CDC80 (KeAddProcessorAffinityEx.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x1403A24C4 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpMmAllocateMemory @ 0x1403BB360 (HalpMmAllocateMemory.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     Amd64FreeCounter @ 0x1404DDC9C (Amd64FreeCounter.c)
 */

__int64 Amd64InitializeProfiling()
{
  unsigned int Number; // ebp
  signed int v1; // edi
  __int64 v2; // rsi
  unsigned int v3; // ebx
  void *Memory; // rax
  unsigned int i; // ecx
  __int64 v6; // rdx
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  _WORD *v9; // rbx
  __int64 result; // rax

  Number = KeGetPcr()->Prcb.Number;
  v1 = 0;
  v2 = 176LL;
  if ( !Number )
  {
    v3 = (unsigned int)HalpQueryMaximumRegisteredProcessorCount() << 6;
    Memory = (void *)HalpMmAllocateMemory(v3);
    Amd64CounterStatus = (__int64)Memory;
    if ( !Memory )
      KeBugCheckEx(0xACu, v3, 0xAB00uLL, (ULONG_PTR)"minkernel\\hals\\lib\\hwperfcnt\\pc\\amd64.c", 0x267uLL);
    memset(Memory, 0, v3);
    Amd64ProfileSourceDescriptorListLock = 0LL;
    qword_140C48BF8 = (__int64)&Amd64ProfileSourceDescriptorListHead;
    Amd64ProfileSourceDescriptorListHead = (__int64)&Amd64ProfileSourceDescriptorListHead;
    for ( i = 0; i < 0xB0; ++i )
    {
      v6 = 216LL * i;
      if ( !Amd64ProfileSourceDescriptorTable[v6 + 29] )
      {
        v7 = &Amd64ProfileSourceDescriptorTable[v6 + 8];
        v8 = (_QWORD *)qword_140C48BF8;
        if ( *(__int64 **)qword_140C48BF8 != &Amd64ProfileSourceDescriptorListHead )
          __fastfail(3u);
        ++Amd64ProfileSourceDescriptorCount;
        *v7 = &Amd64ProfileSourceDescriptorListHead;
        v7[1] = v8;
        *v8 = v7;
        qword_140C48BF8 = (__int64)v7;
      }
    }
  }
  v9 = &unk_140C05810;
  do
  {
    KeAddProcessorAffinityEx(v9, Number);
    v9 += 108;
    --v2;
  }
  while ( v2 );
  do
  {
    __writemsr(v1 - 1073676288, 0LL);
    result = Amd64FreeCounter(v1++);
  }
  while ( v1 < 4 );
  return result;
}
