/*
 * XREFs of RtlUnicodeStringValidateWorker_0 @ 0x157DB1
 * Callers:
 *     ?RtlStringCbCopyUnicodeString@@YGJPAGIPBU_UNICODE_STRING@@@Z @ 0x157CFD (-RtlStringCbCopyUnicodeString@@YGJPAGIPBU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringValidateWorker_0(PCUNICODE_STRING SourceString, const size_t cchMax, ULONG dwFlags)
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
