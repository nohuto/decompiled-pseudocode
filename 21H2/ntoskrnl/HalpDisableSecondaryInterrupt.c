/*
 * XREFs of HalpDisableSecondaryInterrupt @ 0x1404D0DEC
 * Callers:
 *     HalDisableInterrupt @ 0x140376DD0 (HalDisableInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpCheckInterruptType @ 0x1404D0BBC (HalpCheckInterruptType.c)
 *     HalpFindSecondaryIcEntry @ 0x1404D0E98 (HalpFindSecondaryIcEntry.c)
 *     HalpReleaseSecondaryIcEntryShared @ 0x1404D1704 (HalpReleaseSecondaryIcEntryShared.c)
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
