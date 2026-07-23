/*
 * XREFs of _EtwpAllocateTraceBufferPool@4 @ 0x4B2F0625
 * Callers:
 *     _EtwpStartUmLogger@16 @ 0x4B2F0075 (_EtwpStartUmLogger@16.c)
 * Callees:
 *     _EtwpAllocateFreeBuffers@8 @ 0x4B2F06F0 (_EtwpAllocateFreeBuffers@8.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 */

int __thiscall EtwpAllocateTraceBufferPool(int this)
{
  int v2; // ebx
  unsigned int v3; // ecx
  unsigned int v4; // edx
  unsigned int v5; // eax
  unsigned int v6; // esi
  int v7; // esi
  unsigned int v9; // edx
  ULONG_PTR v10; // [esp-10h] [ebp-28h]
  ULONG v11; // [esp+0h] [ebp-18h]
  PVOID BaseAddress; // [esp+10h] [ebp-8h] BYREF
  ULONG_PTR RegionSize; // [esp+14h] [ebp-4h] BYREF

  BaseAddress = 0;
  v2 = *(_DWORD *)(this + 136);
  v3 = *(_DWORD *)(this + 148);
  v4 = 2 * v2;
  if ( v3 < 2 * v2 )
    v3 = v4 + 22;
  v5 = *(_DWORD *)(this + 152);
  *(_DWORD *)(this + 148) = v3;
  if ( v5 < v4 || v5 > v3 )
    v5 = 2 * v2;
  *(_DWORD *)(this + 152) = v5;
  if ( v3 > 0x400 )
  {
    *(_DWORD *)(this + 148) = 1024;
    v3 = 1024;
  }
  if ( v5 > 0x400 )
  {
    *(_DWORD *)(this + 152) = 1024;
    v5 = 1024;
  }
  v6 = *(_DWORD *)(this + 256);
  if ( v6 )
  {
    v9 = v3 - v2 - 1;
    if ( v6 > v9 )
      *(_DWORD *)(this + 256) = v9;
  }
  if ( (*(_DWORD *)(this + 212) & 0x400) != 0 )
  {
    *(_DWORD *)(this + 148) = v5;
    v3 = v5;
  }
  LODWORD(RegionSize) = v3 * *(_DWORD *)(this + 140);
  HIDWORD(v10) = &RegionSize;
  LODWORD(v10) = 0;
  if ( NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, v10, (PSIZE_T)0x2000, 4u, v11) >= 0 )
  {
    v7 = *(_DWORD *)(this + 152);
    *(_DWORD *)(this + 304) = BaseAddress;
    if ( EtwpAllocateFreeBuffers(this, v7) == v7 )
      return 0;
    LODWORD(RegionSize) = 0;
    NtFreeVirtualMemory((HANDLE)0xFFFFFFFF, (PVOID *)(this + 304), &RegionSize, 0x8000u);
    *(_DWORD *)(this + 304) = 0;
  }
  return 8;
}
