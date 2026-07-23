/*
 * XREFs of _LdrpIsExecutableRelocatedImage@4 @ 0x4B2ABBC0
 * Callers:
 *     _LdrpProcessMappedModule@16 @ 0x4B2D05EC (_LdrpProcessMappedModule@16.c)
 * Callees:
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 */

BOOL __thiscall LdrpIsExecutableRelocatedImage(PVOID BaseAddress)
{
  ULONG_PTR *v3; // [esp+0h] [ebp-14h]
  PVOID MemoryInformation[2]; // [esp+4h] [ebp-10h] BYREF
  char v5; // [esp+Ch] [ebp-8h]
  PIMAGE_NT_HEADERS OutHeaders; // [esp+10h] [ebp-4h] BYREF

  return RtlImageNtHeaderEx(3u, BaseAddress, 0LL, &OutHeaders) >= 0
      && (PVOID)HIDWORD(OutHeaders->OptionalHeader.ImageBase) == BaseAddress
      && NtQueryVirtualMemory((HANDLE)0xFFFFFFFF, BaseAddress, MemoryImageInformation, MemoryInformation, 0xCuLL, v3) >= 0
      && MemoryInformation[0] == BaseAddress
      && (v5 & 3) == 0;
}
