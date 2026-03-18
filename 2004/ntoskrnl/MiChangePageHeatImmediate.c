/*
 * XREFs of MiChangePageHeatImmediate @ 0x1403F2000
 * Callers:
 *     MiZeroPage @ 0x14023C480 (MiZeroPage.c)
 *     MiCoalesceFreePages @ 0x14023EE10 (MiCoalesceFreePages.c)
 *     MiFreeLargePageMemory @ 0x140316778 (MiFreeLargePageMemory.c)
 *     MiCoalesceFreeLargePages @ 0x140319960 (MiCoalesceFreeLargePages.c)
 *     MiLargeFreePageToMdl @ 0x140353B98 (MiLargeFreePageToMdl.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     MiAddPageToHeatList @ 0x1403F1FD8 (MiAddPageToHeatList.c)
 *     MiColdPageSizeSupported @ 0x1403F20A8 (MiColdPageSizeSupported.c)
 *     memset @ 0x14040A280 (memset.c)
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
