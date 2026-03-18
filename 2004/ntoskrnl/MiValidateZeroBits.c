/*
 * XREFs of MiValidateZeroBits @ 0x1405FF10C
 * Callers:
 *     NtMapViewOfSection @ 0x1405FEC70 (NtMapViewOfSection.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x1406B7010 (MiAllocateVirtualMemoryPrepare.c)
 *     NtCreateEnclave @ 0x1408D0720 (NtCreateEnclave.c)
 * Callees:
 *     RtlFindMostSignificantBit @ 0x140343070 (RtlFindMostSignificantBit.c)
 */

__int64 __fastcall MiValidateZeroBits(ULONGLONG *a1)
{
  ULONGLONG v1; // rax
  unsigned __int64 v4; // rax

  v1 = *a1;
  if ( *a1 && (v1 < 0x20 ? (v4 = v1 + 32) : (v4 = 63 - RtlFindMostSignificantBit(*a1)), *a1 = v4, v4 > 0x35) )
    return 3221225485LL;
  else
    return 0LL;
}
