/*
 * XREFs of sub_180031588 @ 0x180031588
 * Callers:
 *     PsmHostStateNotification2 @ 0x18000B680 (PsmHostStateNotification2.c)
 * Callees:
 *     sub_180031704 @ 0x180031704 (sub_180031704.c)
 *     sub_1800317B0 @ 0x1800317B0 (sub_1800317B0.c)
 *     sub_180046098 @ 0x180046098 (sub_180046098.c)
 *     memcpy @ 0x180046822 (memcpy.c)
 *     sub_180063538 @ 0x180063538 (sub_180063538.c)
 */

void __fastcall sub_180031588(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        _DWORD *a5,
        _QWORD *Src,
        unsigned int a7,
        int a8,
        unsigned int a9)
{
  __int64 v11; // rax
  _DWORD *v12; // rbx
  _WORD *v13; // rax
  __int64 v14; // r8
  __int128 v15; // xmm1
  int v16; // eax
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  PVOID Heap; // rdi
  PVOID v20; // rsi

  if ( a9 <= 1 && (a7 != 1 || *a5 != 6) )
  {
    v11 = sub_180046098(0x98uLL);
    v12 = (_DWORD *)v11;
    if ( v11 )
    {
      v13 = (_WORD *)(v11 + 24);
      *((_QWORD *)v12 + 1) = v13;
      *((_QWORD *)v12 + 2) = v13;
      *v13 = 0;
      *((_QWORD *)v12 + 14) = 0LL;
      *((_QWORD *)v12 + 15) = 0LL;
      v12[32] = 0;
      *(_OWORD *)(v12 + 34) = 0LL;
    }
    else
    {
      v12 = 0LL;
    }
    if ( v12 )
    {
      if ( a4 )
      {
        v14 = -1LL;
        do
          ++v14;
        while ( *(_WORD *)(a4 + 2 * v14) );
      }
      if ( !(unsigned __int8)sub_1800317B0(v12 + 2, a4) )
        goto LABEL_16;
      if ( a7 > 1 )
      {
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * a7);
        if ( !Heap )
        {
LABEL_16:
          if ( v12 )
            sub_180063538(v12);
          return;
        }
        v20 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 4LL * a7);
        if ( !v20 )
        {
LABEL_14:
          if ( Heap )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
          goto LABEL_16;
        }
        memcpy(Heap, Src, 8LL * a7);
        *((_QWORD *)v12 + 15) = Heap;
        memcpy(v20, a5, 4LL * a7);
        *((_QWORD *)v12 + 14) = v20;
      }
      else
      {
        v12[28] = *a5;
        *((_QWORD *)v12 + 15) = *Src;
      }
      v15 = *(_OWORD *)(a2 + 16);
      *(_OWORD *)(v12 + 10) = *(_OWORD *)a2;
      v12[33] = a9;
      v16 = *(_DWORD *)(a2 + 64);
      v17 = *(_OWORD *)(a2 + 32);
      *(_OWORD *)(v12 + 14) = v15;
      *v12 = 2;
      v18 = *(_OWORD *)(a2 + 48);
      *(_OWORD *)(v12 + 18) = v17;
      v12[32] = a7;
      *(_OWORD *)(v12 + 22) = v18;
      v12[26] = v16;
      v12[27] = a3;
      sub_180031704(a1, v12);
      v12 = 0LL;
      Heap = 0LL;
      goto LABEL_14;
    }
  }
}
