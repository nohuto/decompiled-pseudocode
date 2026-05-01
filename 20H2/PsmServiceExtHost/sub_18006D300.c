/*
 * XREFs of sub_18006D300 @ 0x18006D300
 * Callers:
 *     sub_1800688D8 @ 0x1800688D8 (sub_1800688D8.c)
 *     sub_18006F640 @ 0x18006F640 (sub_18006F640.c)
 * Callees:
 *     memset @ 0x18004683A (memset.c)
 *     sub_18006BD10 @ 0x18006BD10 (sub_18006BD10.c)
 *     sub_18006BD88 @ 0x18006BD88 (sub_18006BD88.c)
 *     sub_18006C090 @ 0x18006C090 (sub_18006C090.c)
 *     sub_18006C1E0 @ 0x18006C1E0 (sub_18006C1E0.c)
 *     sub_18006C334 @ 0x18006C334 (sub_18006C334.c)
 *     sub_18006C788 @ 0x18006C788 (sub_18006C788.c)
 *     sub_18006D660 @ 0x18006D660 (sub_18006D660.c)
 */

__int64 __fastcall sub_18006D300(__int64 *a1, void *a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rsi
  unsigned __int64 *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbp
  unsigned __int64 *Heap; // rax
  int v13; // edi
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  _QWORD *i; // rax
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  v4 = *a1;
  v18 = 0LL;
  v9 = 0LL;
  v10 = sub_18006C334(v4, a2);
  v11 = v10;
  if ( v10 )
  {
    v15 = (_QWORD *)(v10 + 24);
    for ( i = *(_QWORD **)(v10 + 24); i != v15; i = (_QWORD *)*i )
    {
      if ( *(i - 3) == a3 )
        return (unsigned int)-1073740008;
    }
    goto LABEL_6;
  }
  Heap = (unsigned __int64 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x40uLL);
  v9 = Heap;
  if ( !Heap )
    return (unsigned int)-1073741801;
  v11 = (__int64)Heap;
  memset(Heap, 0, 0x40uLL);
  v9[4] = (unsigned __int64)(v9 + 3);
  v9[3] = (unsigned __int64)(v9 + 3);
  v13 = sub_18006BD10(a2, (__int64)v9);
  if ( v13 >= 0 )
  {
    sub_18006C788(v4, v9);
LABEL_6:
    v13 = sub_18006C090((__int64)a1, v11, a3, &v18);
    if ( v13 < 0 )
    {
      v14 = v18;
    }
    else
    {
      v9 = 0LL;
      sub_18006BD88(v4, v11);
      v14 = 0LL;
      *a4 = v18;
    }
    if ( v14 )
      sub_18006D660(v4, v14, 1LL);
  }
  if ( v9 )
    sub_18006C1E0(v4, v9);
  return (unsigned int)v13;
}
