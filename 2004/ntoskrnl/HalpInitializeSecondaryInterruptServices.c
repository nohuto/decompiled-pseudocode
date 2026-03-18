/*
 * XREFs of HalpInitializeSecondaryInterruptServices @ 0x140A59F4C
 * Callers:
 *     HalpPostPnpInitialize @ 0x1407964E8 (HalpPostPnpInitialize.c)
 * Callees:
 *     HalpCheckSecondaryInterruptSupported @ 0x1407117B8 (HalpCheckSecondaryInterruptSupported.c)
 *     HalpRecordSecondaryGsivRange @ 0x140796558 (HalpRecordSecondaryGsivRange.c)
 *     HalpQueryMaximumGsiv @ 0x140796704 (HalpQueryMaximumGsiv.c)
 */

__int64 HalpInitializeSecondaryInterruptServices()
{
  int v0; // ebx
  int v1; // ecx
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  qword_140C49A08 = (__int64)&SecondaryIcList;
  SecondaryIcList = (__int64)&SecondaryIcList;
  SecondaryIcListSpinLock = 0LL;
  if ( HalpCheckSecondaryInterruptSupported() )
  {
    LODWORD(SecondarySignalDpc) = 275;
    qword_140C49A28 = (__int64)&SecondarySignalList;
    SecondarySignalList = (__int64)&SecondarySignalList;
    qword_140C499D8 = (__int64)HalpProcessSecondarySignalList;
    qword_140C499E0 = 0LL;
    qword_140C499F8 = 0LL;
    qword_140C499D0 = 0LL;
    SecondarySignalListLock = 0LL;
    SecondarySignalDpcRunning = 0;
    v0 = HalpQueryMaximumGsiv(&v3);
    if ( v0 >= 0 )
    {
      if ( v3 + 513 < v3 )
      {
        return (unsigned int)-1073741823;
      }
      else
      {
        SecondaryGsivRangeSize = 512;
        v1 = 1024;
        SecondaryGsivAssignedCount = 0;
        if ( v3 + 1 > 0x400 )
          v1 = v3 + 1;
        SecondaryGsivRangeStart = v1;
        HalpRecordSecondaryGsivRange();
        SecondaryIcServicesEnabled = 1;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v0;
}
