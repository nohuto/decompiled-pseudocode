/*
 * XREFs of sub_1800073FC @ 0x1800073FC
 * Callers:
 *     sub_1800072AC @ 0x1800072AC (sub_1800072AC.c)
 * Callees:
 *     sub_180007534 @ 0x180007534 (sub_180007534.c)
 *     sub_180027784 @ 0x180027784 (sub_180027784.c)
 *     sub_1800355D8 @ 0x1800355D8 (sub_1800355D8.c)
 */

__int64 __fastcall sub_1800073FC(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v6; // ebx
  _QWORD *Heap; // r14
  __int64 v8; // rax
  __int64 v9; // r8
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  int v15; // ebp
  unsigned __int64 v16; // rax

  v6 = 0;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x40uLL);
  if ( Heap )
  {
    v8 = sub_180027784(4LL);
    sub_180007534(v8, a1, a2, Heap);
    v10 = (_QWORD *)(a2 + 1408);
    v11 = *(_QWORD *)(a2 + 1408);
    v12 = Heap + 1;
    if ( *(_QWORD *)(v11 + 8) != a2 + 1408 )
      __fastfail(3u);
    *v12 = v11;
    v13 = a1 + 40;
    Heap[2] = v10;
    *(_QWORD *)(v11 + 8) = v12;
    *v10 = v12;
    v14 = *(_QWORD *)v13;
    if ( (*(_BYTE *)(v13 + 8) & 1) != 0 )
    {
      if ( v14 )
        v14 ^= v13;
      else
        v14 = 0LL;
    }
    LOBYTE(v9) = 0;
    v15 = *(_BYTE *)(v13 + 8) & 1;
    if ( v14 )
    {
      while ( 1 )
      {
        if ( (int)sub_1800355D8(Heap, v14) < 0 )
        {
          v16 = *(_QWORD *)v14;
          if ( v15 )
          {
            if ( !v16 )
              goto LABEL_18;
            v16 ^= v14;
          }
          if ( !v16 )
          {
LABEL_18:
            LOBYTE(v9) = 0;
            break;
          }
        }
        else
        {
          v16 = *(_QWORD *)(v14 + 8);
          if ( v15 )
          {
            if ( !v16 )
              goto LABEL_19;
            v16 ^= v14;
          }
          if ( !v16 )
          {
LABEL_19:
            LOBYTE(v9) = 1;
            break;
          }
        }
        v14 = v16;
      }
    }
    RtlRbInsertNodeEx(v13, v14, v9, Heap + 3);
    *a3 = *Heap;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v6;
}
