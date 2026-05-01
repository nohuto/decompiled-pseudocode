/*
 * XREFs of sub_18002F070 @ 0x18002F070
 * Callers:
 *     sub_18002EE08 @ 0x18002EE08 (sub_18002EE08.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall sub_18002F070(__int64 a1)
{
  __int64 v2; // rbx
  SIZE_T v4; // rbx
  _WORD *Heap; // r8
  SIZE_T v6; // rbx
  SIZE_T v7; // rdx
  _WORD *v8; // rax
  __int64 v9; // rdi
  __int16 v10; // cx

  v2 = -1LL;
  while ( *(_WORD *)(a1 + 2 * v2++ + 2) != 0 )
    ;
  v4 = 2 * v2 + 2;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  if ( !Heap )
    return 0LL;
  v6 = v4 >> 1;
  if ( v6 - 1 > 0x7FFFFFFE )
  {
    if ( v6 )
      *Heap = 0;
  }
  else
  {
    v7 = 2147483646 - v6;
    v8 = Heap;
    v9 = a1 - (_QWORD)Heap;
    while ( v7 + v6 )
    {
      v10 = *(_WORD *)((char *)v8 + v9);
      if ( !v10 )
        break;
      *v8++ = v10;
      if ( !--v6 )
        goto LABEL_9;
    }
    if ( !v6 )
LABEL_9:
      --v8;
    *v8 = 0;
  }
  return Heap;
}
