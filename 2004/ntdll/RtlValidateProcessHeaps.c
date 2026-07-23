/*
 * XREFs of RtlValidateProcessHeaps @ 0x1800F2FB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSecMemFreeVirtualMemory @ 0x180009AF4 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlValidateHeap @ 0x18005E080 (RtlValidateHeap.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x18009D110 (ZwAllocateVirtualMemory.c)
 *     _alloca_probe @ 0x1800A2060 (_alloca_probe.c)
 *     RtlGetProcessHeaps @ 0x1800F21F0 (RtlGetProcessHeaps.c)
 */

BOOLEAN RtlValidateProcessHeaps(void)
{
  BOOLEAN v0; // si
  ULONG v1; // eax
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rbx
  BOOLEAN v6; // al
  PVOID BaseAddress; // [rsp+30h] [rbp-D0h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-C8h] BYREF
  PVOID ProcessHeaps[512]; // [rsp+40h] [rbp-C0h] BYREF

  BaseAddress = ProcessHeaps;
  v0 = 1;
  v1 = RtlGetProcessHeaps(0x200u, ProcessHeaps);
  v3 = 0LL;
  v4 = v1;
  if ( v1 > 0x200 )
  {
    RegionSize = 8LL * v1;
    BaseAddress = 0LL;
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
      return 0;
    v4 = RtlGetProcessHeaps(v4, (PVOID *)BaseAddress);
  }
  if ( (_DWORD)v4 )
  {
    do
    {
      v6 = RtlValidateHeap(*(PVOID *)((char *)BaseAddress + v3), 0, 0LL);
      v3 += 8LL;
      LOBYTE(v2) = -(v6 != 0);
      v0 &= v2;
      --v4;
    }
    while ( v4 );
  }
  if ( BaseAddress != ProcessHeaps )
    RtlpSecMemFreeVirtualMemory(v2, &BaseAddress, &RegionSize, 0x8000u);
  return v0;
}
