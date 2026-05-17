/*
 * XREFs of __wcstoi64 @ 0x4B2F7C20
 * Callers:
 *     __wtoi64 @ 0x4B2F8010 (__wtoi64.c)
 * Callees:
 *     _wcstoxq @ 0x4B2F7C71 (_wcstoxq.c)
 */

__int64 __cdecl _wcstoi64(const wchar_t *String, wchar_t **EndPtr, int Radix)
{
  __int64 result; // rax

  LODWORD(result) = wcstoxq(&__initiallocalestructinfo, String, EndPtr, Radix, 0, 0);
  return result;
}
