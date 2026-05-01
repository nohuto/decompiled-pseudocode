/*
 * XREFs of sub_180086354 @ 0x180086354
 * Callers:
 *     sub_180085F94 @ 0x180085F94 (sub_180085F94.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

ULONG __fastcall sub_180086354(__int64 a1)
{
  int VirtualMemory; // eax
  ULONG result; // eax
  unsigned int i; // edi

  VirtualMemory = NtQueryVirtualMemory(
                    *(HANDLE *)a1,
                    0LL,
                    MemoryWorkingSetExList,
                    *(PVOID *)(a1 + 32),
                    16LL * *(unsigned int *)(a1 + 40),
                    0LL);
  if ( VirtualMemory >= 0 )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 40); ++i )
      (*(void (__fastcall **)(__int64, _QWORD))(a1 + 16))(*(_QWORD *)(a1 + 32) + 16LL * i, *(_QWORD *)(a1 + 24));
    result = 0;
  }
  else
  {
    result = RtlNtStatusToDosError(VirtualMemory);
  }
  *(_DWORD *)(a1 + 40) = 0;
  return result;
}
