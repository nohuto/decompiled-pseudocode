/*
 * XREFs of RtlpNtEnumerateSubKey @ 0x180081F60
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     NtEnumerateKey @ 0x18009D450 (NtEnumerateKey.c)
 *     memmove @ 0x1800A3C00 (memmove.c)
 */

__int64 __fastcall RtlpNtEnumerateSubKey(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 Heap; // rbx
  unsigned int v7; // esi
  int v8; // esi
  unsigned int v9; // ecx
  __int16 v11; // [rsp+68h] [rbp+10h] BYREF

  Heap = 0LL;
  v7 = 0;
  if ( *(_WORD *)(a2 + 2) )
  {
    v7 = *(unsigned __int16 *)(a2 + 2) + 16;
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
    if ( !Heap )
      return 3221225495LL;
  }
  v8 = NtEnumerateKey(a1, a3, 0LL, Heap, v7, &v11);
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
      memmove(*(void **)(a2 + 8), (const void *)(Heap + 16), v9);
    }
  }
  if ( v8 == -2147483643 )
    *(_WORD *)a2 = v11 - 16;
  if ( Heap )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  return (unsigned int)v8;
}
