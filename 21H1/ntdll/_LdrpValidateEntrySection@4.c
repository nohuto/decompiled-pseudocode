/*
 * XREFs of _LdrpValidateEntrySection@4 @ 0x4B2D0824
 * Callers:
 *     _LdrpProcessMappedModule@16 @ 0x4B2D05EC (_LdrpProcessMappedModule@16.c)
 * Callees:
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 */

bool __thiscall LdrpValidateEntrySection(unsigned int *this)
{
  unsigned int v2; // ecx
  int v4; // [esp+4h] [ebp-4h] BYREF

  RtlImageNtHeaderEx(3, this[6], 0, 0, &v4);
  v2 = *(_DWORD *)(v4 + 40);
  return !v2 || !this[7] || v2 >= *(_DWORD *)(v4 + 84);
}
