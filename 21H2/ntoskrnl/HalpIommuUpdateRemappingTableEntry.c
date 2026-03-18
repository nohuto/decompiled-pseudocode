/*
 * XREFs of HalpIommuUpdateRemappingTableEntry @ 0x140510F68
 * Callers:
 *     HalpInterruptEnableNmi @ 0x1403B043C (HalpInterruptEnableNmi.c)
 *     HalpInterruptRemapFixedLines @ 0x1403B9214 (HalpInterruptRemapFixedLines.c)
 *     HalpInterruptRemap @ 0x1403D57DC (HalpInterruptRemap.c)
 *     HalpInterruptSetRemappedDestination @ 0x140508270 (HalpInterruptSetRemappedDestination.c)
 *     HalpSetIrtEntry @ 0x14051DB28 (HalpSetIrtEntry.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

void __fastcall HalpIommuUpdateRemappingTableEntry(char a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  int v4; // esi
  char v6; // bp
  unsigned int v7; // r14d
  __int64 *v9; // rdi

  v3 = (__int64 *)HalpIommuList;
  v4 = 0;
  v6 = 0;
  v7 = a2;
  while ( v3 != &HalpIommuList )
  {
    v9 = v3;
    v3 = (__int64 *)*v3;
    if ( (v9[59] & 0x40) != 0 )
    {
      if ( !v4 || IommuRemappingPolicy == 2 || *((_DWORD *)v9 + 119) == 6 )
      {
        LOBYTE(a2) = a1;
        v6 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64))v9[21])(v9[2], a2, v7, a3);
      }
      if ( v6 )
        ((void (__fastcall *)(__int64, _QWORD))v9[22])(v9[2], v7);
      ++v4;
    }
  }
}
