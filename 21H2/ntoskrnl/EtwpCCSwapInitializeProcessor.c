/*
 * XREFs of EtwpCCSwapInitializeProcessor @ 0x1407990EC
 * Callers:
 *     EtwInitializeProcessor @ 0x14079907C (EtwInitializeProcessor.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpCCSwapInitializeProcessor(__int64 a1)
{
  _QWORD *v1; // rdi
  unsigned __int64 v2; // rbx
  PVOID PoolWithTag; // rax

  v1 = (_QWORD *)(a1 + 296);
  v2 = 0LL;
  while ( 1 )
  {
    if ( CCSwapNumLoggersPerClockType[v2] )
    {
      if ( !*v1 )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x400uLL, 0x77734343u);
        *v1 = PoolWithTag;
        if ( !PoolWithTag )
          break;
      }
    }
    ++v2;
    ++v1;
    if ( v2 >= 5 )
      return 0LL;
  }
  return 3221225495LL;
}
