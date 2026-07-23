/*
 * XREFs of _RtlAppendStringToString@8 @ 0x4B34E0D0
 * Callers:
 *     <none>
 * Callees:
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 */

NTSTATUS __cdecl RtlAppendStringToString(PSTRING Destination, PSTRING Source)
{
  int Length; // esi
  int v3; // ebx
  size_t v5; // [esp-4h] [ebp-14h]

  Length = Source->Length;
  if ( (_WORD)Length )
  {
    v3 = Destination->Length;
    if ( Length + v3 > (unsigned int)Destination->MaximumLength )
      return -1073741789;
    LODWORD(v5) = Source->Length;
    memmove(&Destination->Buffer[v3], Source->Buffer, v5);
    Destination->Length += Length;
  }
  return 0;
}
