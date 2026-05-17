/*
 * XREFs of _RtlCopySecurityDescriptor@8 @ 0x4B335BC0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpQuerySecurityDescriptor@36 @ 0x4B2E6B3E (_RtlpQuerySecurityDescriptor@36.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __stdcall RtlCopySecurityDescriptor(void *Src, _DWORD *a2)
{
  unsigned int v2; // esi
  void *Heap; // eax
  int v5; // [esp+4h] [ebp-20h] BYREF
  int v6; // [esp+8h] [ebp-1Ch] BYREF
  int v7; // [esp+Ch] [ebp-18h] BYREF
  int v8; // [esp+10h] [ebp-14h] BYREF
  unsigned int v9; // [esp+14h] [ebp-10h] BYREF
  unsigned int v10; // [esp+18h] [ebp-Ch] BYREF
  unsigned int v11; // [esp+1Ch] [ebp-8h] BYREF
  unsigned int v12; // [esp+20h] [ebp-4h] BYREF

  RtlpQuerySecurityDescriptor((int)Src, &v5, &v11, &v6, &v12, &v7, &v10, &v8, &v9);
  v2 = v10 + v11 + v12 + v9 + 20;
  Heap = (void *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v2);
  *a2 = Heap;
  if ( !Heap )
    return -1073741801;
  memcpy(Heap, Src, v2);
  return 0;
}
