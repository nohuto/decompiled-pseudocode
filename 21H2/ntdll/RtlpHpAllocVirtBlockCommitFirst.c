/*
 * XREFs of RtlpHpAllocVirtBlockCommitFirst @ 0x18009CDC8
 * Callers:
 *     RtlpAllocateHeap @ 0x18002D160 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlpSecMemFreeVirtualMemory @ 0x180009AF4 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpGetHeapProtection @ 0x18000EE34 (RtlpGetHeapProtection.c)
 *     ZwAllocateVirtualMemory @ 0x18009D900 (ZwAllocateVirtualMemory.c)
 */

char *__fastcall RtlpHpAllocVirtBlockCommitFirst(_DWORD *a1, _QWORD *a2, ULONG_PTR a3, ULONG_PTR *a4)
{
  char *v4; // rbx
  ULONG Protect; // eax
  __int64 v8; // rcx
  ULONG_PTR v9; // rdx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-20h] BYREF
  ULONG_PTR v12; // [rsp+38h] [rbp-18h] BYREF
  char *v13; // [rsp+40h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp+28h] BYREF
  ULONG_PTR v15; // [rsp+80h] [rbp+30h] BYREF

  v15 = a3;
  v4 = 0LL;
  RegionSize = *a2 + a3 + 4096;
  BaseAddress = 0LL;
  Protect = RtlpGetHeapProtection(a1, 1);
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, Protect) >= 0 )
  {
    if ( v15 )
      RtlpSecMemFreeVirtualMemory(v8, &BaseAddress, &v15, 0x4000u);
    v12 = 4096LL;
    v13 = (char *)BaseAddress + RegionSize - 4096;
    RtlpSecMemFreeVirtualMemory((__int64)v13, (PVOID *)&v13, &v12, 0x4000u);
    v9 = RegionSize;
    v4 = (char *)BaseAddress + v15;
    *a2 = RegionSize - v12 - v15;
    *a4 = v9;
  }
  return v4;
}
