/*
 * XREFs of sub_18000BAA8 @ 0x18000BAA8
 * Callers:
 *     sub_18000B9A8 @ 0x18000B9A8 (sub_18000B9A8.c)
 * Callees:
 *     sub_18000BD38 @ 0x18000BD38 (sub_18000BD38.c)
 *     sub_18000BF80 @ 0x18000BF80 (sub_18000BF80.c)
 *     sub_180037B20 @ 0x180037B20 (sub_180037B20.c)
 */

__int64 __fastcall sub_18000BAA8(_QWORD *a1)
{
  __int64 v1; // rdi
  __int64 v3; // r13
  __int64 v4; // rsi
  __int64 v5; // rbx
  struct _PEB *v6; // rcx
  char *Heap; // rax
  char v8; // cl
  unsigned __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 v11; // r9
  __int64 v12; // r15
  _QWORD *v13; // r10
  __int64 v14; // rdx
  unsigned int v15; // edi
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v20; // rcx
  __int64 v21; // [rsp+60h] [rbp+40h]

  v1 = a1[6];
  v3 = v1 + 32;
  a1[175] = sub_18000BF80(a1, a1 + 11);
  RtlAcquireSRWLockExclusive(v1 + 32);
  sub_18000BD38(v1 + 16, a1);
  v4 = v1 + 2528;
  v5 = (unsigned int)(2 * (*(_DWORD *)(v1 + 2532) >> 5));
  if ( *(_DWORD *)(v1 + 2528) >= (unsigned int)v5 )
  {
    v6 = NtCurrentPeb();
    if ( (unsigned int)v5 < 4 )
      v5 = 4LL;
    Heap = (char *)RtlAllocateHeap(v6->ProcessHeap, 0, 8LL * (unsigned int)v5);
    if ( Heap )
    {
      if ( (((_DWORD)v5 - 1) & (unsigned int)v5) != 0 )
      {
        v8 = -1;
        do
        {
          ++v8;
          LODWORD(v5) = (unsigned int)v5 >> 1;
        }
        while ( (_DWORD)v5 );
        v5 = (unsigned int)(1 << v8);
      }
      if ( (unsigned int)v5 > 0x4000000 )
        v5 = 0x4000000LL;
      v9 = (unsigned int)v5;
      if ( Heap > &Heap[8 * v5] )
        v9 = 0LL;
      if ( v9 )
        memset64(Heap, v4 | 1, v9);
      v10 = 0;
      v11 = -1LL << (*(_BYTE *)(v4 + 4) & 0x1F);
      if ( (*(_DWORD *)(v4 + 4) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v12 = *(_QWORD *)(v4 + 8);
          while ( 1 )
          {
            v13 = *(_QWORD **)(v12 + 8LL * v10);
            if ( ((unsigned __int8)v13 & 1) != 0 )
              break;
            *(_QWORD *)(v12 + 8LL * v10) = *v13;
            v21 = v11 & v13[1];
            v14 = (37
                 * (BYTE6(v21)
                  + 37
                  * (BYTE5(v21)
                   + 37
                   * (BYTE4(v21)
                    + 37 * (BYTE3(v21) + 37 * (BYTE2(v21) + 37 * (BYTE1(v21) + 37 * ((unsigned __int8)v21 + 11623883)))))))
                 + HIBYTE(v21)) & (unsigned int)(v5 - 1);
            *v13 = *(_QWORD *)&Heap[8 * v14];
            *(_QWORD *)&Heap[8 * v14] = v13;
          }
          ++v10;
        }
        while ( v10 < *(_DWORD *)(v4 + 4) >> 5 );
      }
      *(_DWORD *)(v4 + 4) &= 0x1Fu;
      v20 = *(_QWORD *)(v4 + 8);
      *(_DWORD *)(v4 + 4) |= 32 * v5;
      *(_QWORD *)(v4 + 8) = Heap;
      if ( v20 )
        sub_180037B20(v20, 0LL);
    }
  }
  v15 = *(_DWORD *)(v4 + 4);
  v16 = a1[175] & (-1LL << (v15 & 0x1F));
  v17 = *(_QWORD *)(v4 + 8);
  v18 = (37
       * (BYTE6(v16)
        + 37
        * (BYTE5(v16)
         + 37
         * (BYTE4(v16)
          + 37 * (BYTE3(v16) + 37 * (BYTE2(v16) + 37 * (BYTE1(v16) + 37 * ((unsigned __int8)v16 + 11623883)))))))
       + HIBYTE(v16)) & ((v15 >> 5) - 1);
  a1[174] = *(_QWORD *)(v17 + 8 * v18);
  *(_QWORD *)(v17 + 8 * v18) = a1 + 174;
  ++*(_DWORD *)v4;
  return RtlReleaseSRWLockExclusive(v3);
}
