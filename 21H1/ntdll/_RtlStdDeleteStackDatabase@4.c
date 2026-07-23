/*
 * XREFs of _RtlStdDeleteStackDatabase@4 @ 0x4B368E70
 * Callers:
 *     _RtlpInitializeStackTraceDatabase@12 @ 0x4B369163 (_RtlpInitializeStackTraceDatabase@12.c)
 * Callees:
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 */

NTSTATUS __thiscall RtlStdDeleteStackDatabase(void *this, _DWORD *BaseAddress)
{
  ULONG_PTR RegionSize; // [esp+0h] [ebp-4h] BYREF

  LODWORD(RegionSize) = this;
  LODWORD(RegionSize) = BaseAddress[25] - (_DWORD)BaseAddress;
  return NtFreeVirtualMemory((HANDLE)0xFFFFFFFF, (PVOID *)&BaseAddress, &RegionSize, 0x8000u);
}
