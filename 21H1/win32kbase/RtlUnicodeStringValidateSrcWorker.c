/*
 * XREFs of RtlUnicodeStringValidateSrcWorker @ 0x1C01232D8
 * Callers:
 *     ?RtlStringCchCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x1C0123248 (-RtlStringCchCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringValidateSrcWorker(
        PCUNICODE_STRING SourceString,
        wchar_t **ppszSrc,
        size_t *pcchSrcLength,
        const size_t cchMax,
        ULONG dwFlags)
{
  unsigned __int64 Length; // r10
  NTSTATUS v6; // r9d
  USHORT MaximumLength; // ax
  wchar_t *Buffer; // rcx

  Length = SourceString->Length;
  v6 = 0;
  *ppszSrc = 0LL;
  *pcchSrcLength = 0LL;
  if ( (Length & 1) != 0 )
    return -1073741811;
  MaximumLength = SourceString->MaximumLength;
  if ( (MaximumLength & 1) != 0 )
    return -1073741811;
  if ( (unsigned __int16)Length > MaximumLength )
    return -1073741811;
  if ( MaximumLength == 0xFFFF )
    return -1073741811;
  Buffer = SourceString->Buffer;
  if ( !Buffer && ((_WORD)Length || MaximumLength) )
    return -1073741811;
  *ppszSrc = Buffer;
  *pcchSrcLength = Length >> 1;
  return v6;
}
