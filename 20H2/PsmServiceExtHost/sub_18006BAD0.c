/*
 * XREFs of sub_18006BAD0 @ 0x18006BAD0
 * Callers:
 *     sub_180068544 @ 0x180068544 (sub_180068544.c)
 *     sub_18006DAE0 @ 0x18006DAE0 (sub_18006DAE0.c)
 * Callees:
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 *     sub_180040E64 @ 0x180040E64 (sub_180040E64.c)
 *     sub_18006BC20 @ 0x18006BC20 (sub_18006BC20.c)
 *     sub_18006BCA0 @ 0x18006BCA0 (sub_18006BCA0.c)
 *     sub_18006BF50 @ 0x18006BF50 (sub_18006BF50.c)
 *     sub_18006C590 @ 0x18006C590 (sub_18006C590.c)
 *     sub_18006C714 @ 0x18006C714 (sub_18006C714.c)
 *     sub_18006D05C @ 0x18006D05C (sub_18006D05C.c)
 *     sub_18006D174 @ 0x18006D174 (sub_18006D174.c)
 */

__int64 __fastcall sub_18006BAD0(__int64 *a1, int *a2, __int64 a3, char **a4)
{
  int v4; // eax
  char *v5; // rdi
  int v9; // ebx
  __int64 v10; // rbp
  char *Heap; // rax
  int v12; // r8d
  char v14; // [rsp+60h] [rbp+8h] BYREF
  PVOID P; // [rsp+68h] [rbp+10h] BYREF

  v4 = *a2;
  v5 = 0LL;
  P = 0LL;
  if ( (unsigned int)(v4 - 1) > 0x1FF )
  {
    v9 = -1073741584;
    goto LABEL_11;
  }
  if ( (a2[1] & 0xFFFFFFFD) != 0 )
    return (unsigned int)-1073741584;
  v10 = *a1;
  v9 = sub_18006BF50(*a1);
  if ( v9 < 0 )
    return (unsigned int)v9;
  v9 = sub_18006D174(v10, a2, &P, &v14);
  if ( v9 >= 0 )
  {
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x110uLL);
    v5 = Heap;
    if ( !Heap )
    {
      v9 = -1073741801;
      goto LABEL_13;
    }
    sub_18006C590(v10, a2, Heap);
    v9 = sub_18006BCA0(v5);
    if ( v9 >= 0 )
    {
      sub_18006BC20(v10, (_DWORD)v5, v12, (_DWORD)a2, (__int64)P);
      sub_18006C714(a1, v5);
      sub_180040E64(v10);
      sub_18006D05C(v5);
      v9 = 0;
      *a4 = v5;
      goto LABEL_13;
    }
LABEL_11:
    if ( v5 )
      sub_1800265B0(v5);
  }
LABEL_13:
  if ( P )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return (unsigned int)v9;
}
