/*
 * XREFs of _wcstoi64 @ 0x1403D109C
 * Callers:
 *     PiNormalizeDeviceText @ 0x140757E70 (PiNormalizeDeviceText.c)
 * Callees:
 *     wcstoxq @ 0x1403D10CC (wcstoxq.c)
 */

__int64 __cdecl wcstoi64(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxq((unsigned int)&_initiallocalestructinfo, (_DWORD)Str, (_DWORD)EndPtr, Radix, 0, 0LL);
}
