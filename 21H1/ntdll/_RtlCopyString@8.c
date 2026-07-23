/*
 * XREFs of _RtlCopyString@8 @ 0x4B2ABAB0
 * Callers:
 *     <none>
 * Callees:
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

void __cdecl RtlCopyString(PSTRING DestinationString, PSTRING SourceString)
{
  int v2; // esi
  unsigned int Length; // ecx
  size_t v4; // [esp-8h] [ebp-8h]

  DestinationString->Length = 0;
  if ( SourceString )
  {
    Length = SourceString->Length;
    HIDWORD(v4) = v2;
    if ( Length > DestinationString->MaximumLength )
      Length = DestinationString->MaximumLength;
    LODWORD(v4) = Length;
    DestinationString->Length = Length;
    memcpy(DestinationString->Buffer, SourceString->Buffer, v4);
  }
}
