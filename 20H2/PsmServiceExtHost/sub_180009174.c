/*
 * XREFs of sub_180009174 @ 0x180009174
 * Callers:
 *     sub_18000B2DC @ 0x18000B2DC (sub_18000B2DC.c)
 * Callees:
 *     sub_180009298 @ 0x180009298 (sub_180009298.c)
 *     sub_18000E1BC @ 0x18000E1BC (sub_18000E1BC.c)
 *     sub_18000E244 @ 0x18000E244 (sub_18000E244.c)
 *     sub_18003414C @ 0x18003414C (sub_18003414C.c)
 */

__int64 __fastcall sub_180009174(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  PVOID Heap; // rax
  unsigned int v7; // ebx
  PVOID v8; // r14
  __int64 v9; // r8
  unsigned __int64 v10; // rdi
  int v11; // ebp
  unsigned __int64 v12; // rax

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x60uLL);
  v7 = 0;
  v8 = Heap;
  if ( Heap )
  {
    sub_180009298(*a2, a2[1], a1, Heap);
    sub_18000E1BC(a1);
    v10 = *(_QWORD *)(a1 + 72);
    if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
    {
      if ( v10 )
        v10 ^= a1 + 72;
      else
        v10 = 0LL;
    }
    LOBYTE(v9) = 0;
    v11 = *(_BYTE *)(a1 + 80) & 1;
    if ( v10 )
    {
      while ( 1 )
      {
        if ( (int)sub_18003414C(a2, v10, v9) < 0 )
        {
          v12 = *(_QWORD *)v10;
          if ( v11 )
          {
            if ( !v12 )
              goto LABEL_17;
            v12 ^= v10;
          }
          if ( !v12 )
          {
LABEL_17:
            LOBYTE(v9) = 0;
            break;
          }
        }
        else
        {
          v12 = *(_QWORD *)(v10 + 8);
          if ( v11 )
          {
            if ( !v12 )
              goto LABEL_18;
            v12 ^= v10;
          }
          if ( !v12 )
          {
LABEL_18:
            LOBYTE(v9) = 1;
            break;
          }
        }
        v10 = v12;
      }
    }
    RtlRbInsertNodeEx(a1 + 72, v10, v9, v8);
    sub_18000E244(a1);
    *a3 = v8;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v7;
}
