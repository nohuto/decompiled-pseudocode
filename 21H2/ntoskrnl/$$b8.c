/*
 * XREFs of $$b8 @ 0x140A103CC
 * Callers:
 *     KiSwInterruptDispatch @ 0x1403DCD90 (KiSwInterruptDispatch.c)
 *     sub_1403DDFC0 @ 0x1403DDFC0 (sub_1403DDFC0.c)
 *     sub_1403EA6DC @ 0x1403EA6DC (sub_1403EA6DC.c)
 *     sub_1403EB648 @ 0x1403EB648 (sub_1403EB648.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x1409F9010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140A0D0FC @ 0x140A0D0FC (sub_140A0D0FC.c)
 *     sub_140A0F098 @ 0x140A0F098 (sub_140A0F098.c)
 *     sub_140A10D10 @ 0x140A10D10 (sub_140A10D10.c)
 *     sub_140A11830 @ 0x140A11830 (sub_140A11830.c)
 *     sub_140A11EF0 @ 0x140A11EF0 (sub_140A11EF0.c)
 *     sub_140A1CFE4 @ 0x140A1CFE4 (sub_140A1CFE4.c)
 *     sub_140A1DEE4 @ 0x140A1DEE4 (sub_140A1DEE4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall __b8(__int64 a1, __int64 a2)
{
  unsigned __int128 v2; // rax
  int v3; // r11d
  __int64 v5; // r10
  unsigned int v6; // r9d
  __int64 v7; // rcx
  __int64 v8; // rbp
  unsigned __int64 v9; // rdi
  __int64 *v10; // rbx
  unsigned __int64 v11; // r14
  __int64 v12; // r11
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // ecx
  unsigned __int64 v17; // rax
  __int64 v18; // r11
  _UNKNOWN *retaddr; // [rsp+8h] [rbp+0h] BYREF

  *((_QWORD *)&v2 + 1) = a2;
  *(_QWORD *)&v2 = &retaddr;
  v3 = *(_DWORD *)(a1 + 2448);
  if ( (v3 & 0x40000000) == 0 )
  {
    v5 = 0LL;
    while ( 1 )
    {
      v6 = *(_DWORD *)(a1 + 2452);
      *(_QWORD *)&v2 = DWORD2(v2) != 0;
      if ( (_DWORD)v2 == ((v6 >> 21) & 1) || (v3 & 2) == 0 )
        break;
      v7 = *(unsigned int *)(a1 + 2604);
      v8 = *(_QWORD *)(a1 + 2072);
      v9 = (unsigned __int64)(unsigned int)(*(_DWORD *)(a1 + 2020) - v7) >> 3;
      v10 = (__int64 *)(a1 + v7);
      v11 = a1 + v7 + 8 * v9;
      if ( DWORD2(v2) )
      {
        v17 = __rdtsc();
        v2 = (__ROR8__(v17, 3) ^ v17) * (unsigned __int128)0x7010008004002001uLL;
        v18 = v2 ^ *((_QWORD *)&v2 + 1);
        *(_QWORD *)(a1 + 2608) = v2 ^ *((_QWORD *)&v2 + 1);
        if ( (unsigned __int64)v10 > v11 )
          v9 = 0LL;
        if ( v9 )
        {
          do
          {
            ++v5;
            *(_QWORD *)&v2 = v18 ^ *v10;
            *((_QWORD *)&v2 + 1) = v8 ^ *v10;
            *v10 = v2;
            v18 = (*((_QWORD *)&v2 + 1) + __ROR8__(v18, v18 & 0x3F)) ^ 0xEFFLL;
            ++v10;
          }
          while ( v5 != v9 );
          v6 = *(_DWORD *)(a1 + 2452);
        }
        *(_QWORD *)(a1 + 2616) = v18;
        *(_DWORD *)(a1 + 2452) = v6 | 0x200000;
        return v2;
      }
      v12 = *(_QWORD *)(a1 + 2608);
      v13 = 0LL;
      if ( (unsigned __int64)v10 > v11 )
        v9 = 0LL;
      if ( v9 )
      {
        do
        {
          *v10 ^= v12;
          ++v13;
          v14 = *v10++;
          v12 = ((v8 ^ v14) + __ROR8__(v12, v12 & 0x3F)) ^ 0xEFF;
        }
        while ( v13 != v9 );
        v6 = *(_DWORD *)(a1 + 2452);
      }
      *(_DWORD *)(a1 + 2452) = v6 & 0xFFDFFFFF;
      if ( v12 != *(_QWORD *)(a1 + 2616) )
      {
        v15 = *(_QWORD *)(a1 + 1424);
        v16 = *(_DWORD *)(a1 + 2020);
        *(_QWORD *)v15 = a1;
        *(_DWORD *)(v15 + 16) = v16;
        *(_QWORD *)&v2 = *(unsigned int *)(a1 + 2296);
        if ( !(_DWORD)v2 )
        {
          *(_QWORD *)(*(_QWORD *)(a1 + 1424) + 24LL) = v12 ^ *(_QWORD *)(a1 + 2616);
          *(_QWORD *)&v2 = *(unsigned int *)(a1 + 2296);
          if ( !(_DWORD)v2 )
          {
            *(_QWORD *)(a1 + 2312) = 0LL;
            *(_QWORD *)&v2 = a1 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(a1 + 2320) = 256LL;
            *(_QWORD *)(a1 + 2304) = a1 - 0x5C5FC0A76E374B18LL;
            DWORD2(v2) = 0;
            *(_QWORD *)(a1 + 2328) = v12;
            *(_DWORD *)(a1 + 2296) = 1;
            v3 = *(_DWORD *)(a1 + 2448);
            if ( (v3 & 0x40000000) == 0 )
              continue;
          }
        }
      }
      return v2;
    }
  }
  return v2;
}
