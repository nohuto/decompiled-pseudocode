/*
 * XREFs of RtlConvertLuidToUlonglong @ 0x140591190
 * Callers:
 *     SepLogTokenSidManagement @ 0x140919A34 (SepLogTokenSidManagement.c)
 * Callees:
 *     <none>
 */

ULONGLONG __cdecl RtlConvertLuidToUlonglong(LUID Luid)
{
  return **(_QWORD **)&Luid;
}
