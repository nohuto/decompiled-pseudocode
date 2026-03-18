/*
 * XREFs of RtlCopyString @ 0x1405800C0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140409FC0 (memmove.c)
 */

void __stdcall RtlCopyString(PSTRING DestinationString, const STRING *SourceString)
{
  unsigned __int64 MaximumLength; // r8

  DestinationString->Length = 0;
  if ( SourceString )
  {
    MaximumLength = DestinationString->MaximumLength;
    if ( SourceString->Length <= MaximumLength )
      MaximumLength = SourceString->Length;
    DestinationString->Length = MaximumLength;
    memmove(DestinationString->Buffer, SourceString->Buffer, MaximumLength);
  }
}
