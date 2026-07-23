/*
 * XREFs of _RtlpTraceDatabaseFree@8 @ 0x4B36A49D
 * Callers:
 *     _RtlTraceDatabaseDestroy@4 @ 0x4B36A2A0 (_RtlTraceDatabaseDestroy@4.c)
 * Callees:
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 */

bool __thiscall RtlpTraceDatabaseFree(void *this)
{
  PVOID BaseAddress; // [esp+0h] [ebp-8h] BYREF
  ULONG_PTR RegionSize; // [esp+4h] [ebp-4h] BYREF

  LODWORD(RegionSize) = 0;
  BaseAddress = this;
  return NtFreeVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 0x8000u) >= 0;
}
