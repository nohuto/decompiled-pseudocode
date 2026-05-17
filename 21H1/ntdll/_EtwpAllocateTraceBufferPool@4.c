/*
 * XREFs of _EtwpAllocateTraceBufferPool@4 @ 0x4B2F0625
 * Callers:
 *     _EtwpStartUmLogger@16 @ 0x4B2F0075 (_EtwpStartUmLogger@16.c)
 * Callees:
 *     _EtwpAllocateFreeBuffers@8 @ 0x4B2F06F0 (_EtwpAllocateFreeBuffers@8.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 */

int __thiscall EtwpAllocateTraceBufferPool(_DWORD *this)
{
  int v2; // ebx
  unsigned int v3; // ecx
  unsigned int v4; // edx
  unsigned int v5; // eax
  unsigned int v6; // esi
  int v7; // esi
  unsigned int v9; // edx
  int v10; // [esp+10h] [ebp-8h] BYREF
  int v11; // [esp+14h] [ebp-4h] BYREF

  v10 = 0;
  v2 = this[34];
  v3 = this[37];
  v4 = 2 * v2;
  if ( v3 < 2 * v2 )
    v3 = v4 + 22;
  v5 = this[38];
  this[37] = v3;
  if ( v5 < v4 || v5 > v3 )
    v5 = 2 * v2;
  this[38] = v5;
  if ( v3 > 0x400 )
  {
    this[37] = 1024;
    v3 = 1024;
  }
  if ( v5 > 0x400 )
  {
    this[38] = 1024;
    v5 = 1024;
  }
  v6 = this[64];
  if ( v6 )
  {
    v9 = v3 - v2 - 1;
    if ( v6 > v9 )
      this[64] = v9;
  }
  if ( (this[53] & 0x400) != 0 )
  {
    this[37] = v5;
    v3 = v5;
  }
  v11 = v3 * this[35];
  if ( (int)NtAllocateVirtualMemory(-1, &v10, 0, &v11, 0x2000, 4) >= 0 )
  {
    v7 = this[38];
    this[76] = v10;
    if ( EtwpAllocateFreeBuffers(this, v7) == v7 )
      return 0;
    v11 = 0;
    NtFreeVirtualMemory(-1, this + 76, &v11, 0x8000);
    this[76] = 0;
  }
  return 8;
}
