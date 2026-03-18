/*
 * XREFs of HalpSetResumeTime @ 0x14039157C
 * Callers:
 *     HalpPostSleepMP @ 0x140A500C0 (HalpPostSleepMP.c)
 * Callees:
 *     ExLocalTimeToSystemTime @ 0x14022D7D0 (ExLocalTimeToSystemTime.c)
 *     HalpSetVirtualRtc @ 0x14022DA40 (HalpSetVirtualRtc.c)
 *     HalpQueryVirtualRtc @ 0x14038B7AC (HalpQueryVirtualRtc.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

void __fastcall HalpSetResumeTime(LARGE_INTEGER *a1, int a2)
{
  unsigned __int64 v2; // r10
  unsigned __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  bool v6; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v7; // [rsp+40h] [rbp+18h] BYREF
  LARGE_INTEGER v8; // [rsp+48h] [rbp+20h] BYREF

  v8.QuadPart = 0LL;
  v7 = 0LL;
  if ( a2 )
  {
    if ( HalpResumeFromHibernate )
    {
      if ( a2 == 1 )
      {
        if ( (HalpResumeFlags & 1) == 0 && HalpResumeTime.QuadPart )
        {
          if ( (HalpResumeFlags & 2) == 0 && !ExpRealTimeIsUniversal )
            ExLocalTimeToSystemTime(&HalpResumeTime, &HalpResumeTime);
          v2 = ((__int64 (__fastcall *)(unsigned __int64 *))off_140C01E40)(&v7) - HalpTimeStampAtResume;
          if ( is_mul_ok(v2, 0x989680uLL) )
            v3 = v2 * (unsigned __int128)0x989680uLL / v7;
          else
            v3 = 10000000 * (v2 / v7) + 10000000 * (v2 % v7) / v7;
          HalpResumeTime.QuadPart += v3;
        }
      }
      else if ( a2 == 2 )
      {
        if ( (HalpResumeFlags & 1) != 0
          || !HalpResumeTime.QuadPart
          || HalpQueryVirtualRtc(&v8, &v6) && HalpResumeTime.QuadPart < v8.QuadPart )
        {
          HalpVrtcTimeStale = 1;
        }
        else
        {
          HalpSetVirtualRtc((__int64 *)&HalpResumeTime, v4, v5);
          HalpResumeTime.QuadPart = 0LL;
        }
      }
    }
  }
  else if ( a1 )
  {
    HalpResumeTime = a1[15];
    HalpTimeStampAtResume = a1[16].QuadPart;
    HalpResumeFlags = a1[17].QuadPart;
  }
}
