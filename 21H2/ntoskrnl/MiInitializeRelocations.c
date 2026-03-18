/*
 * XREFs of MiInitializeRelocations @ 0x140B09744
 * Callers:
 *     MiInitSystem @ 0x140B07C00 (MiInitSystem.c)
 * Callees:
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     ExGenRandom @ 0x140363220 (ExGenRandom.c)
 */

__int64 MiInitializeRelocations()
{
  PVOID Pool; // rax
  PVOID v1; // rax
  unsigned __int64 v2; // rcx
  PVOID v3; // rax
  unsigned __int64 v4; // r9
  PVOID v5; // rax
  __int64 result; // rax

  Pool = MiAllocatePool(256, 0x10000uLL, 0x69526D4Du);
  if ( !Pool )
    return 0LL;
  qword_140C4F308 = 0x7FFFFLL;
  qword_140C4F310 = (__int64)Pool;
  qword_140C4F318 = ExGenRandom(1) & 0x7FFFE;
  v1 = MiAllocatePool(256, 0x500uLL, 0x69526D4Du);
  if ( !v1 )
    return 0LL;
  qword_140C4F3A0 = (__int64)v1;
  qword_140C4F398 = 10240LL;
  qword_140C4F3A8 = (unsigned int)ExGenRandom(1) % 0x2800uLL;
  v2 = (unsigned __int64)(unsigned __int8)ExGenRandom(1) << 16;
  qword_140C4F320 = v2 + 2013265920;
  qword_140C4F328 = v2 + 2013265920;
  qword_140C4F330 = v2 + 3758096384u;
  qword_140C4F338 = v2 + 3758096384u;
  v3 = MiAllocatePool(256, 0x500uLL, 0x69526D4Du);
  if ( !v3 )
    return 0LL;
  qword_140C4F350[-2] = 10240LL;
  qword_140C4F350[-1] = v3;
  v4 = (unsigned __int64)(unsigned __int8)ExGenRandom(1) << 16;
  qword_140C4F350[0] = v4 + 2013265920;
  qword_140C4F350[1] = v4 + 2013265920;
  qword_140C4F350[2] = v4 + 3758096384u;
  qword_140C4F350[3] = v4 + 3758096384u;
  qword_140C4F380 = (unsigned __int8)ExGenRandom(1);
  v5 = MiAllocatePool(256, 0x500uLL, 0x69526D4Du);
  if ( !v5 )
    return 0LL;
  qword_140C4F390 = (__int64)v5;
  result = 1LL;
  qword_140C4F388 = 10240LL;
  return result;
}
