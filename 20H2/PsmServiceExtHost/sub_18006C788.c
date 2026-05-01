/*
 * XREFs of sub_18006C788 @ 0x18006C788
 * Callers:
 *     sub_18006D300 @ 0x18006D300 (sub_18006D300.c)
 * Callees:
 *     sub_180037B20 @ 0x180037B20 (sub_180037B20.c)
 */

char __fastcall sub_18006C788(__int64 a1, unsigned __int64 *a2)
{
  __int64 v2; // rsi
  unsigned int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned __int64 Heap; // rax
  __int64 v8; // rbx
  struct _PEB *v9; // rcx
  char *v10; // r8
  char v11; // cl
  unsigned __int64 v12; // rcx
  unsigned int v13; // edi
  __int64 v14; // r14
  __int64 v15; // r11
  _QWORD *v16; // r9
  __int64 v17; // rdx
  void *v18; // rcx
  __int64 v20; // [rsp+50h] [rbp+30h]
  __int64 v21; // [rsp+58h] [rbp+38h]

  v2 = a1 + 72;
  v4 = *(_DWORD *)(a1 + 76);
  v20 = a2[1] & (-1LL << (v4 & 0x1F));
  v5 = *(_QWORD *)(a1 + 80);
  v6 = (37
      * (BYTE6(v20)
       + 37
       * (BYTE5(v20)
        + 37
        * (BYTE4(v20)
         + 37 * (BYTE3(v20) + 37 * (BYTE2(v20) + 37 * (BYTE1(v20) + 37 * ((unsigned __int8)v20 + 11623883)))))))
      + HIBYTE(v20)) & ((v4 >> 5) - 1);
  Heap = *(_QWORD *)(v5 + 8 * v6);
  *a2 = Heap;
  *(_QWORD *)(v5 + 8 * v6) = a2;
  ++*(_DWORD *)v2;
  v8 = (unsigned int)(2 * (*(_DWORD *)(v2 + 4) >> 5));
  if ( *(_DWORD *)v2 >= (unsigned int)v8 )
  {
    v9 = NtCurrentPeb();
    if ( (unsigned int)v8 < 4 )
      v8 = 4LL;
    Heap = (unsigned __int64)RtlAllocateHeap(v9->ProcessHeap, 0, 8LL * (unsigned int)v8);
    v10 = (char *)Heap;
    if ( Heap )
    {
      if ( (((_DWORD)v8 - 1) & (unsigned int)v8) != 0 )
      {
        v11 = -1;
        do
        {
          ++v11;
          LODWORD(v8) = (unsigned int)v8 >> 1;
        }
        while ( (_DWORD)v8 );
        v8 = (unsigned int)(1 << v11);
      }
      if ( (unsigned int)v8 > 0x4000000 )
        v8 = 0x4000000LL;
      Heap = v2 | 1;
      v12 = (unsigned int)v8;
      if ( v10 > &v10[8 * v8] )
        v12 = 0LL;
      if ( v12 )
        memset64(v10, Heap, v12);
      v13 = 0;
      v14 = -1LL << (*(_BYTE *)(v2 + 4) & 0x1F);
      if ( (*(_DWORD *)(v2 + 4) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v15 = *(_QWORD *)(v2 + 8);
          while ( 1 )
          {
            v16 = *(_QWORD **)(v15 + 8LL * v13);
            if ( ((unsigned __int8)v16 & 1) != 0 )
              break;
            *(_QWORD *)(v15 + 8LL * v13) = *v16;
            v21 = v14 & v16[1];
            v17 = (37
                 * (BYTE6(v21)
                  + 37
                  * (BYTE5(v21)
                   + 37
                   * (BYTE4(v21)
                    + 37 * (BYTE3(v21) + 37 * (BYTE2(v21) + 37 * (BYTE1(v21) + 37 * ((unsigned __int8)v21 + 11623883)))))))
                 + HIBYTE(v21)) & (unsigned int)(v8 - 1);
            *v16 = *(_QWORD *)&v10[8 * v17];
            *(_QWORD *)&v10[8 * v17] = v16;
          }
          ++v13;
          LODWORD(Heap) = *(_DWORD *)(v2 + 4) >> 5;
        }
        while ( v13 < (unsigned int)Heap );
      }
      *(_DWORD *)(v2 + 4) &= 0x1Fu;
      v18 = *(void **)(v2 + 8);
      *(_DWORD *)(v2 + 4) |= 32 * v8;
      *(_QWORD *)(v2 + 8) = v10;
      if ( v18 )
        LOBYTE(Heap) = sub_180037B20(v18);
    }
  }
  return Heap;
}
