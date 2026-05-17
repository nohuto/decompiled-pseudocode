/*
 * XREFs of GetShipAssertBuffer @ 0x1800DDDD4
 * Callers:
 *     ShipAssert @ 0x1800DDF50 (ShipAssert.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x18009D940 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009DA00 (ZwFreeVirtualMemory.c)
 *     ZwDelayExecution @ 0x18009DCC0 (ZwDelayExecution.c)
 *     SetAssertBufferPtrinPeb @ 0x1800DDED4 (SetAssertBufferPtrinPeb.c)
 */

__int64 GetShipAssertBuffer()
{
  signed __int64 v0; // rax
  __int64 v1; // rbx
  int i; // edi

  v0 = _InterlockedCompareExchange64(&qword_18016DA48, 255LL, 0LL);
  v1 = v0;
  if ( v0 )
  {
    if ( v0 == 255 )
    {
      for ( i = 0; i < 5; ++i )
      {
        ZwDelayExecution();
        v1 = qword_18016DA48;
        if ( qword_18016DA48 != 255 )
          break;
      }
      if ( i == 5 )
      {
        v1 = 238LL;
        _InterlockedCompareExchange64(&qword_18016DA48, 238LL, 255LL);
      }
    }
  }
  else if ( (int)ZwAllocateVirtualMemory() >= 0 && (int)SetAssertBufferPtrinPeb(0LL) >= 0 )
  {
    _InterlockedExchange64(&qword_18016DA48, 0LL);
    return 0LL;
  }
  return v1;
}
