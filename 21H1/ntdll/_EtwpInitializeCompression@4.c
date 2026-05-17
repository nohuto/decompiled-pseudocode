/*
 * XREFs of _EtwpInitializeCompression@4 @ 0x4B383119
 * Callers:
 *     _EtwpStartUmLogger@16 @ 0x4B2F0075 (_EtwpStartUmLogger@16.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _RtlGetCompressionWorkSpaceSize@12 @ 0x4B35A670 (_RtlGetCompressionWorkSpaceSize@12.c)
 */

int __thiscall EtwpInitializeCompression(_DWORD *this)
{
  int Heap; // eax
  int v4; // eax
  _BYTE v5[4]; // [esp+4h] [ebp-Ch] BYREF
  int v6; // [esp+8h] [ebp-8h] BYREF
  int v7; // [esp+Ch] [ebp-4h] BYREF

  RtlGetCompressionWorkSpaceSize(3, (int)&v7, (int)v5);
  Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, v7);
  this[77] = Heap;
  if ( !Heap )
    return -1073741801;
  v4 = 2 * this[35];
  this[79] = v4;
  v6 = v4;
  return NtAllocateVirtualMemory(-1, (int)(this + 78), 0, (int)&v6, 4096, 4);
}
