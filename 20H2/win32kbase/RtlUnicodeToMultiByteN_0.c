/*
 * XREFs of RtlUnicodeToMultiByteN_0 @ 0x1C00CD8FB
 * Callers:
 *     _wctomb_s_l @ 0x1C00CD6D4 (_wctomb_s_l.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RtlUnicodeToMultiByteN_0(
        PCHAR MultiByteString,
        ULONG MaxBytesInMultiByteString,
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  return RtlUnicodeToMultiByteN(
           MultiByteString,
           MaxBytesInMultiByteString,
           BytesInMultiByteString,
           UnicodeString,
           BytesInUnicodeString);
}
