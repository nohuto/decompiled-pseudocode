/*
 * XREFs of RtlConvertLuidToUlonglong @ 0x140594C30
 * Callers:
 *     SepLogTokenSidManagement @ 0x14091F6B4 (SepLogTokenSidManagement.c)
 * Callees:
 *     <none>
 */

ULONGLONG __cdecl RtlConvertLuidToUlonglong(LUID Luid)
{
  return **(_QWORD **)&Luid;
}
