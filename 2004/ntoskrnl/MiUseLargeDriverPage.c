/*
 * XREFs of MiUseLargeDriverPage @ 0x14075E4F8
 * Callers:
 *     MmLoadSystemImageEx @ 0x14074603C (MmLoadSystemImageEx.c)
 *     MiHandleBootImage @ 0x140A47F38 (MiHandleBootImage.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x140681E80 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall MiUseLargeDriverPage(PCUNICODE_STRING String1)
{
  __int64 i; // rbx

  if ( (MiFlags & 0x8000) != 0 || (MiFlags & 0x10000) != 0 )
    return 0LL;
  if ( byte_140C4CAE9 != 1 )
  {
    for ( i = qword_140C4CAF8; (__int64 *)i != &qword_140C4CAF8; i = *(_QWORD *)i )
    {
      if ( RtlEqualUnicodeString(String1, (PCUNICODE_STRING)(i + 16), 1u) )
        return 1LL;
    }
    return 0LL;
  }
  return 1LL;
}
