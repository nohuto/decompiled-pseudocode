/*
 * XREFs of RtlUnicodeStringValidateSrcWorker @ 0x1C00271AC
 * Callers:
 *     RtlUnicodeStringCopy @ 0x1C00270F0 (RtlUnicodeStringCopy.c)
 *     RtlStringCbCopyUnicodeString @ 0x1C0060D0C (RtlStringCbCopyUnicodeString.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker @ 0x1C0027228 (RtlUnicodeStringValidateWorker.c)
 */

int __fastcall RtlUnicodeStringValidateSrcWorker(
        const _UNICODE_STRING *SourceString,
        wchar_t **ppszSrc,
        unsigned __int64 *pcchSrcLength,
        const unsigned __int64 a4)
{
  int result; // eax
  unsigned __int16 *v5; // rcx
  unsigned __int64 *v6; // r10
  _QWORD *v7; // r11
  __int64 v8; // rdx

  *ppszSrc = 0LL;
  *pcchSrcLength = 0LL;
  result = RtlUnicodeStringValidateWorker(SourceString, (const unsigned __int64)ppszSrc, (unsigned int)pcchSrcLength);
  if ( result >= 0 )
  {
    if ( v5 )
    {
      v8 = *((_QWORD *)v5 + 1);
      *v6 = (unsigned __int64)*v5 >> 1;
      *v7 = v8;
    }
  }
  return result;
}
