/*
 * XREFs of HalpDisableSecondaryInterrupt @ 0x14051D1A0
 * Callers:
 *     HalDisableInterrupt @ 0x140396C30 (HalDisableInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpReleaseSecondaryIcEntryShared @ 0x1404593D2 (HalpReleaseSecondaryIcEntryShared.c)
 *     HalpCheckInterruptType @ 0x14051CF8C (HalpCheckInterruptType.c)
 *     HalpFindSecondaryIcEntry @ 0x14051D24C (HalpFindSecondaryIcEntry.c)
 */

__int64 __fastcall HalpDisableSecondaryInterrupt(_DWORD *a1)
{
  int v2; // ebx
  unsigned int v3; // esi
  __int64 SecondaryIcEntry; // rax
  __int64 v5; // rdi
  __int64 v6; // rdx
  unsigned int v7; // esi
  int v8; // ecx

  if ( SecondaryIcServicesEnabled )
  {
    if ( HalpCheckInterruptType(a1) )
    {
      v3 = a1[16];
      SecondaryIcEntry = HalpFindSecondaryIcEntry(v3);
      v5 = SecondaryIcEntry;
      if ( SecondaryIcEntry )
      {
        v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(SecondaryIcEntry + 64))(*(_QWORD *)(SecondaryIcEntry + 32), v3);
        if ( v2 >= 0 )
        {
          v7 = v3 - *(_DWORD *)(v5 + 16);
          v6 = 2LL * v7;
          v8 = *(_DWORD *)(v5 + 16LL * v7 + 168);
          *(_BYTE *)(v5 + 8 * v6 + 172) = 0;
          *(_DWORD *)(v5 + 8 * v6 + 168) = v8 | 0x80000000;
        }
        LOBYTE(v6) = 1;
        HalpReleaseSecondaryIcEntryShared(v5, v6);
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
  return (unsigned int)v2;
}
