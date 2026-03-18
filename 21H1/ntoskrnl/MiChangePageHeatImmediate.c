/*
 * XREFs of MiChangePageHeatImmediate @ 0x1403F0CA0
 * Callers:
 *     MiZeroPage @ 0x1402954B0 (MiZeroPage.c)
 *     MiCoalesceFreePages @ 0x140297E40 (MiCoalesceFreePages.c)
 *     MiLargeFreePageToMdl @ 0x140316020 (MiLargeFreePageToMdl.c)
 *     MiFreeLargePageMemory @ 0x140345AB8 (MiFreeLargePageMemory.c)
 *     MiCoalesceFreeLargePages @ 0x140348CA0 (MiCoalesceFreeLargePages.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MiAddPageToHeatList @ 0x1403F0C78 (MiAddPageToHeatList.c)
 *     MiColdPageSizeSupported @ 0x1403F0D48 (MiColdPageSizeSupported.c)
 *     memset @ 0x140408F80 (memset.c)
 */

void *__fastcall MiChangePageHeatImmediate(__int64 a1, unsigned int a2, int a3)
{
  void *result; // rax
  bool v6; // zf
  _DWORD v7[36]; // [rsp+20h] [rbp-A8h] BYREF

  result = memset(&v7[3], 0, 0x84uLL);
  if ( a3 )
  {
    v6 = (HvlEnlightenments & 0x200000) == 0;
  }
  else
  {
    result = (void *)MiColdPageSizeSupported(a2);
    v6 = (_DWORD)result == 0;
  }
  if ( !v6 )
  {
    v7[1] = 0;
    v7[0] = a3;
    v7[2] = 1;
    return (void *)MiAddPageToHeatList((__int64)v7);
  }
  return result;
}
