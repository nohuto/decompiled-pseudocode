/*
 * XREFs of sub_18006EF94 @ 0x18006EF94
 * Callers:
 *     sub_1800692E4 @ 0x1800692E4 (sub_1800692E4.c)
 * Callees:
 *     sub_18006E348 @ 0x18006E348 (sub_18006E348.c)
 *     sub_18006E504 @ 0x18006E504 (sub_18006E504.c)
 *     sub_18006E5E8 @ 0x18006E5E8 (sub_18006E5E8.c)
 *     sub_18006E670 @ 0x18006E670 (sub_18006E670.c)
 *     sub_18006E6F4 @ 0x18006E6F4 (sub_18006E6F4.c)
 *     sub_18006E758 @ 0x18006E758 (sub_18006E758.c)
 *     sub_18006E7D4 @ 0x18006E7D4 (sub_18006E7D4.c)
 *     sub_18006EA58 @ 0x18006EA58 (sub_18006EA58.c)
 */

__int64 __fastcall sub_18006EF94(_DWORD *a1, void *a2, __int64 a3, void *a4)
{
  _QWORD *v5; // r15
  volatile signed __int64 *v8; // rbp
  PVOID Heap; // r14
  unsigned int v10; // ebx
  PVOID v11; // rdi
  DWORD ProcessId; // eax
  __int64 v13; // rax
  DWORD v14; // eax
  _QWORD *v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  PVOID P; // [rsp+20h] [rbp-38h] BYREF

  v5 = 0LL;
  P = 0LL;
  v8 = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x40uLL);
  if ( !Heap )
    return (unsigned int)-1073741801;
  RtlAcquireSRWLockExclusive(a1 + 18);
  a1[20] = GetCurrentThreadId();
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 2712LL) & 1) != 0 )
    goto LABEL_4;
  ProcessId = GetProcessId(a4);
  v13 = sub_18006E670((__int64)a1, ProcessId);
  v8 = (volatile signed __int64 *)v13;
  if ( !v13 || !sub_18006EA58(v13) )
  {
    v10 = -1073741583;
    goto LABEL_5;
  }
  v14 = GetProcessId(a2);
  P = (PVOID)sub_18006E670((__int64)a1, v14);
  v11 = P;
  if ( P )
    goto LABEL_14;
  a1[20] = 0;
  RtlReleaseSRWLockExclusive(a1 + 18);
  v15 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xB0uLL);
  v5 = v15;
  if ( v15 )
  {
    sub_18006E758((__int64)a1, a3, v15);
    *((_BYTE *)v5 + 170) |= 8u;
    RtlAcquireSRWLockExclusive(a1 + 18);
    a1[20] = GetCurrentThreadId();
    if ( (*(_BYTE *)(*(_QWORD *)a1 + 2712LL) & 1) != 0 )
    {
LABEL_4:
      v10 = -1073741077;
LABEL_5:
      v11 = P;
LABEL_18:
      a1[20] = 0;
      RtlReleaseSRWLockExclusive(a1 + 18);
      if ( v5 )
        sub_18006E348(v5);
      if ( v11 )
        sub_18006E348((volatile signed __int64 *)v11);
      goto LABEL_22;
    }
    v16 = sub_18006E504((__int64)a1, a2, v5, (volatile signed __int64 **)&P);
    v11 = P;
    v10 = v16;
    if ( v16 < 0 )
      goto LABEL_18;
LABEL_14:
    if ( (*((_BYTE *)v11 + 170) & 8) == 0 || sub_18006E5E8((__int64)v8, *((_DWORD *)v11 + 27)) )
    {
      v10 = -1073740008;
    }
    else
    {
      sub_18006E6F4(v8, (volatile signed __int64 *)v11, (__int64)Heap);
      sub_18006E7D4((__int64)Heap, v17, v18);
      Heap = 0LL;
      v10 = 0;
    }
    goto LABEL_18;
  }
  v10 = -1073741801;
LABEL_22:
  if ( v8 )
    sub_18006E348(v8);
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v10;
}
