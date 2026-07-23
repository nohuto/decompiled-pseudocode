/*
 * XREFs of HalpInterruptGetIrtInfo @ 0x1407B9994
 * Callers:
 *     HalpQueryAcpiResourceRequirements @ 0x1407B9864 (HalpQueryAcpiResourceRequirements.c)
 *     HaliQuerySystemInformation @ 0x1409909D0 (HaliQuerySystemInformation.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x14037AE50 (HalQueryMaximumProcessorCount.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1403A20E8 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     HalpHvCpuid @ 0x1404C209C (HalpHvCpuid.c)
 */

__int64 __fastcall HalpInterruptGetIrtInfo(int *a1)
{
  int v1; // eax
  int MaximumProcessorCount; // eax
  __int64 v4; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // eax
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF

  v1 = HalpPciMcfgTableSegments;
  if ( !HalpPciMcfgTableSegments )
    v1 = 1;
  *a1 = v1;
  v10 = 0LL;
  MaximumProcessorCount = HalQueryMaximumProcessorCount(1LL);
  a1[2] = 0;
  v4 = (unsigned int)(150 * MaximumProcessorCount);
  a1[1] = v4;
  if ( HalpIsMicrosoftCompatibleHvLoaded(v4) )
  {
    HalpHvCpuid(0x40000000u, &v10);
    if ( (unsigned int)v10 >= 0x40000006 )
    {
      HalpHvCpuid(0x40000006u, &v10);
      if ( (v10 & 0x20) != 0 )
      {
        HalpHvCpuid(0x40000005u, &v10);
        v7 = a1[1] / (unsigned int)HalQueryMaximumProcessorCount(v6) * HalpInterruptProcessorsStarted;
        if ( DWORD2(v10) < (unsigned int)v7 )
        {
          v8 = HalQueryMaximumProcessorCount(v7);
          v7 = (unsigned int)HalpInterruptProcessorsStarted;
          a1[1] = DWORD2(v10) / HalpInterruptProcessorsStarted * v8;
        }
        v9 = HalQueryMaximumProcessorCount(v7);
        a1[2] = DWORD2(v10) - a1[1] / v9 * HalpInterruptProcessorsStarted;
      }
    }
  }
  return 0LL;
}
