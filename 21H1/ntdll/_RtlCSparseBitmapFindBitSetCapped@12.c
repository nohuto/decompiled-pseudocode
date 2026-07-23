/*
 * XREFs of _RtlCSparseBitmapFindBitSetCapped@12 @ 0x4B37E029
 * Callers:
 *     _RtlSparseArrayElementAllocated@8 @ 0x4B37E3A6 (_RtlSparseArrayElementAllocated@8.c)
 *     _RtlSparseArrayElementFindCapped@12 @ 0x4B37E3DA (_RtlSparseArrayElementFindCapped@12.c)
 * Callees:
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlFindMostSignificantBit@8 @ 0x4B34ED50 (_RtlFindMostSignificantBit@8.c)
 *     _RtlLengthCurrentClearRunForward@12 @ 0x4B34F5C0 (_RtlLengthCurrentClearRunForward@12.c)
 */

int __fastcall RtlCSparseBitmapFindBitSetCapped(int a1, unsigned int a2, int a3)
{
  int i; // ecx
  unsigned int v4; // edi
  int v5; // esi
  int v6; // eax
  int v7; // ecx
  int v8; // ebx
  int v9; // eax
  int v10; // edx
  int v11; // edi
  int v12; // ecx
  int v13; // ecx
  unsigned int v14; // edi
  int *j; // eax
  unsigned int v16; // ecx
  unsigned int v17; // edi
  int v19; // eax
  int v20; // edi
  int v22[2]; // [esp+10h] [ebp-58h] BYREF
  int *v23; // [esp+18h] [ebp-50h]
  unsigned int v24; // [esp+1Ch] [ebp-4Ch]
  int v25; // [esp+20h] [ebp-48h]
  unsigned int v26; // [esp+24h] [ebp-44h]
  unsigned int v27; // [esp+28h] [ebp-40h]
  int v28; // [esp+2Ch] [ebp-3Ch]
  int v29; // [esp+30h] [ebp-38h]
  unsigned int v30; // [esp+34h] [ebp-34h]
  int v31; // [esp+38h] [ebp-30h]
  int *v32; // [esp+3Ch] [ebp-2Ch]
  int v33; // [esp+40h] [ebp-28h]
  int v34; // [esp+44h] [ebp-24h]
  unsigned int v35; // [esp+48h] [ebp-20h]
  char v36; // [esp+4Fh] [ebp-19h]
  CPPEH_RECORD ms_exc; // [esp+50h] [ebp-18h]

  v27 = a2;
  v34 = a1;
  for ( i = a3; ; a3 = i )
  {
    v26 = a2;
    if ( !i )
      break;
    v4 = a2 & 0x7FFF;
    v24 = v4;
    v5 = i;
    v31 = i;
    v6 = v4 + i;
    if ( i >= 0 )
    {
      if ( v6 <= 0x8000 )
        goto LABEL_9;
      v5 = 0x8000 - v4;
    }
    else
    {
      if ( v6 >= 0 )
        goto LABEL_9;
      v5 = ~v4;
    }
    v31 = v5;
LABEL_9:
    v7 = a3;
    if ( _bittest((const signed __int32 *)(v34 + 32), a2 >> 30) )
    {
      if ( _bittest(*(const signed __int32 **)v34, a2 >> 15) )
      {
        v8 = (int)a2 / 0x8000;
        if ( v5 <= 1 )
          v9 = 1;
        else
          v9 = v5;
        v10 = *(_DWORD *)(v34 + 4) + (v8 << 12);
        v22[0] = v4 + v9;
        v22[1] = v10;
        ms_exc.registration.TryLevel = 0;
        v25 = v4 & 7;
        if ( ((*(char *)((v4 >> 3) + v10) >> v25) & 1) != 0 )
        {
          v11 = 0;
        }
        else if ( v5 <= 0 )
        {
          v30 = -v5;
          v32 = (int *)(v10 + 4 * (v4 >> 5));
          v12 = *v32;
          v23 = v32;
          v28 = v12;
          v33 = v4 & 0x1F;
          v25 = v12 & dword_4B288AA0[v33];
          v13 = v25;
          v33 = 31 - v33;
          v14 = 0;
          v35 = 0;
          v36 = 0;
          for ( j = v32; ; v13 = *j )
          {
            v28 = v13;
            if ( v13 )
            {
              v14 += 31 - RtlFindMostSignificantBit((unsigned int)v13);
              v35 = v14;
              v16 = v30;
              goto LABEL_26;
            }
            v14 += 32;
            v35 = v14;
            v16 = v30;
            if ( v14 >= v30 )
            {
              if ( v14 - v33 >= v30 )
                goto LABEL_26;
              j = v32;
            }
            if ( j == (int *)v10 )
              break;
            v32 = --j;
            v23 = j;
          }
          v36 = 1;
LABEL_26:
          v17 = v14 - v33;
          v35 = v17;
          if ( v17 > v16 )
          {
            v17 = v16;
            v35 = v16;
          }
          v11 = -v17;
        }
        else
        {
          v11 = RtlLengthCurrentClearRunForward(v22, v4, v4 & 7);
        }
        v29 = v11;
        ms_exc.registration.TryLevel = -2;
        if ( (int)abs32(v11) < (int)abs32(v5) )
          return v24 + v11 + (v8 << 15);
        a2 = v27;
        v7 = a3;
      }
    }
    else
    {
      v19 = a2 & 0x3FFFFFFF;
      v5 = a3;
      v20 = (a2 & 0x3FFFFFFF) + a3;
      if ( a3 >= 0 )
      {
        if ( v20 > 0x40000000 )
          v5 = 0x40000000 - v19;
      }
      else if ( v20 < 0 )
      {
        v5 = ~v19;
      }
    }
    a2 += v5;
    v27 = a2;
    i = v7 - v5;
  }
  return -1;
}
