/*
 * XREFs of RtlUnicodeStringValidateWorker @ 0x9998E
 * Callers:
 *     ?RtlUnicodeStringCopyString@@YGJPAU_UNICODE_STRING@@PBG@Z @ 0x998EA (-RtlUnicodeStringCopyString@@YGJPAU_UNICODE_STRING@@PBG@Z.c)
 *     RtlUnicodeStringValidateDestWorker @ 0xD77EC (RtlUnicodeStringValidateDestWorker.c)
 *     ?RtlUnicodeStringCopy@@YGJPAU_UNICODE_STRING@@PBU1@@Z @ 0xD9756 (-RtlUnicodeStringCopy@@YGJPAU_UNICODE_STRING@@PBU1@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringValidateWorker(PCUNICODE_STRING SourceString, const size_t cchMax, ULONG dwFlags)
{
  _WORD *v3; // ecx
  _WORD *v4; // esi
  NTSTATUS result; // eax
  unsigned __int16 v6; // cx
  unsigned __int16 v7; // dx

  v4 = v3;
  result = 0;
  v6 = *v3;
  if ( (v6 & 1) != 0 )
    return -1073741811;
  v7 = v4[1];
  if ( (v7 & 1) != 0 || v6 > v7 || v7 == 0xFFFF || !*((_DWORD *)v4 + 1) && (v6 || v7) )
    return -1073741811;
  return result;
}
