/*
 * XREFs of _RtlEraseUnicodeString@4 @ 0x4B3462B0
 * Callers:
 *     <none>
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

void __cdecl RtlEraseUnicodeString(PUNICODE_STRING String)
{
  size_t v1; // [esp-4h] [ebp-8h]

  if ( String->Buffer )
  {
    if ( String->MaximumLength )
    {
      LODWORD(v1) = String->MaximumLength;
      memset(String->Buffer, 0, v1);
      String->Length = 0;
    }
  }
}
