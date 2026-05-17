/*
 * XREFs of __wcstoui64 @ 0x4B2F7C50
 * Callers:
 *     <none>
 * Callees:
 *     _wcstoxq @ 0x4B2F7C71 (_wcstoxq.c)
 */

unsigned __int64 __cdecl _wcstoui64(const wchar_t *String, wchar_t **EndPtr, int Radix)
{
  unsigned __int64 result; // rax

  LODWORD(result) = wcstoxq(&__initiallocalestructinfo, String, EndPtr, Radix, 1, 0);
  return result;
}
