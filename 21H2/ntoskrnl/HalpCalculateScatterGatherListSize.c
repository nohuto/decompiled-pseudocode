/*
 * XREFs of HalpCalculateScatterGatherListSize @ 0x14020B700
 * Callers:
 *     HalBuildScatterGatherListV2 @ 0x14020B440 (HalBuildScatterGatherListV2.c)
 *     HalCalculateScatterGatherListSizeV2 @ 0x140381D50 (HalCalculateScatterGatherListSizeV2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpCalculateScatterGatherListSize(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        _DWORD *a6,
        int *a7)
{
  __int64 v8; // rbx
  int v9; // ecx
  int v10; // ebp
  int v11; // eax
  int v12; // esi
  __int16 v13; // r9
  int v14; // eax
  unsigned int v15; // r8d
  int v16; // r9d
  unsigned int v17; // r10d
  unsigned int v18; // ecx
  int v19; // edi
  bool v20; // cc
  int v21; // edx
  int v22; // edi
  unsigned int v23; // ecx
  unsigned __int64 v24; // rax
  bool v25; // cc
  unsigned int v26; // edx
  unsigned int v28; // esi
  bool v29; // cc

  v8 = a4;
  v9 = *(_DWORD *)(a1 + 148);
  v10 = 0;
  if ( v9 == 2 )
  {
    v11 = 2;
  }
  else
  {
    v11 = -1;
    if ( v9 == 3 )
      v11 = 3;
  }
  if ( v11 == 2 )
  {
    v12 = 1;
  }
  else
  {
    v12 = HalpCoreDmaAlignment;
    if ( *(_BYTE *)(a1 + 437) )
      v12 = 1;
  }
  v13 = a3;
  if ( a2 )
  {
    v14 = 0;
    v15 = *((_DWORD *)a2 + 8) + *((_DWORD *)a2 + 10) + *((_DWORD *)a2 + 11) - a3;
    v16 = v13 & 0xFFF;
    v17 = v15;
    if ( v15 < (unsigned int)v8 )
    {
      while ( 1 )
      {
        a2 = (__int64 *)*a2;
        if ( !a2 )
          goto LABEL_12;
        v18 = (v16 + v17 + 4095) >> 12;
        v19 = v12 - 1;
        v14 += v18;
        if ( ((v12 - 1) & v16) != 0 )
          break;
        v20 = v18 <= 1;
        if ( v18 != 1 )
          goto LABEL_28;
        if ( (v19 & v17) != 0 )
          goto LABEL_30;
LABEL_11:
        v17 = *((_DWORD *)a2 + 10);
        v15 += v17;
        v16 = *((_DWORD *)a2 + 11);
        if ( v15 >= (unsigned int)v8 )
          goto LABEL_12;
      }
      ++v10;
      v20 = v18 <= 1;
LABEL_28:
      if ( v20 || (v19 & (v16 + v17)) == 0 )
        goto LABEL_11;
LABEL_30:
      ++v10;
      goto LABEL_11;
    }
LABEL_12:
    if ( v15 + 4096 < v16 + (int)v8 )
      return 3221225507LL;
    v21 = v12 - 1;
    v22 = v8 + v17 + v16 - v15;
    v23 = (unsigned int)(v22 + 4095) >> 12;
    LODWORD(v24) = v23 + v14;
    if ( ((v12 - 1) & v16) != 0 )
    {
      ++v10;
      v25 = v23 <= 1;
    }
    else
    {
      v25 = v23 <= 1;
      if ( v23 == 1 )
      {
        if ( (((_DWORD)v8 + v17 - v15) & v21) == 0 )
          goto LABEL_16;
        goto LABEL_27;
      }
    }
    if ( !v25 && (v21 & v22) != 0 )
LABEL_27:
      ++v10;
  }
  else
  {
    v24 = (v8 + (unsigned __int64)(a3 & 0xFFF) + 4095) >> 12;
    v28 = v12 - 1;
    if ( (v28 & (unsigned int)a3) != 0 )
    {
      v10 = 1;
      v29 = (unsigned int)v24 <= 1;
    }
    else
    {
      v29 = (unsigned int)v24 <= 1;
      if ( (_DWORD)v24 == 1 )
      {
        if ( (v28 & (unsigned int)v8) != 0 )
          v10 = 1;
        goto LABEL_16;
      }
    }
    if ( !v29 && ((v8 + a3) & v28) != 0 )
      goto LABEL_27;
  }
LABEL_16:
  if ( (unsigned int)v24 > *(_DWORD *)(a1 + 224) )
    return 3221225626LL;
  v26 = 24 * v24 + 16;
  if ( *(_BYTE *)(a1 + 432) || !*(_BYTE *)(a1 + 437) )
  {
    v26 = 24 * v24 + 64;
    if ( v26 < 0xA0 )
      v26 = 160;
  }
  *a5 = v26;
  if ( a6 )
    *a6 = v24;
  if ( a7 )
    *a7 = v10;
  return 0LL;
}
