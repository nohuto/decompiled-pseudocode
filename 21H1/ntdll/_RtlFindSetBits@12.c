/*
 * XREFs of _RtlFindSetBits@12 @ 0x4B34EEF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __stdcall RtlFindSetBits(unsigned int *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // edx
  unsigned int v4; // edi
  unsigned int v5; // esi
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  unsigned int v8; // ecx
  _DWORD *v10; // esi
  signed int v11; // edi
  unsigned int v12; // ebx
  int v13; // eax
  bool v14; // zf
  int v15; // ecx
  int v16; // ecx
  unsigned int v17; // edx
  _DWORD *v18; // edi
  unsigned int v19; // edx
  unsigned int v20; // eax
  unsigned int v21; // ebx
  int v22; // ecx
  int v23; // eax
  unsigned int v24; // edx
  unsigned int v25; // eax
  int v26; // ecx
  int v27; // eax
  unsigned int v28; // ebx
  unsigned int v29; // edx
  unsigned int v30; // ecx
  bool v31; // cf
  int v32; // ecx
  int v33; // eax
  _DWORD *v34; // ecx
  unsigned int v35; // eax
  _DWORD *v36; // [esp+14h] [ebp-18h]
  unsigned int v37; // [esp+18h] [ebp-14h]
  unsigned int v38; // [esp+1Ch] [ebp-10h]
  unsigned int v39; // [esp+20h] [ebp-Ch]
  unsigned int v40; // [esp+28h] [ebp-4h]

  v3 = a2;
  v4 = *a1;
  v5 = a1[1];
  v6 = a3 < *a1 ? a3 : 0;
  v7 = *a1 - 1;
  v37 = v6;
  v40 = v5;
  if ( !a2 )
    return v6 & 0xFFFFFFF8;
  while ( 2 )
  {
    if ( v7 - v6 + 1 < v3 )
    {
      v8 = -1;
      goto LABEL_33;
    }
    v38 = v7 - v3 + 1;
    v39 = v5 + 4 * (v38 >> 5);
    v10 = (_DWORD *)(v5 + 4 * (v37 >> 5));
    v11 = ((1 << (v6 & 0x1F)) - 1) | ~*v10;
    v3 = a2;
    if ( a2 > 0x3F )
    {
      v12 = v39;
      if ( (v38 & 0x1F) != 0 )
        v12 = v39 + 4;
      if ( v11 )
      {
        if ( *++v10 != -1 )
          goto LABEL_16;
        v14 = !_BitScanReverse((unsigned int *)&v15, v11);
        if ( v14 )
          v13 = 32;
        else
          v13 = 31 - v15;
      }
      else
      {
        v13 = 0;
      }
LABEL_21:
      v8 = 32 * ((int)((int)v10 - v40) >> 2) - v13;
      if ( v8 <= v38 )
      {
        v17 = v3 - v13;
        v18 = &v10[v17 >> 5];
        while ( ++v10 != v18 )
        {
          if ( *v10 != -1 )
            goto LABEL_15;
        }
        v19 = v17 & 0x1F;
        if ( !v19 )
          goto LABEL_29;
        v14 = !_BitScanForward(&v20, ~*v10);
        if ( v14 )
          v20 = 32;
        if ( v20 >= v19 )
          goto LABEL_29;
LABEL_15:
        v3 = a2;
LABEL_16:
        while ( (unsigned int)v10 <= v12 )
        {
          if ( *++v10 == -1 )
          {
            v14 = !_BitScanReverse((unsigned int *)&v16, ~*(v10 - 1));
            if ( v14 )
              v13 = 32;
            else
              v13 = 31 - v16;
            goto LABEL_21;
          }
        }
      }
      goto LABEL_37;
    }
    if ( a2 >= 0x20 )
    {
      while ( 1 )
      {
        while ( v11 < 0 )
        {
          if ( (unsigned int)++v10 > v39 )
            goto LABEL_37;
          v11 = ~*v10;
        }
        v14 = !_BitScanReverse((unsigned int *)&v22, v11);
        if ( v14 )
          v23 = 32;
        else
          v23 = 31 - v22;
        v8 = 32 * (((int)((int)v10 - v40) >> 2) + 1) - v23;
        if ( v8 > v38 )
          goto LABEL_37;
        v24 = v3 - v23;
        if ( !v24 )
          goto LABEL_29;
        v11 = ~*++v10;
        if ( v24 >= 0x20 )
        {
          if ( *v10 != -1 )
            goto LABEL_55;
          v24 -= 32;
          if ( !v24 )
            goto LABEL_29;
          v11 = ~*++v10;
        }
        v14 = !_BitScanForward(&v25, v11);
        if ( v14 )
          v25 = 32;
        if ( v25 >= v24 )
        {
LABEL_29:
          v5 = a1[1];
          goto LABEL_30;
        }
LABEL_55:
        v3 = a2;
      }
    }
    if ( a2 <= 1 )
    {
      if ( v11 == -1 )
      {
        while ( (unsigned int)++v10 <= v39 )
        {
          v11 = ~*v10;
          if ( *v10 )
            goto LABEL_82;
        }
LABEL_37:
        v5 = a1[1];
        v8 = -1;
        goto LABEL_32;
      }
LABEL_82:
      v34 = v10;
      v5 = a1[1];
      _BitScanForward(&v35, ~v11);
      v8 = v35 + 32 * ((int)((int)v34 - v40) >> 2);
LABEL_77:
      if ( v8 > v38 )
      {
        v8 = -1;
        goto LABEL_32;
      }
LABEL_30:
      if ( v8 == -1 )
        goto LABEL_31;
    }
    else
    {
      v26 = 0;
      v36 = (_DWORD *)(v40 + 4 * (v7 >> 5));
      while ( 1 )
      {
        if ( v11 == -1 )
        {
          do
          {
            if ( (unsigned int)++v10 > v39 )
              goto LABEL_37;
            v11 = ~*v10;
          }
          while ( !*v10 );
          v26 = 0;
        }
        v14 = !_BitScanForward((unsigned int *)&v27, v11);
        if ( v14 )
          v27 = 32;
        if ( v26 + v27 >= v3 )
        {
          v32 = -v26;
LABEL_76:
          v8 = 32 * ((int)((int)v10 - v40) >> 2) + v32;
          v5 = a1[1];
          goto LABEL_77;
        }
        v28 = a2;
        v29 = ~v11;
        while ( 1 )
        {
          v30 = v28 >> 1;
          v29 &= v29 >> (v28 >> 1);
          if ( !v29 )
            break;
          v31 = v28 == v30;
          v28 -= v30;
          if ( v31 || v28 == 1 )
          {
            _BitScanForward((unsigned int *)&v32, v29);
            v3 = a2;
            goto LABEL_76;
          }
        }
        if ( v10 == v36 )
          break;
        v14 = !_BitScanReverse((unsigned int *)&v33, v11);
        if ( v14 )
          v26 = 32;
        else
          v26 = 31 - v33;
        v3 = a2;
        v11 = ~*++v10;
      }
      v5 = a1[1];
      v8 = -1;
LABEL_31:
      v3 = a2;
LABEL_32:
      v4 = *a1;
LABEL_33:
      if ( v37 )
      {
        v21 = v3 + a3;
        if ( v3 + a3 > v4 )
          v21 = v4;
        v7 = v21 - 1;
        v6 = 0;
        v37 = 0;
        continue;
      }
    }
    return v8;
  }
}
