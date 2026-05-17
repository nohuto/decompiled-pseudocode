/*
 * XREFs of _RtlEnableThreadProfiling@20 @ 0x4B32CC20
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _ZwSetInformationThread@16 @ 0x4B2F2A30 (_ZwSetInformationThread@16.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __stdcall RtlEnableThreadProfiling(int a1, int a2, int a3, int a4, int *a5)
{
  void *Heap; // eax
  int v7; // esi
  int v8; // edi
  _DWORD v9[6]; // [esp+10h] [ebp-18h] BYREF

  if ( (a2 & 0xFFFFFFFE) != 0 )
    return -1073741584;
  if ( a4 | a3 & 0xFFFF0000 )
    return -1073741583;
  Heap = (void *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, 448);
  v7 = (int)Heap;
  if ( !Heap )
    return -1073741801;
  memset(Heap, 0, 0x1C0u);
  *(_DWORD *)(v7 + 32) = a3;
  *(_WORD *)v7 = 448;
  *(_DWORD *)(v7 + 36) = a4;
  *(_WORD *)(v7 + 2) = 1;
  v9[1] = a4;
  v9[3] = 1;
  v9[2] = a2;
  v9[0] = a3;
  v9[4] = v7;
  v8 = ZwSetInformationThread(a1, 32, (int)v9, 24);
  if ( v8 < 0 )
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v7);
  else
    *a5 = v7;
  return v8;
}
