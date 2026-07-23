/*
 * XREFs of RtlEraseUnicodeString @ 0x180086280
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1800A4740 (memset.c)
 */

void __cdecl RtlEraseUnicodeString(PUNICODE_STRING String)
{
  wchar_t *Buffer; // rcx

  Buffer = String->Buffer;
  if ( Buffer )
  {
    if ( String->MaximumLength )
    {
      memset(Buffer, 0, String->MaximumLength);
      String->Length = 0;
    }
  }
}
