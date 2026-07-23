/*
 * XREFs of EtwpTrackDebugIdForSession @ 0x180111CC8
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x180087374 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlCompareMemory @ 0x1800A1A10 (RtlCompareMemory.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
 */

__int64 __fastcall EtwpTrackDebugIdForSession(__int64 a1, const void *a2, unsigned int a3)
{
  __int64 *v3; // rsi
  SIZE_T v4; // rbp
  __int64 *i; // rdi
  _QWORD *Heap; // rax
  _QWORD *v9; // rbx
  __int64 v11; // rax

  v3 = (__int64 *)(a1 + 464);
  v4 = a3;
  for ( i = *(__int64 **)(a1 + 464); i != v3; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 5) == (_DWORD)v4 && RtlCompareMemory(i + 3, a2, v4) == v4 )
      return 183LL;
  }
  if ( (int)v4 + 24 < (unsigned int)v4 )
    return 534LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(v4 + 24));
  v9 = Heap;
  if ( !Heap )
    return 14LL;
  *((_DWORD *)Heap + 5) = v4;
  memmove(Heap + 3, a2, v4);
  v11 = *v3;
  if ( *(__int64 **)(*v3 + 8) != v3 )
    __fastfail(3u);
  *v9 = v11;
  v9[1] = v3;
  *(_QWORD *)(v11 + 8) = v9;
  *v3 = (__int64)v9;
  *(_DWORD *)(a1 + 332) |= 0x10u;
  return 0LL;
}
