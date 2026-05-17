/*
 * XREFs of _RtlFindClearBitsAndSet@12 @ 0x4B2E1990
 * Callers:
 *     _LdrpAcquireTlsIndex@8 @ 0x4B2E185E (_LdrpAcquireTlsIndex@8.c)
 * Callees:
 *     _RtlSetBits@12 @ 0x4B2E1AA0 (_RtlSetBits@12.c)
 */

unsigned int __stdcall RtlFindClearBitsAndSet(unsigned int *a1, unsigned int a2, unsigned int a3)
{
  unsigned int *v3; // eax
  unsigned int v4; // edx
  unsigned int v5; // esi
  unsigned int v6; // edi
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  unsigned int *v9; // esi
  int v10; // edi
  unsigned int v11; // eax
  unsigned int v12; // ecx
  unsigned int v14; // ebx
  int v15; // eax
  unsigned int v16; // edi
  bool v17; // zf
  int v18; // ecx
  int v19; // ecx
  char v20; // dl
  unsigned int *v21; // eax
  unsigned int v22; // edx
  unsigned int v23; // eax
  int v24; // ecx
  int v25; // eax
  unsigned int v26; // edx
  unsigned int v27; // eax
  int v28; // ecx
  int v29; // eax
  unsigned int v30; // ebx
  unsigned int v31; // edx
  unsigned int v32; // ecx
  bool v33; // cf
  int v34; // ecx
  int v35; // eax
  unsigned int v36; // ebx
  unsigned int *v37; // [esp+14h] [ebp-18h]
  unsigned int v38; // [esp+18h] [ebp-14h]
  unsigned int v39; // [esp+1Ch] [ebp-10h]
  unsigned int v40; // [esp+1Ch] [ebp-10h]
  unsigned int v41; // [esp+20h] [ebp-Ch]
  unsigned int v42; // [esp+28h] [ebp-4h]

  v3 = a1;
  v4 = a2;
  v5 = *a1;
  v6 = a1[1];
  v7 = a3 < *a1 ? a3 : 0;
  v8 = *a1 - 1;
  v39 = v7;
  v42 = v6;
  if ( a2 )
  {
    while ( v8 - v7 + 1 < v4 )
    {
      v12 = -1;
LABEL_19:
      if ( !v39 )
        goto LABEL_10;
      v36 = v4 + a3;
      if ( v4 + a3 > v5 )
        v36 = v5;
      v8 = v36 - 1;
      v7 = 0;
      v39 = 0;
    }
    v41 = v8 - v4 + 1;
    v38 = v6 + 4 * (v41 >> 5);
    v9 = (unsigned int *)(v6 + 4 * (v39 >> 5));
    v10 = ((1 << (v7 & 0x1F)) - 1) | *v9;
    v4 = a2;
    if ( a2 > 0x3F )
    {
      v14 = v38;
      if ( (v41 & 0x1F) != 0 )
        v14 = v38 + 4;
      if ( v10 )
      {
        if ( *++v9 )
        {
          v16 = v41;
          goto LABEL_36;
        }
        v17 = !_BitScanReverse((unsigned int *)&v18, v10);
        if ( v17 )
          v15 = 32;
        else
          v15 = 31 - v18;
      }
      else
      {
        v15 = 0;
      }
      v16 = v41;
      while ( 1 )
      {
        v4 = a2;
        v12 = 32 * ((int)((int)v9 - a1[1]) >> 2) - v15;
        if ( v12 > v16 )
          goto LABEL_21;
        v20 = a2 - v15;
        v21 = &v9[(a2 - v15) >> 5];
        while ( ++v9 != v21 )
        {
          if ( *v9 )
            goto LABEL_35;
        }
        v22 = v20 & 0x1F;
        if ( !v22 )
          break;
        v17 = !_BitScanForward(&v23, *v9);
        if ( v17 )
          v23 = 32;
        if ( v23 >= v22 )
          break;
LABEL_35:
        v4 = a2;
        do
        {
LABEL_36:
          if ( (unsigned int)v9 > v14 )
            goto LABEL_21;
          ++v9;
        }
        while ( *v9 );
        v17 = !_BitScanReverse((unsigned int *)&v19, *(v9 - 1));
        if ( v17 )
          v15 = 32;
        else
          v15 = 31 - v19;
      }
LABEL_49:
      v6 = a1[1];
      goto LABEL_9;
    }
    if ( a2 < 0x20 )
    {
      if ( a2 > 1 )
      {
        v28 = 0;
        v37 = (unsigned int *)(v42 + 4 * (v8 >> 5));
        while ( v10 != -1 )
        {
LABEL_72:
          v17 = !_BitScanForward((unsigned int *)&v29, v10);
          if ( v17 )
            v29 = 32;
          if ( v28 + v29 >= v4 )
          {
            v34 = -v28;
LABEL_86:
            v6 = a1[1];
            v12 = 32 * ((int)((int)v9 - v42) >> 2) + v34;
            goto LABEL_8;
          }
          v30 = a2;
          v31 = ~v10;
          while ( 1 )
          {
            v32 = v30 >> 1;
            v31 &= v31 >> (v30 >> 1);
            if ( !v31 )
              break;
            v33 = v30 == v32;
            v30 -= v32;
            if ( v33 || v30 == 1 )
            {
              _BitScanForward((unsigned int *)&v34, v31);
              v4 = a2;
              goto LABEL_86;
            }
          }
          if ( v9 == v37 )
          {
            v6 = a1[1];
            v12 = -1;
            goto LABEL_24;
          }
          v17 = !_BitScanReverse((unsigned int *)&v35, v10);
          if ( v17 )
            v28 = 32;
          else
            v28 = 31 - v35;
          v4 = a2;
          v10 = *++v9;
        }
        while ( (unsigned int)++v9 <= v38 )
        {
          v10 = *v9;
          if ( *v9 != -1 )
          {
            v28 = 0;
            goto LABEL_72;
          }
        }
      }
      else
      {
        if ( v10 != -1 )
        {
LABEL_7:
          _BitScanForward(&v11, ~v10);
          v6 = a1[1];
          v12 = v11 + 32 * ((int)((int)v9 - v42) >> 2);
LABEL_8:
          if ( v12 <= v41 )
          {
LABEL_9:
            if ( v12 != -1 )
            {
LABEL_10:
              v4 = a2;
              v3 = a1;
              goto LABEL_11;
            }
LABEL_24:
            v4 = a2;
            goto LABEL_18;
          }
LABEL_17:
          v12 = -1;
LABEL_18:
          v5 = *a1;
          goto LABEL_19;
        }
        while ( (unsigned int)++v9 <= v38 )
        {
          v10 = *v9;
          if ( *v9 != -1 )
            goto LABEL_7;
        }
      }
LABEL_21:
      v6 = a1[1];
      v12 = -1;
      goto LABEL_18;
    }
    while ( 1 )
    {
      while ( v10 < 0 )
      {
        if ( (unsigned int)++v9 > v38 )
          goto LABEL_21;
        v10 = *v9;
      }
      v17 = !_BitScanReverse((unsigned int *)&v24, v10);
      if ( v17 )
        v25 = 32;
      else
        v25 = 31 - v24;
      v6 = a1[1];
      v12 = 32 * (((int)((int)v9 - v42) >> 2) + 1) - v25;
      if ( v12 > v41 )
        goto LABEL_17;
      v26 = v4 - v25;
      if ( !v26 )
        goto LABEL_9;
      v10 = *++v9;
      if ( v26 >= 0x20 )
      {
        if ( v10 )
          goto LABEL_66;
        v26 -= 32;
        if ( !v26 )
          goto LABEL_49;
        v10 = *++v9;
      }
      v17 = !_BitScanForward(&v27, v10);
      if ( v17 )
        v27 = 32;
      if ( v27 >= v26 )
        goto LABEL_49;
LABEL_66:
      v4 = a2;
    }
  }
  v12 = v7 & 0xFFFFFFF8;
LABEL_11:
  v40 = v12;
  if ( v12 != -1 )
  {
    RtlSetBits(v3, v12, v4);
    return v40;
  }
  return v12;
}
