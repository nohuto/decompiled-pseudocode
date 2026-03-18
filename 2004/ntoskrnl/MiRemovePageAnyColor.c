/*
 * XREFs of MiRemovePageAnyColor @ 0x140320B3C
 * Callers:
 *     MiGetFreeOrZeroPageAnyColor @ 0x140320AA4 (MiGetFreeOrZeroPageAnyColor.c)
 * Callees:
 *     MiGetPerfectColorHeadPage @ 0x14031D940 (MiGetPerfectColorHeadPage.c)
 *     MiSlistGetFreePage @ 0x140320DC0 (MiSlistGetFreePage.c)
 */

__int64 __fastcall MiRemovePageAnyColor(__int64 a1, unsigned int a2, __int16 a3)
{
  __int64 v3; // r9
  __int16 v4; // r11
  __int64 v5; // rbx
  _BOOL8 v6; // r14
  unsigned __int64 v7; // rdx
  _QWORD *v8; // rcx
  unsigned int v9; // ebp
  unsigned __int64 v10; // r12
  int v11; // r15d
  unsigned __int64 v12; // r13
  unsigned int v13; // edi
  unsigned int v14; // esi
  unsigned __int64 v15; // rdx
  _DWORD *v16; // r8
  int v17; // r10d
  unsigned int v18; // ecx
  __int64 result; // rax
  unsigned int v20; // r10d
  int v21; // r9d
  unsigned int v22; // r8d
  char v23; // cl
  __int64 v24; // [rsp+30h] [rbp-58h]
  BOOL v27; // [rsp+A8h] [rbp+20h] BYREF
  BOOL v28; // [rsp+ACh] [rbp+24h]

  v3 = a1;
  v4 = a3;
  LODWORD(v5) = a2;
  v6 = (a3 & 2) == 0;
  v7 = *(_QWORD *)(a1 + 16) + 4544 * ((unsigned __int64)a2 >> byte_140C4DC8C);
  if ( (unsigned int)MmNumberOfChannels > 1 )
    v8 = (_QWORD *)(v7
                  + 8
                  * (v6
                   + 2LL * (unsigned __int8)(MiChannelMaximumPowerOf2Mask & ((unsigned int)v5 >> byte_140C4DC8D))
                   + 527));
  else
    v8 = (_QWORD *)(v7 + 4128 + 8 * v6);
  if ( !*v8 )
    return 0LL;
  v9 = dword_140C4DCF8;
  v10 = 0LL;
  v11 = v5;
  v12 = v7 + 16 * (v6 + 252);
  v24 = *(_QWORD *)(v3 + 8 * v6 + 2176);
  v13 = 0;
  v14 = dword_140C4DCF8 + 1;
  while ( 1 )
  {
    while ( 1 )
    {
      v15 = (unsigned int)v5 & v9;
      v16 = (_DWORD *)(*(_QWORD *)(v12 + 8) + 4 * (v15 >> 5));
      if ( (_DWORD *)v10 != v16 )
      {
        v10 = *(_QWORD *)(v12 + 8) + 4 * ((unsigned __int64)((unsigned int)v5 & v9) >> 5);
        v13 = *v16 & (-1 << (v15 & 0x1F));
        if ( (v4 & 0x4000) != 0 )
        {
          v21 = 0;
          v22 = (unsigned __int8)v11 & (unsigned __int8)v9 & 0xF;
          do
          {
            v23 = v22 & 0x1F;
            v22 += 16;
            v21 |= 1 << v23;
          }
          while ( v22 < 0x20 && v22 <= v9 );
          v13 &= ~v21;
          v3 = a1;
        }
        else if ( ((v15 ^ v14) & 0xFFFFFFFFFFFFFFE0uLL) == 0 )
        {
          v13 &= (1 << (v14 & 0x1F)) - 1;
        }
      }
      v17 = v5 & v9 & 0xFFFFFFE0;
      if ( v13 )
        break;
      v20 = v17 + 32;
      if ( v20 >= v14 )
      {
        v10 = 0LL;
        if ( !v11 || v14 != v9 + 1 )
          return 0LL;
        v14 = v11 & v9;
        LODWORD(v5) = v11 & ~v9;
      }
      else
      {
        LODWORD(v5) = v20 + (~v9 & v5);
      }
    }
    _BitScanForward(&v18, v13);
    v27 = v6;
    v28 = v6;
    v5 = v18 + v17 + (~v9 & (unsigned int)v5);
    v13 &= ~(1 << v18);
    result = MiSlistGetFreePage(v3, &v27, (unsigned int)v5);
    if ( result )
      return result;
    result = MiGetPerfectColorHeadPage(a1, v24 + 40 * v5, (unsigned int)v5, (_DWORD *)v6, a3);
    if ( result == 1 )
      break;
    if ( result )
      return result;
    v3 = a1;
    v4 = a3;
  }
  return 1LL;
}
