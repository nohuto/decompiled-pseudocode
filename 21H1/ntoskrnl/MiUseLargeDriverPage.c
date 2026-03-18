/*
 * XREFs of MiUseLargeDriverPage @ 0x14075C018
 * Callers:
 *     MmLoadSystemImageEx @ 0x1407444BC (MmLoadSystemImageEx.c)
 *     MiHandleBootImage @ 0x140A426D8 (MiHandleBootImage.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x140609D30 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall MiUseLargeDriverPage(PCUNICODE_STRING String1)
{
  __int64 i; // rbx

  if ( (MiFlags & 0x8000) != 0 || (MiFlags & 0x10000) != 0 )
    return 0LL;
  if ( byte_140C4CC29 != 1 )
  {
    for ( i = qword_140C4CC38; (__int64 *)i != &qword_140C4CC38; i = *(_QWORD *)i )
    {
      if ( RtlEqualUnicodeString(String1, (PCUNICODE_STRING)(i + 16), 1u) )
        return 1LL;
    }
    return 0LL;
  }
  return 1LL;
}
