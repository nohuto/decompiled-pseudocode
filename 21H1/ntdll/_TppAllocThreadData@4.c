/*
 * XREFs of _TppAllocThreadData@4 @ 0x4B2B7FC9
 * Callers:
 *     _TppWorkerThread@4 @ 0x4B2B58A0 (_TppWorkerThread@4.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 */

_DWORD *__thiscall TppAllocThreadData(_DWORD *this)
{
  struct _TEB *v1; // edi
  _DWORD *result; // eax
  _QWORD *v4; // [esp+Ch] [ebp-10h]

  v1 = NtCurrentTeb();
  *this = 0;
  result = (_DWORD *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 2883584) | 8, 96);
  v4 = result;
  if ( result )
  {
    result[1] |= 3u;
    while ( MEMORY[0x7FFE000C] != MEMORY[0x7FFE0010] )
      _mm_pause();
    result = this;
    v4[2] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    v1->ThreadPoolData = v4;
    *this = v4;
  }
  else
  {
    v1->ThreadPoolData = 0;
  }
  return result;
}
