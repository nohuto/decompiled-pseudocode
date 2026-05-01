/*
 * XREFs of sub_18000C860 @ 0x18000C860
 * Callers:
 *     sub_18000B9A8 @ 0x18000B9A8 (sub_18000B9A8.c)
 * Callees:
 *     sub_180005E50 @ 0x180005E50 (sub_180005E50.c)
 *     sub_18000C6B0 @ 0x18000C6B0 (sub_18000C6B0.c)
 *     sub_18000C7E0 @ 0x18000C7E0 (sub_18000C7E0.c)
 *     sub_18000CA8C @ 0x18000CA8C (sub_18000CA8C.c)
 *     sub_18000CC4C @ 0x18000CC4C (sub_18000CC4C.c)
 *     sub_18000D7E8 @ 0x18000D7E8 (sub_18000D7E8.c)
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_18000C860(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _QWORD *a5)
{
  _QWORD *Heap; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  int v13; // edi
  __int64 v14; // r8
  __int64 v16; // rdx
  __int64 v17; // [rsp+20h] [rbp-38h]

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x5C8uLL);
  v10 = Heap;
  if ( Heap )
  {
    memset(Heap, 0, 0x5C8uLL);
    v10[6] = a1;
    if ( _InterlockedIncrement64((volatile signed __int64 *)a2) <= 1 )
      __fastfail(0xEu);
    v10[7] = a2;
    v10[177] = v10 + 176;
    v10[176] = v10 + 176;
    v17 = *(_QWORD *)(a3 + 544);
    *v10 = 0LL;
    v10[3] = 0LL;
    v10[4] = v17;
    v10[2] = 1LL;
    v10[5] = 0LL;
    v10[1] = HIBYTE(v17)
           + 37
           * (BYTE6(v17)
            + 37
            * (BYTE5(v17)
             + 37
             * (BYTE4(v17)
              + 37 * (BYTE3(v17) + 37 * (BYTE2(v17) + 37 * (BYTE1(v17) + 37 * ((unsigned __int8)v17 + 11623883LL)))))));
    sub_18000D7E8(a4 & 1, a3, v10 + 8);
    v11 = v10 + 139;
    v12 = 2LL;
    do
    {
      v11[2] = 0LL;
      v11[1] = v11;
      *v11 = v11;
      v11 += 3;
      --v12;
    }
    while ( v12 );
    v13 = sub_18000CA8C(a2 + 144, (unsigned int)++*(_DWORD *)(a2 + 192));
    if ( v13 >= 0 )
      v13 = 0;
    if ( v13 >= 0 )
    {
      v13 = sub_18000C6B0((__int64)v10);
      if ( v13 >= 0 )
      {
        if ( (a4 & 1) != 0 )
          *((_DWORD *)v10 + 311) |= 0x180u;
        v13 = sub_18000C7E0((__int64)v10, (__int64)(v10 + 150));
        if ( v13 >= 0 )
        {
          v13 = sub_18000CC4C(a1 + 1768, v10 + 8, a4);
          if ( v13 >= 0 )
          {
            v13 = TpAllocWork(v10 + 173, &sub_18001F8F0, v10, 0LL);
            if ( v13 >= 0 )
            {
              v13 = 0;
              *a5 = v10;
              v10 = 0LL;
            }
          }
        }
      }
    }
    if ( v10 )
    {
      v16 = v10[150];
      if ( v16 )
        sub_180005E50((__int64)v10, v16, v14);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v13;
}
