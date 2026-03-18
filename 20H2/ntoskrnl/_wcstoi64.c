/*
 * XREFs of _wcstoi64 @ 0x1403D3D2C
 * Callers:
 *     PiNormalizeDeviceText @ 0x140766AB0 (PiNormalizeDeviceText.c)
 * Callees:
 *     wcstoxq @ 0x1403D3D5C (wcstoxq.c)
 */

__int64 __cdecl wcstoi64(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxq((unsigned int)&_initiallocalestructinfo, (_DWORD)Str, (_DWORD)EndPtr, Radix, 0, 0LL);
}
