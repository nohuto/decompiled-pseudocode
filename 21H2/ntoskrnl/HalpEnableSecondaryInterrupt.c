/*
 * XREFs of HalpEnableSecondaryInterrupt @ 0x140909678
 * Callers:
 *     HalEnableInterrupt @ 0x1403B02C0 (HalEnableInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpReleaseSecondaryIcEntryShared @ 0x1404593D2 (HalpReleaseSecondaryIcEntryShared.c)
 *     HalpCheckInterruptType @ 0x14051CF8C (HalpCheckInterruptType.c)
 *     HalpFindSecondaryIcEntry @ 0x14051D24C (HalpFindSecondaryIcEntry.c)
 */

__int64 __fastcall HalpEnableSecondaryInterrupt(_DWORD *a1)
{
  int v2; // edi
  unsigned int v3; // ebp
  __int64 SecondaryIcEntry; // rax
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(_QWORD, _QWORD, _QWORD, _QWORD, __int64); // r10
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rdx

  if ( SecondaryIcServicesEnabled )
  {
    if ( HalpCheckInterruptType(a1) )
    {
      v3 = a1[16];
      SecondaryIcEntry = HalpFindSecondaryIcEntry(v3);
      v5 = SecondaryIcEntry;
      if ( SecondaryIcEntry )
      {
        v6 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64))(SecondaryIcEntry + 56);
        v7 = 2 * (v3 - *(_DWORD *)(SecondaryIcEntry + 16) + 10LL);
        v8 = 2LL * (v3 - *(_DWORD *)(SecondaryIcEntry + 16));
        *(_DWORD *)(SecondaryIcEntry + 8 * v8 + 164) = a1[6];
        *(_DWORD *)(SecondaryIcEntry + 8 * v7) = a1[5];
        *(_DWORD *)(SecondaryIcEntry + 8 * v8 + 168) = a1[3];
        *(_BYTE *)(SecondaryIcEntry + 8 * v8 + 172) = 1;
        v2 = v6(*(_QWORD *)(SecondaryIcEntry + 32), v3, (unsigned int)a1[6], (unsigned int)a1[5], SecondaryIcEntry);
        if ( v2 < 0 )
        {
          *(_DWORD *)(v5 + 8 * v8 + 168) |= 0x80000000;
          *(_BYTE *)(v5 + 8 * v8 + 172) = 0;
        }
        LOBYTE(v9) = 1;
        HalpReleaseSecondaryIcEntryShared(v5, v9);
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
