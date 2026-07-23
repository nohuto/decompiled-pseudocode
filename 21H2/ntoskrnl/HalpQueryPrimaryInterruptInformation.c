/*
 * XREFs of HalpQueryPrimaryInterruptInformation @ 0x140865730
 * Callers:
 *     HalpSecondaryInterruptQueryPrimaryInformation @ 0x1408657D0 (HalpSecondaryInterruptQueryPrimaryInformation.c)
 * Callees:
 *     HalpIsInterruptTypeSecondary @ 0x1403C56C0 (HalpIsInterruptTypeSecondary.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpFindSecondaryIcEntry @ 0x1404D0E98 (HalpFindSecondaryIcEntry.c)
 *     HalpReleaseSecondaryIcEntryShared @ 0x1404D1704 (HalpReleaseSecondaryIcEntryShared.c)
 */

__int64 __fastcall HalpQueryPrimaryInterruptInformation(int *a1, __int64 a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // ebx
  __int64 SecondaryIcEntry; // rax
  __int64 v6; // rdi

  if ( SecondaryIcServicesEnabled )
  {
    v4 = a1[14];
    if ( HalpIsInterruptTypeSecondary(*a1, v4) )
    {
      SecondaryIcEntry = HalpFindSecondaryIcEntry(v4);
      v6 = SecondaryIcEntry;
      if ( SecondaryIcEntry )
      {
        v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(SecondaryIcEntry + 88))(
               *(_QWORD *)(SecondaryIcEntry + 32),
               v4,
               a2);
        if ( v3 == -1073741802 )
          v3 = 0;
        HalpReleaseSecondaryIcEntryShared(v6, 1);
      }
      else
      {
        return (unsigned int)-1073700575;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v3;
}
