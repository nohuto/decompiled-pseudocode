/*
 * XREFs of ViSuspectDriversLookupEntry @ 0x1409BF574
 * Callers:
 *     VfIsDriverSuspect @ 0x1409BF524 (VfIsDriverSuspect.c)
 *     VfDriverEnableVerifier @ 0x1409C5610 (VfDriverEnableVerifier.c)
 *     VfSuspectDriversRemove @ 0x1409D6F20 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversIsLoaded @ 0x140A912D8 (VfSuspectDriversIsLoaded.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x140681E80 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall ViSuspectDriversLookupEntry(PCUNICODE_STRING String2)
{
  __int64 i; // rbx

  for ( i = VfSuspectDriversList; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == &VfSuspectDriversList )
      return 0LL;
    if ( RtlEqualUnicodeString((PCUNICODE_STRING)(i + 24), String2, 1u) )
      break;
  }
  return i;
}
