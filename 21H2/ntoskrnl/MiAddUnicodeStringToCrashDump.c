/*
 * XREFs of MiAddUnicodeStringToCrashDump @ 0x14053851C
 * Callers:
 *     MiAddPartitionToCrashDump @ 0x140537D90 (MiAddPartitionToCrashDump.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140317240 (MmIsAddressValidEx.c)
 *     MmAddRangeToCrashDump @ 0x140538818 (MmAddRangeToCrashDump.c)
 */

__int64 __fastcall MiAddUnicodeStringToCrashDump(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // rdx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdi

  v2 = *(unsigned __int16 *)(a2 + 2);
  v4 = *(_QWORD *)(a2 + 8);
  v6 = v4 & 0xFFFFFFFFFFFFF000uLL;
  v7 = (v4 & 0xFFFFFFFFFFFFF000uLL) + (((v4 & 0xFFF) + v2 + 4095) & 0xFFFFFFFFFFFFF000uLL);
  if ( (v4 & 0xFFFFFFFFFFFFF000uLL) >= v7 )
  {
LABEL_5:
    MmAddRangeToCrashDump(a1, v4, v2);
    return 0LL;
  }
  else
  {
    while ( MmIsAddressValidEx(v6) )
    {
      v6 += 4096LL;
      if ( v6 >= v7 )
      {
        v4 = *(_QWORD *)(a2 + 8);
        goto LABEL_5;
      }
    }
    return 3221225473LL;
  }
}
