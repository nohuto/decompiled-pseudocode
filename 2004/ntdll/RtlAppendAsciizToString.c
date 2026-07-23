/*
 * XREFs of RtlAppendAsciizToString @ 0x1800EB380
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1800A3C00 (memmove.c)
 */

NTSTATUS __cdecl RtlAppendAsciizToString(PSTRING Destination, PCSTR Source)
{
  size_t v3; // rbx
  __int64 Length; // r8

  if ( !Source )
    return 0;
  v3 = -1LL;
  do
    ++v3;
  while ( Source[v3] );
  if ( v3 <= 0xFFFF )
  {
    Length = Destination->Length;
    if ( Length + v3 <= Destination->MaximumLength )
    {
      memmove(&Destination->Buffer[Length], Source, v3);
      Destination->Length += v3;
      return 0;
    }
  }
  return -1073741789;
}
