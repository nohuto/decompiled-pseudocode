/*
 * XREFs of HalpQueryPrimaryInterruptInformation @ 0x140909764
 * Callers:
 *     HalpSecondaryInterruptQueryPrimaryInformation @ 0x140909800 (HalpSecondaryInterruptQueryPrimaryInformation.c)
 * Callees:
 *     HalpIsInterruptTypeSecondary @ 0x1403B4C50 (HalpIsInterruptTypeSecondary.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpReleaseSecondaryIcEntryShared @ 0x1404593D2 (HalpReleaseSecondaryIcEntryShared.c)
 *     HalpFindSecondaryIcEntry @ 0x14051D24C (HalpFindSecondaryIcEntry.c)
 */

__int64 __fastcall HalpQueryPrimaryInterruptInformation(int *a1, __int64 a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // ebx
  __int64 SecondaryIcEntry; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx

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
        LOBYTE(v7) = 1;
        HalpReleaseSecondaryIcEntryShared(v6, v7);
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
