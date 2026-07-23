/*
 * XREFs of RtlConvertLuidToUlonglong @ 0x140590AA0
 * Callers:
 *     SepLogTokenSidManagement @ 0x140918784 (SepLogTokenSidManagement.c)
 * Callees:
 *     <none>
 */

ULONGLONG __cdecl RtlConvertLuidToUlonglong(LUID Luid)
{
  return **(_QWORD **)&Luid;
}
