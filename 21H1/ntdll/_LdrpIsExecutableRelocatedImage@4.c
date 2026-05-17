/*
 * XREFs of _LdrpIsExecutableRelocatedImage@4 @ 0x4B2ABBC0
 * Callers:
 *     _LdrpProcessMappedModule@16 @ 0x4B2D05EC (_LdrpProcessMappedModule@16.c)
 * Callees:
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 */

BOOL __thiscall LdrpIsExecutableRelocatedImage(void *this)
{
  void *v3; // [esp+4h] [ebp-10h] BYREF
  char v4; // [esp+Ch] [ebp-8h]
  int v5; // [esp+10h] [ebp-4h] BYREF

  return (int)RtlImageNtHeaderEx(3, this, 0, 0, &v5) >= 0
      && *(void **)(v5 + 52) == this
      && (int)NtQueryVirtualMemory(-1, this, 6, &v3, 12, 0) >= 0
      && v3 == this
      && (v4 & 3) == 0;
}
