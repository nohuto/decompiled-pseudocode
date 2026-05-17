/*
 * XREFs of _RtlpNtEnumerateSubKey@16 @ 0x4B36D180
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _ZwEnumerateKey@24 @ 0x4B2F2CA0 (_ZwEnumerateKey@24.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __stdcall RtlpNtEnumerateSubKey(int a1, int a2, int a3, int a4)
{
  int Heap; // esi
  int v5; // edi
  int v6; // eax
  int v8; // edi
  size_t v9; // [esp-4h] [ebp-14h]
  int v10; // [esp+Ch] [ebp-4h] BYREF

  Heap = 0;
  v5 = 0;
  v6 = *(unsigned __int16 *)(a2 + 2);
  if ( (_WORD)v6 )
  {
    v5 = v6 + 16;
    Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, v6 + 16);
    if ( !Heap )
      return -1073741801;
  }
  v8 = ZwEnumerateKey(a1, a3, 0, Heap, v5, (int)&v10);
  if ( v8 >= 0 && Heap )
  {
    if ( (unsigned int)*(unsigned __int16 *)(a2 + 2) < *(_DWORD *)(Heap + 12) )
    {
      v8 = -2147483643;
    }
    else
    {
      v9 = *(unsigned __int16 *)(Heap + 12);
      *(_WORD *)a2 = v9;
      memcpy(*(void **)(a2 + 4), (const void *)(Heap + 16), v9);
    }
  }
  if ( v8 == -2147483643 )
    *(_WORD *)a2 = v10 - 16;
  if ( Heap )
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v8;
}
