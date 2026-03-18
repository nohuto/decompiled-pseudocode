/*
 * XREFs of PpmAllocatePerfCheck @ 0x1407A52F4
 * Callers:
 *     PpmCheckInitProcessors @ 0x1407A4778 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x1407A4940 (PpmRegisterPerfStates.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PpmAllocatePerfCheck(__int64 a1)
{
  unsigned int v1; // ebx
  PVOID PoolWithTag; // rax
  PVOID v4; // rsi

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 16) )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x158uLL, 0x704D5050u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x158uLL);
      *(_QWORD *)(a1 + 16) = v4;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v1;
}
