/*
 * XREFs of sub_18006F1FC @ 0x18006F1FC
 * Callers:
 *     sub_1800695BC @ 0x1800695BC (sub_1800695BC.c)
 * Callees:
 *     sub_18006E348 @ 0x18006E348 (sub_18006E348.c)
 *     sub_18006E504 @ 0x18006E504 (sub_18006E504.c)
 *     sub_18006E758 @ 0x18006E758 (sub_18006E758.c)
 */

__int64 __fastcall sub_18006F1FC(_DWORD *a1, void *a2, __int64 a3)
{
  volatile signed __int64 *Heap; // rax
  volatile signed __int64 *v7; // rsi
  signed int v8; // ebx
  volatile signed __int64 *v9; // rdi
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  P = 0LL;
  Heap = (volatile signed __int64 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xB0uLL);
  v7 = Heap;
  if ( !Heap )
    return (unsigned int)-1073741801;
  sub_18006E758((__int64)a1, a3, Heap);
  RtlAcquireSRWLockExclusive(a1 + 18);
  a1[20] = GetCurrentThreadId();
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 2712LL) & 1) != 0 )
  {
    v8 = -1073741077;
  }
  else
  {
    v8 = sub_18006E504((__int64)a1, a2, v7, (volatile signed __int64 **)&P);
    if ( v8 >= 0 )
    {
      v9 = (volatile signed __int64 *)P;
      v8 = v7 != P ? 0xC0000718 : 0;
      goto LABEL_6;
    }
  }
  v9 = (volatile signed __int64 *)P;
LABEL_6:
  a1[20] = 0;
  RtlReleaseSRWLockExclusive(a1 + 18);
  if ( v9 )
    sub_18006E348(v9);
  sub_18006E348(v7);
  return (unsigned int)v8;
}
