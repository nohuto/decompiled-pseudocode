/*
 * XREFs of EtwpCCSwapInitializeProcessor @ 0x14082A090
 * Callers:
 *     EtwInitializeProcessor @ 0x140829F84 (EtwInitializeProcessor.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpCCSwapInitializeProcessor(__int64 a1)
{
  __int64 *v1; // rdi
  unsigned __int64 v2; // rbx
  __int64 Pool2; // rax

  v1 = (__int64 *)(a1 + 392);
  v2 = 0LL;
  while ( 1 )
  {
    if ( CCSwapNumLoggersPerClockType[v2] )
    {
      if ( !*v1 )
      {
        Pool2 = ExAllocatePool2(64LL, 1024LL, 2004042563LL);
        *v1 = Pool2;
        if ( !Pool2 )
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
