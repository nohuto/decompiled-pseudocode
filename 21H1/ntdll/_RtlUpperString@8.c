/*
 * XREFs of _RtlUpperString@8 @ 0x4B34E1F0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlUpperChar@4 @ 0x4B2E0B70 (_RtlUpperChar@4.c)
 */

void __cdecl RtlUpperString(PSTRING DestinationString, const STRING *SourceString)
{
  char *Buffer; // ebx
  int Length; // esi
  char *v4; // edi

  Buffer = SourceString->Buffer;
  Length = SourceString->Length;
  v4 = DestinationString->Buffer;
  if ( (unsigned __int16)Length > DestinationString->MaximumLength )
    Length = DestinationString->MaximumLength;
  for ( DestinationString->Length = Length; Length; --Length )
    *v4++ = RtlUpperChar(*Buffer++);
}
