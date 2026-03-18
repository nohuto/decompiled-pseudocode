/*
 * XREFs of MiChangePageHeatImmediate @ 0x1403F6514
 * Callers:
 *     MiZeroPage @ 0x1402C1B30 (MiZeroPage.c)
 *     MiCoalesceFreePages @ 0x1402C44C0 (MiCoalesceFreePages.c)
 *     MiLargeFreePageToMdl @ 0x1402F16D8 (MiLargeFreePageToMdl.c)
 *     MiFreeLargePageMemory @ 0x1402F19BC (MiFreeLargePageMemory.c)
 *     MiCoalesceFreeLargePages @ 0x14034D440 (MiCoalesceFreeLargePages.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     MiAddPageToHeatList @ 0x1403F64EC (MiAddPageToHeatList.c)
 *     MiColdPageSizeSupported @ 0x1403F65BC (MiColdPageSizeSupported.c)
 *     memset @ 0x140411300 (memset.c)
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
