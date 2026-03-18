/*
 * XREFs of MiChangePageHeatImmediate @ 0x1405B766C
 * Callers:
 *     MiFreeLargePageMemory @ 0x14028CA70 (MiFreeLargePageMemory.c)
 *     MiZeroPage @ 0x1402C4E50 (MiZeroPage.c)
 *     MiCoalesceFreePages @ 0x1402C7DF0 (MiCoalesceFreePages.c)
 *     MiCoalesceFreeLargePages @ 0x140358400 (MiCoalesceFreeLargePages.c)
 *     MiLargeFreePageToMdl @ 0x1403D5CF4 (MiLargeFreePageToMdl.c)
 *     MiZeroPageMakeHot @ 0x1405B2968 (MiZeroPageMakeHot.c)
 * Callees:
 *     MiColdPageSizeSupported @ 0x14023073C (MiColdPageSizeSupported.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiAddPageToHeatRanges @ 0x1405B7574 (MiAddPageToHeatRanges.c)
 *     MiNotifyPageHeat @ 0x1405B7E7C (MiNotifyPageHeat.c)
 */

__int64 __fastcall MiChangePageHeatImmediate(__int64 a1, unsigned int a2, int a3)
{
  __int64 result; // rax
  bool v7; // zf
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD v11[36]; // [rsp+20h] [rbp-A8h] BYREF

  result = (__int64)memset(&v11[3], 0, 0x80uLL);
  if ( a3 )
  {
    v7 = (HvlEnlightenments & 0x200000) == 0;
  }
  else
  {
    result = MiColdPageSizeSupported(a2);
    v7 = (_DWORD)result == 0;
  }
  if ( !v7 )
  {
    v11[1] = 0;
    v11[0] = a3;
    v11[2] = 1;
    result = MiAddPageToHeatRanges((__int64)v11, a1, a2);
    if ( (_DWORD)result )
      return MiNotifyPageHeat(v11, v8, v9, v10);
  }
  return result;
}
