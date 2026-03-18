/*
 * XREFs of AdtpSubstituteDriveLetter @ 0x1408450D8
 * Callers:
 *     AdtpPackageParameters @ 0x1403CC5E8 (AdtpPackageParameters.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     AdtpLookupDriveLetter @ 0x140845150 (AdtpLookupDriveLetter.c)
 */

void *__fastcall AdtpSubstituteDriveLetter(UNICODE_STRING *a1)
{
  void *result; // rax
  wchar_t *Buffer; // rcx
  unsigned __int16 Length; // bx

  result = (void *)AdtpLookupDriveLetter(a1);
  if ( (_BYTE)result )
  {
    Buffer = a1->Buffer;
    Length = a1->Length;
    *Buffer = 0;
    Buffer[1] = 58;
    result = memmove(Buffer + 2, Buffer, Length);
    a1->Length = Length + 4;
  }
  return result;
}
