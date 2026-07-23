/*
 * XREFs of KiAssignFixedNodes @ 0x140A929C4
 * Callers:
 *     KiPerformGroupConfiguration @ 0x140A4EDCC (KiPerformGroupConfiguration.c)
 * Callees:
 *     <none>
 */

char __fastcall KiAssignFixedNodes(__int64 *a1, __int64 a2, unsigned __int16 a3, char a4, int *a5, __m128 *a6)
{
  unsigned __int16 v7; // r15
  __int64 v8; // rcx
  int v9; // eax
  __m128 v10; // xmm0
  int *v11; // rdi
  __int64 *v12; // rcx
  __int64 v13; // rax
  unsigned __int16 i; // di
  __int64 v15; // rax
  char v16; // bp
  unsigned int v17; // esi
  unsigned __int16 v18; // cx
  unsigned __int16 v19; // dx
  __m128 *v20; // r11
  int *v21; // r9
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rax

  v7 = a2;
  v8 = 20LL;
  v9 = KiMaximumGroupSize;
  v10 = _mm_movelh_ps((__m128)0LL, (__m128)0LL);
  *a6 = v10;
  a6[1] = v10;
  a6[2].m128_u64[0] = 0LL;
  v11 = a5;
  while ( v8 )
  {
    *v11++ = v9;
    --v8;
  }
  if ( (_WORD)a2 )
  {
    v12 = a1;
    a2 = (unsigned __int16)a2;
    do
    {
      v13 = *v12++;
      *(_WORD *)(v13 + 144) = -1;
      *(_BYTE *)(v13 + 181) &= ~2u;
      --a2;
    }
    while ( a2 );
  }
  for ( i = 0; i < v7; ++i )
  {
    v15 = a1[i];
    v16 = *(_BYTE *)(v15 + 181);
    if ( (v16 & 8) != 0 )
    {
      if ( i >= a3 )
      {
        v17 = KiMaximumGroupSize;
        v18 = 20;
        v19 = 0;
        if ( !a3 )
          goto LABEL_19;
        v20 = a6;
        v21 = a5;
        do
        {
          if ( *v21 >= (unsigned int)*(unsigned __int8 *)(v15 + 180) && v20->m128_u16[0] < v17 )
          {
            v17 = v20->m128_u16[0];
            v18 = v19;
          }
          ++v19;
          ++v21;
          v20 = (__m128 *)((char *)v20 + 2);
        }
        while ( v19 < a3 );
        if ( v18 == 20 )
        {
LABEL_19:
          if ( !a4 )
            return 0;
          if ( !*(_WORD *)(v15 + 146) )
          {
            if ( (v16 & 2) == 0 )
            {
              do
                --i;
              while ( (*(_BYTE *)(a1[i] + 181) & 2) == 0 );
            }
            v23 = a1[i];
            v24 = *(unsigned __int16 *)(v23 + 144);
            *(_WORD *)(v23 + 144) = -1;
            *(_BYTE *)(v23 + 181) &= ~2u;
            --a6->m128_i16[v24];
            a5[v24] += *(unsigned __int8 *)(v23 + 180);
          }
        }
        else
        {
          *(_WORD *)(v15 + 144) = v18;
          *(_BYTE *)(v15 + 181) |= 2u;
          v22 = *(unsigned __int8 *)(v15 + 180);
          ++a6->m128_i16[v18];
          a5[v18] -= v22;
        }
      }
      else
      {
        ++a6->m128_i16[i];
        *(_WORD *)(v15 + 144) = i;
        *(_BYTE *)(v15 + 181) |= 2u;
        a5[i] -= *(unsigned __int8 *)(v15 + 180);
      }
    }
  }
  return 1;
}
