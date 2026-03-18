/*
 * XREFs of _EncodeRLE4@20 @ 0x23486D
 * Callers:
 *     ?GreGetDIBitsInternalWorker@@YGHKAAVDCOBJ@@AAVPDEVOBJ@@AAVSURFREF@@AAVXEPALOBJ@@PAUHDC__@@PAUHBITMAP__@@IIPAEPAUtagBITMAPINFO@@III@Z @ 0x4B706 (-GreGetDIBitsInternalWorker@@YGHKAAVDCOBJ@@AAVPDEVOBJ@@AAVSURFREF@@AAVXEPALOBJ@@PAUHDC__@@PAUHBI.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?WriteEncoded4@@YGHEPAEIPBE@Z @ 0x2321A7 (-WriteEncoded4@@YGHEPAEIPBE@Z.c)
 *     ?WriteAbsolute4@@YGHPBEPAEH0@Z @ 0x2334B3 (-WriteAbsolute4@@YGHPBEPAEH0@Z.c)
 */

int __fastcall EncodeRLE4(int a1, unsigned __int8 *a2, int a3, unsigned int a4, int a5)
{
  unsigned __int8 *v5; // esi
  int v6; // edi
  unsigned int v7; // ecx
  int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // ebx
  char *v11; // edx
  char v12; // cl
  int v13; // ebx
  int i; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  const unsigned __int8 *v20; // [esp-8h] [ebp-54h]
  unsigned int v21; // [esp+0h] [ebp-4Ch]
  const unsigned __int8 *v22; // [esp+4h] [ebp-48h]
  unsigned int v24; // [esp+18h] [ebp-34h]
  char *v25; // [esp+1Ch] [ebp-30h]
  char *v26; // [esp+20h] [ebp-2Ch]
  char *v27; // [esp+24h] [ebp-28h]
  unsigned __int8 *v28; // [esp+2Ch] [ebp-20h]
  char v29; // [esp+33h] [ebp-19h]
  int v30; // [esp+5Ch] [ebp+10h]
  char v31; // [esp+5Fh] [ebp+13h]

  v5 = a2;
  v6 = 0;
  v7 = (unsigned int)&a2[a5];
  v28 = &a2[a5];
  v8 = a3;
  v9 = ((unsigned int)(a3 + 7) >> 1) & 0x7FFFFFFC;
  v10 = 0;
  while ( 1 )
  {
    v24 = v10;
    if ( v10 >= a4 )
      break;
    v11 = (char *)(a1 + v10 * v9);
    v26 = v11;
    v12 = *v11;
    v31 = *v11;
    v27 = &v11[(unsigned int)(v8 + 1) >> 1];
    v13 = 0;
    for ( i = 2; ; i += 2 )
    {
      v25 = ++v11;
      if ( v11 > v27 )
        break;
      if ( v11 == v27 )
        v29 = -1;
      else
        v29 = *v11;
      if ( !v13 )
      {
        v12 = v29;
        v13 = (v29 == v31) + 1;
LABEL_34:
        v31 = v12;
        continue;
      }
      if ( v13 == 1 )
      {
        v12 = v29;
        if ( v29 == v31 || i == 254 )
        {
          if ( i == 254 )
          {
            v16 = v11 == v27 && (a3 & 1) != 0;
            v13 = 0;
          }
          else
          {
            v16 = 2;
            v13 = 2;
          }
          v30 = v16;
          v17 = WriteAbsolute4(v5, v26, (const unsigned __int8 *)(i - v16), v28, v21, v22);
          if ( v5 )
          {
            if ( !v17 )
              return 0;
            v5 += v17;
          }
          v6 += v17;
          v11 = v25;
          v26 = v25;
          i = v30;
          v12 = v29;
        }
        goto LABEL_34;
      }
      v12 = v31;
      if ( v13 == 2 && (v29 != v31 || i == 254) )
      {
        if ( v11 == v27 && (a3 & 1) != 0 )
          LOBYTE(i) = i - 1;
        v15 = WriteEncoded4(v5, v31, i, v28, v21, v22);
        if ( v5 )
        {
          if ( !v15 )
            return 0;
          v5 += v15;
        }
        v6 += v15;
        v12 = v29;
        v11 = v25;
        v26 = v25;
        i = 0;
        v13 = 0;
        goto LABEL_34;
      }
    }
    if ( i > 3 )
    {
      if ( (a3 & 1) != 0 )
        --i;
      v20 = (const unsigned __int8 *)(i - 2);
      if ( v13 == 1 )
        v18 = WriteAbsolute4(v5, v26, v20, v28, v21, v22);
      else
        v18 = WriteEncoded4(v5, v12, (char)v20, v28, v21, v22);
      if ( v5 )
      {
        if ( v18 )
        {
          v5 += v18;
          goto LABEL_45;
        }
        return 0;
      }
LABEL_45:
      v6 += v18;
    }
    v7 = (unsigned int)v28;
    if ( v5 <= v28 )
      v6 += 2;
    if ( v5 )
    {
      *(_WORD *)v5 = 0;
      v5 += 2;
    }
    v10 = v24 + 1;
    v8 = a3;
    v9 = ((unsigned int)(a3 + 7) >> 1) & 0x7FFFFFFC;
  }
  if ( v5 )
  {
    if ( (unsigned int)(v5 + 2) > v7 )
      return 0;
    *v5 = 0;
    v5[1] = 1;
  }
  return v6 + 2;
}
