/*
 * XREFs of EtwpAllocateTraceBufferPool @ 0x180048984
 * Callers:
 *     EtwpStartUmLogger @ 0x1800482B0 (EtwpStartUmLogger.c)
 * Callees:
 *     EtwpAllocateFreeBuffers @ 0x180048A90 (EtwpAllocateFreeBuffers.c)
 *     ZwAllocateVirtualMemory @ 0x18009D900 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009D9C0 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall EtwpAllocateTraceBufferPool(__int64 a1)
{
  int v1; // r9d
  unsigned int v3; // ecx
  unsigned int v4; // eax
  unsigned int v5; // r8d
  unsigned int v6; // ebx
  unsigned int v8; // edx
  ULONG_PTR RegionSize; // [rsp+40h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(_DWORD *)(a1 + 204);
  v3 = *(_DWORD *)(a1 + 216);
  BaseAddress = 0LL;
  if ( v3 < 2 * v1 )
    v3 = 2 * v1 + 22;
  v4 = *(_DWORD *)(a1 + 220);
  *(_DWORD *)(a1 + 216) = v3;
  if ( v4 < 2 * v1 || v4 > v3 )
    v4 = 2 * v1;
  *(_DWORD *)(a1 + 220) = v4;
  if ( v3 > 0x400 )
  {
    *(_DWORD *)(a1 + 216) = 1024;
    v3 = 1024;
  }
  if ( v4 > 0x400 )
  {
    *(_DWORD *)(a1 + 220) = 1024;
    v4 = 1024;
  }
  v5 = *(_DWORD *)(a1 + 368);
  if ( v5 )
  {
    v8 = v3 - v1 - 1;
    if ( v5 > v8 )
      *(_DWORD *)(a1 + 368) = v8;
  }
  if ( (*(_DWORD *)(a1 + 324) & 0x400) != 0 )
  {
    *(_DWORD *)(a1 + 216) = v4;
    v3 = v4;
  }
  RegionSize = v3 * *(_DWORD *)(a1 + 208);
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u) >= 0 )
  {
    v6 = *(_DWORD *)(a1 + 220);
    *(_QWORD *)(a1 + 424) = BaseAddress;
    if ( (unsigned int)EtwpAllocateFreeBuffers(a1, v6) == v6 )
      return 0LL;
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(a1 + 424), &RegionSize, 0x8000u);
    *(_QWORD *)(a1 + 424) = 0LL;
  }
  return 8LL;
}
