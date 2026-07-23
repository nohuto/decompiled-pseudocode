/*
 * XREFs of _LdrpValidateEntrySection@4 @ 0x4B2D0824
 * Callers:
 *     _LdrpProcessMappedModule@16 @ 0x4B2D05EC (_LdrpProcessMappedModule@16.c)
 * Callees:
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 */

bool __thiscall LdrpValidateEntrySection(int this)
{
  DWORD AddressOfEntryPoint; // ecx
  PIMAGE_NT_HEADERS OutHeaders; // [esp+4h] [ebp-4h] BYREF

  RtlImageNtHeaderEx(3u, *(PVOID *)(this + 24), 0LL, &OutHeaders);
  AddressOfEntryPoint = OutHeaders->OptionalHeader.AddressOfEntryPoint;
  return !AddressOfEntryPoint
      || !*(_DWORD *)(this + 28)
      || AddressOfEntryPoint >= OutHeaders->OptionalHeader.SizeOfHeaders;
}
