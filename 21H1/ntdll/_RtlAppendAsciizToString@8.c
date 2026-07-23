/*
 * XREFs of _RtlAppendAsciizToString@8 @ 0x4B34E070
 * Callers:
 *     <none>
 * Callees:
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 */

NTSTATUS __cdecl RtlAppendAsciizToString(PSTRING Destination, PCSTR Source)
{
  unsigned int v2; // esi
  int Length; // ebx
  size_t v5; // [esp-4h] [ebp-10h]

  if ( !Source )
    return 0;
  v2 = strlen(Source);
  if ( v2 <= 0xFFFF )
  {
    Length = Destination->Length;
    if ( Length + v2 <= Destination->MaximumLength )
    {
      LODWORD(v5) = v2;
      memmove(&Destination->Buffer[Length], Source, v5);
      Destination->Length += v2;
      return 0;
    }
  }
  return -1073741789;
}
