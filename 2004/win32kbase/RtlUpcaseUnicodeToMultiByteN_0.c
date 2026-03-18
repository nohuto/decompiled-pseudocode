/*
 * XREFs of RtlUpcaseUnicodeToMultiByteN_0 @ 0x1C00CE7A6
 * Callers:
 *     toupper @ 0x1C00CCE14 (toupper.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RtlUpcaseUnicodeToMultiByteN_0(
        PCHAR MultiByteString,
        ULONG MaxBytesInMultiByteString,
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  return RtlUpcaseUnicodeToMultiByteN(
           MultiByteString,
           MaxBytesInMultiByteString,
           BytesInMultiByteString,
           UnicodeString,
           BytesInUnicodeString);
}
