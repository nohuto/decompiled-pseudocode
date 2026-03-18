/*
 * XREFs of HalpInitializeSecondaryInterruptServices @ 0x140A612AC
 * Callers:
 *     HalpPostPnpInitialize @ 0x1407A5818 (HalpPostPnpInitialize.c)
 * Callees:
 *     HalpCheckSecondaryInterruptSupported @ 0x1406E4300 (HalpCheckSecondaryInterruptSupported.c)
 *     HalpRecordSecondaryGsivRange @ 0x1407A5888 (HalpRecordSecondaryGsivRange.c)
 *     HalpQueryMaximumGsiv @ 0x1407A5A34 (HalpQueryMaximumGsiv.c)
 */

__int64 HalpInitializeSecondaryInterruptServices()
{
  int v0; // ebx
  int v1; // ecx
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  qword_140C49A68 = (__int64)&SecondaryIcList;
  SecondaryIcList = (__int64)&SecondaryIcList;
  SecondaryIcListSpinLock = 0LL;
  if ( HalpCheckSecondaryInterruptSupported() )
  {
    LODWORD(SecondarySignalDpc) = 275;
    qword_140C49A88 = (__int64)&SecondarySignalList;
    SecondarySignalList = (__int64)&SecondarySignalList;
    qword_140C49A38 = (__int64)HalpProcessSecondarySignalList;
    qword_140C49A40 = 0LL;
    qword_140C49A58 = 0LL;
    qword_140C49A30 = 0LL;
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
