/*
 * XREFs of RtlCSparseBitmapFindBitSetCapped @ 0x1800053DC
 * Callers:
 *     RtlSparseArrayElementAllocated @ 0x180005380 (RtlSparseArrayElementAllocated.c)
 *     RtlSparseArrayElementFindCapped @ 0x18010F80C (RtlSparseArrayElementFindCapped.c)
 * Callees:
 *     RtlLengthCurrentClearRunForwardEx @ 0x1800ECF78 (RtlLengthCurrentClearRunForwardEx.c)
 */

__int64 __fastcall RtlCSparseBitmapFindBitSetCapped(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // r14
  signed __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  const signed __int64 *v10; // r9
  __int64 v11; // r8
  unsigned __int64 v12; // r12
  const signed __int64 *v13; // r10
  __int64 v14; // rcx
  unsigned int v15; // r11d
  __int64 v16; // rax
  unsigned __int64 v17; // r8
  bool v18; // zf
  __int64 v19; // rcx
  char v20; // dl
  unsigned __int64 v21; // r8
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // [rsp+24h] [rbp-74h]
  _QWORD v27[10]; // [rsp+48h] [rbp-50h] BYREF

  while ( a3 )
  {
    v6 = a2 & 0x7FFF;
    v7 = a3;
    v8 = v6 + a3;
    if ( a3 < 0 )
    {
      v7 = ~v6;
      if ( v8 >= 0 )
        v7 = a3;
    }
    else if ( v8 > 0x8000 )
    {
      v7 = 0x8000 - v6;
    }
    if ( _bittest64((const signed __int64 *)(a1 + 56), a2 >> 30) )
    {
      if ( _bittest64(*(const signed __int64 **)a1, a2 >> 15) )
      {
        v9 = 1LL;
        if ( v7 > 1 )
          v9 = v7;
        v10 = (const signed __int64 *)(*(_QWORD *)(a1 + 8) + (((__int64)a2 / 0x8000) << 12));
        v27[0] = v6 + v9;
        v27[1] = v10;
        if ( _bittest64(v10, v6) )
        {
          v11 = 0LL;
        }
        else if ( v7 <= 0 )
        {
          v12 = -v7;
          v13 = (const signed __int64 *)((char *)v10 + 4 * (v6 >> 5));
          v14 = a2 & 0x1F;
          v15 = *(_DWORD *)v13 & dword_1801272A0[v14];
          v16 = (unsigned int)(31 - v14);
          v26 = 31 - v14;
          v17 = 0LL;
          while ( !v15 )
          {
            v17 += 32LL;
            if ( v17 >= v12 )
            {
              if ( v17 - v16 >= v12 )
                goto LABEL_22;
              v16 = v26;
            }
            if ( v13 == v10 )
              goto LABEL_22;
            v13 = (const signed __int64 *)((char *)v13 - 4);
            v15 = *(_DWORD *)v13;
          }
          v18 = !_BitScanReverse64((unsigned __int64 *)&v19, v15);
          v20 = -1;
          if ( !v18 )
            v20 = v19;
          v17 += (unsigned int)(31 - v20);
LABEL_22:
          v21 = v17 - v26;
          if ( v21 > v12 )
            v21 = -v7;
          v11 = -(__int64)v21;
        }
        else
        {
          v11 = RtlLengthCurrentClearRunForwardEx(v27, a2 & 0x7FFF, 0x8000LL);
        }
        if ( (__int64)abs64(v11) < (__int64)abs64(v7) )
          return v6 + v11 + (((__int64)a2 / 0x8000) << 15);
      }
    }
    else
    {
      v24 = a2 & 0x3FFFFFFF;
      v7 = a3;
      v25 = v24 + a3;
      if ( a3 >= 0 )
      {
        if ( v25 > 0x40000000 )
          v7 = 0x40000000 - v24;
      }
      else
      {
        v7 = ~(unsigned __int64)(unsigned int)v24;
        if ( v25 >= 0 )
          v7 = a3;
      }
    }
    a2 += v7;
    a3 -= v7;
  }
  return -1LL;
}
