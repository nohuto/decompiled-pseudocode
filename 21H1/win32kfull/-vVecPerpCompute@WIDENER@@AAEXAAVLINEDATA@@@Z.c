/*
 * XREFs of ?vVecPerpCompute@WIDENER@@AAEXAAVLINEDATA@@@Z @ 0x2375D8
 * Callers:
 *     ?vecInPerp@WIDENER@@IAE?AVEVECTORFX@@XZ @ 0x2379B6 (-vecInPerp@WIDENER@@IAE-AVEVECTORFX@@XZ.c)
 *     ?vecOutPerp@WIDENER@@IAE?AVEVECTORFX@@XZ @ 0x237A1A (-vecOutPerp@WIDENER@@IAE-AVEVECTORFX@@XZ.c)
 * Callees:
 *     __alldiv @ 0xF91D3 (__alldiv.c)
 *     __allmul @ 0xF91DF (__allmul.c)
 *     ?vVecDrawCompute@WIDENER@@AAEXAAVLINEDATA@@@Z @ 0x23756E (-vVecDrawCompute@WIDENER@@AAEXAAVLINEDATA@@@Z.c)
 */

void __thiscall WIDENER::vVecPerpCompute(WIDENER *this, int **Divisor)
{
  int *v2; // edi
  __int64 v3; // rcx
  int *v4; // eax
  int v5; // edi
  int v6; // edx
  int v7; // edi
  int v8; // edx
  __int64 v9; // kr00_8
  int LowPart; // ebx
  signed __int64 v11; // kr08_8
  unsigned __int64 v12; // rax
  DWORD v13; // edi
  __int64 v14; // rax
  LARGE_INTEGER v15; // rax
  ULONG v16; // eax
  int v17; // eax
  int *v18; // edx
  DWORD v19; // ecx
  int v20; // edi
  int v21; // [esp+10h] [ebp-28h]
  int v22; // [esp+14h] [ebp-24h]
  int *v23; // [esp+20h] [ebp-18h]
  int v24; // [esp+20h] [ebp-18h]
  ULONG v25; // [esp+24h] [ebp-14h] BYREF
  ULONG Remainder; // [esp+28h] [ebp-10h] BYREF
  int *v27; // [esp+2Ch] [ebp-Ch]
  int v28; // [esp+30h] [ebp-8h]
  int v29; // [esp+34h] [ebp-4h]

  if ( (*(_BYTE *)Divisor & 8) == 0 )
    WIDENER::vVecDrawCompute(this, Divisor);
  v2 = Divisor[5];
  v3 = *((_QWORD *)Divisor + 3);
  v4 = Divisor[2];
  v27 = Divisor[4];
  v23 = v2;
  if ( __SPAIR64__((unsigned int)v2, (unsigned int)v27) > v3 )
  {
    v8 = v4[2];
    v28 = *v4;
    v6 = v8 - v28;
    v29 = v4[1];
    v7 = v4[3] - v29;
  }
  else
  {
    v5 = v4[1];
    v28 = *v4;
    v6 = v28 - *(v4 - 2);
    v29 = v5;
    v7 = v5 - *(v4 - 1);
  }
  v22 = v6;
  v28 -= v6 >> 1;
  v29 -= v7 >> 1;
  v21 = v7;
  v9 = __PAIR64__((unsigned int)v23, (unsigned int)v27) + v3;
  v11 = (int)abs32(v6) * __PAIR64__((unsigned int)v23, (unsigned int)v27);
  LowPart = v11;
  v12 = (int)abs32(v7) * __PAIR64__((unsigned int)v23, (unsigned int)v27);
  Remainder = 0;
  v13 = v12;
  v25 = 0;
  v24 = HIDWORD(v12);
  v14 = v9;
  if ( v9 )
  {
    if ( v9 >= 0xFFFFFFFFLL )
    {
      LowPart = v11 / v9;
      v15.QuadPart = __SPAIR64__(v24, v13) / v9;
    }
    else
    {
      if ( v11 < 0 )
        LowPart = -RtlExtendedLargeIntegerDivide((LARGE_INTEGER)-v11, v9, &Remainder).LowPart;
      else
        LowPart = RtlExtendedLargeIntegerDivide((LARGE_INTEGER)v11, v9, &Remainder).LowPart;
      if ( v24 < 0 )
      {
        v13 = -RtlExtendedLargeIntegerDivide((LARGE_INTEGER)-__SPAIR64__(v24, v13), v9, &v25).LowPart;
LABEL_16:
        LODWORD(v14) = v9;
        goto LABEL_17;
      }
      v15.LowPart = RtlExtendedLargeIntegerDivide((LARGE_INTEGER)__PAIR64__(v24, v13), v9, &v25).LowPart;
    }
    v13 = v15.LowPart;
    goto LABEL_16;
  }
LABEL_17:
  v16 = (unsigned int)v14 >> 1;
  if ( Remainder >= v16 )
    ++LowPart;
  if ( v25 >= v16 )
    ++v13;
  if ( v22 < 0 )
    LowPart = -LowPart;
  if ( v21 < 0 )
    v13 = -v13;
  v17 = LowPart + v28;
  v18 = *Divisor;
  v19 = v13 + v29;
  Divisor[15] = (int *)(v13 + v29);
  v20 = v17;
  if ( ((unsigned __int8)v18 & 1) != 0 )
  {
    v17 = -v17;
    Divisor[15] = (int *)-v19;
    v20 = v17;
  }
  *Divisor = (int *)((unsigned int)v18 | 4);
  Divisor[14] = (int *)((v20 + 3 + ((v17 >> 31) & 1)) & 0xFFFFFFF8);
  Divisor[15] = (int *)(((unsigned int)Divisor[15] + ((int)Divisor[15] >> 31) + 4) & 0xFFFFFFF8);
}
