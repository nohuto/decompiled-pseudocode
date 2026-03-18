/*
 * XREFs of ExpHeapDumpNodeLinksValid @ 0x140642758
 * Callers:
 *     ExpHeapDumpEnumLargeAllocs @ 0x140642660 (ExpHeapDumpEnumLargeAllocs.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x14028FBF0 (MmIsAddressValidEx.c)
 */

_BOOL8 __fastcall ExpHeapDumpNodeLinksValid(__int64 *a1)
{
  __int64 v2; // rcx
  _BOOL8 result; // rax

  result = 0;
  if ( MmIsAddressValidEx((__int64)a1)
    && (!*a1 || MmIsAddressValidEx(*a1) && (__int64 *)(*(_QWORD *)(*a1 + 16) & 0xFFFFFFFFFFFFFFFCuLL) == a1) )
  {
    v2 = a1[1];
    if ( !v2 || MmIsAddressValidEx(v2) && (__int64 *)(*(_QWORD *)(a1[1] + 16) & 0xFFFFFFFFFFFFFFFCuLL) == a1 )
      return 1;
  }
  return result;
}
