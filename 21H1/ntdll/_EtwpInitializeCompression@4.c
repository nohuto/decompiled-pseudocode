/*
 * XREFs of _EtwpInitializeCompression@4 @ 0x4B383119
 * Callers:
 *     _EtwpStartUmLogger@16 @ 0x4B2F0075 (_EtwpStartUmLogger@16.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _RtlGetCompressionWorkSpaceSize@12 @ 0x4B35A670 (_RtlGetCompressionWorkSpaceSize@12.c)
 */

NTSTATUS __thiscall EtwpInitializeCompression(int this)
{
  PVOID Heap; // eax
  int v4; // eax
  ULONG_PTR v5; // [esp-10h] [ebp-20h]
  SIZE_T v6; // [esp-4h] [ebp-14h]
  ULONG v7; // [esp+0h] [ebp-10h]
  ULONG CompressFragmentWorkSpaceSize; // [esp+4h] [ebp-Ch] BYREF
  int v9; // [esp+8h] [ebp-8h] BYREF
  ULONG CompressBufferWorkSpaceSize; // [esp+Ch] [ebp-4h] BYREF

  RtlGetCompressionWorkSpaceSize(3u, &CompressBufferWorkSpaceSize, &CompressFragmentWorkSpaceSize);
  LODWORD(v6) = CompressBufferWorkSpaceSize;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
  *(_DWORD *)(this + 308) = Heap;
  if ( !Heap )
    return -1073741801;
  v4 = 2 * *(_DWORD *)(this + 140);
  *(_DWORD *)(this + 316) = v4;
  v9 = v4;
  HIDWORD(v5) = &v9;
  LODWORD(v5) = 0;
  return NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, (PVOID *)(this + 312), v5, (PSIZE_T)0x1000, 4u, v7);
}
