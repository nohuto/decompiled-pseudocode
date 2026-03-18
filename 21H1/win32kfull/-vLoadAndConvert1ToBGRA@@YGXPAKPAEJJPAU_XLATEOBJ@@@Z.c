/*
 * XREFs of ?vLoadAndConvert1ToBGRA@@YGXPAKPAEJJPAU_XLATEOBJ@@@Z @ 0x22C07E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vLoadAndConvert1ToBGRA(unsigned int *a1, unsigned __int8 *a2, int a3, int a4, struct _XLATEOBJ *a5)
{
  int v5; // ecx
  unsigned __int8 *v6; // ebx
  int v7; // edi
  int v8; // eax
  unsigned int *v9; // ebx
  char v10; // cl
  unsigned int v11; // edx
  unsigned __int8 *v12; // eax
  unsigned int v13; // edi
  ULONG v14; // ecx
  unsigned int v15; // edx
  unsigned int v16; // edx
  ULONG v17; // ecx
  unsigned int v18; // edx
  ULONG v19; // ecx
  unsigned int v20; // edx
  ULONG v21; // ecx
  unsigned int v22; // edx
  ULONG v23; // ecx
  unsigned int v24; // edx
  ULONG v25; // ecx
  unsigned int v26; // edx
  ULONG v27; // ecx
  unsigned int v28; // edi
  ULONG v29; // ecx
  bool v30; // zf
  int v31; // edi
  unsigned int *v32; // eax
  char v33; // cl
  unsigned int v34; // edx
  ULONG cEntries; // [esp+Ch] [ebp+8h]
  unsigned int *v36; // [esp+Ch] [ebp+8h]
  unsigned int *v37; // [esp+Ch] [ebp+8h]
  unsigned __int8 *v38; // [esp+10h] [ebp+Ch]
  ULONG v39; // [esp+10h] [ebp+Ch]
  int v40; // [esp+14h] [ebp+10h]

  if ( (a5->flXlate & 2) != 0 )
  {
    v5 = a4;
    v6 = &a2[a3 >> 3];
    v38 = v6;
    v7 = -(a3 & 7) & 7;
    if ( a4 < v7 )
      v7 = a4;
    if ( v7 )
    {
      v8 = *v6;
      v38 = v6 + 1;
      v9 = a1;
      a4 -= v7;
      v10 = 7 - (a3 & 7);
      v40 = (unsigned __int8)v8;
      do
      {
        --v7;
        v11 = (v8 & (1 << v10)) >> v10;
        cEntries = a5->cEntries;
        if ( v11 > cEntries )
          v11 %= cEntries;
        *v9++ = *(&a5[3].iUniq + v11) | 0xFF000000;
        v8 = v40;
        --v10;
      }
      while ( v7 );
      v5 = a4;
    }
    else
    {
      v9 = a1;
    }
    if ( v5 < 8 )
    {
      v12 = v38;
    }
    else
    {
      v36 = (unsigned int *)((unsigned int)v5 >> 3);
      v12 = v38;
      a4 = -8 * ((unsigned int)v5 >> 3) + v5;
      do
      {
        v13 = *v12;
        v14 = a5->cEntries;
        v15 = v13 >> 7;
        if ( v13 >> 7 > v14 )
          v15 %= v14;
        *v9 = *(&a5[3].iUniq + v15) | 0xFF000000;
        v16 = (v13 >> 6) & 1;
        v17 = a5->cEntries;
        if ( v16 > v17 )
          v16 %= v17;
        v9[1] = *(&a5[3].iUniq + v16) | 0xFF000000;
        v18 = (v13 >> 5) & 1;
        v19 = a5->cEntries;
        if ( v18 > v19 )
          v18 %= v19;
        v9[2] = *(&a5[3].iUniq + v18) | 0xFF000000;
        v20 = (v13 >> 4) & 1;
        v21 = a5->cEntries;
        if ( v20 > v21 )
          v20 %= v21;
        v9[3] = *(&a5[3].iUniq + v20) | 0xFF000000;
        v22 = (v13 >> 3) & 1;
        v23 = a5->cEntries;
        if ( v22 > v23 )
          v22 %= v23;
        v9[4] = *(&a5[3].iUniq + v22) | 0xFF000000;
        v24 = (v13 >> 2) & 1;
        v25 = a5->cEntries;
        if ( v24 > v25 )
          v24 %= v25;
        v9[5] = *(&a5[3].iUniq + v24) | 0xFF000000;
        v26 = (v13 >> 1) & 1;
        v27 = a5->cEntries;
        if ( v26 > v27 )
          v26 %= v27;
        v28 = v13 & 1;
        v9[6] = *(&a5[3].iUniq + v26) | 0xFF000000;
        v29 = a5->cEntries;
        if ( v28 > v29 )
          v28 %= v29;
        v9[7] = *(&a5[3].iUniq + v28) | 0xFF000000;
        v9 += 8;
        v12 = v38 + 1;
        v30 = v36 == (unsigned int *)1;
        v36 = (unsigned int *)((char *)v36 - 1);
        ++v38;
      }
      while ( !v30 );
      v5 = a4;
    }
    if ( v5 )
    {
      v31 = a4;
      v32 = (unsigned int *)*v12;
      v37 = v32;
      v33 = 7;
      do
      {
        v34 = (int)((unsigned int)v32 & (1 << v33)) >> v33;
        v39 = a5->cEntries;
        if ( v34 > v39 )
          v34 %= v39;
        *v9++ = *(&a5[3].iUniq + v34) | 0xFF000000;
        v32 = v37;
        --v33;
        --v31;
      }
      while ( v31 );
    }
  }
}
