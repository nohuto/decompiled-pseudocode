/*
 * XREFs of _EncodeRLE8@20 @ 0x2332AE
 * Callers:
 *     ?GreGetDIBitsInternalWorker@@YGHKAAVDCOBJ@@AAVPDEVOBJ@@AAVSURFREF@@AAVXEPALOBJ@@PAUHDC__@@PAUHBITMAP__@@IIPAEPAUtagBITMAPINFO@@III@Z @ 0x4B706 (-GreGetDIBitsInternalWorker@@YGHKAAVDCOBJ@@AAVPDEVOBJ@@AAVSURFREF@@AAVXEPALOBJ@@PAUHDC__@@PAUHBI.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?WriteAbsolute8@@YGHPBEPAEH0@Z @ 0x2320D5 (-WriteAbsolute8@@YGHPBEPAEH0@Z.c)
 *     ?WriteEncoded4@@YGHEPAEIPBE@Z @ 0x2321A7 (-WriteEncoded4@@YGHEPAEIPBE@Z.c)
 */

int __fastcall EncodeRLE8(int a1, unsigned __int8 *a2, int a3, unsigned int a4, int a5)
{
  unsigned __int8 *v5; // esi
  int v6; // edi
  unsigned int v7; // ecx
  int v8; // ebx
  unsigned int v9; // edx
  unsigned int v10; // eax
  _BYTE *v11; // ecx
  char v12; // dl
  int v13; // ebx
  int i; // eax
  char v15; // dh
  int v16; // eax
  int v17; // eax
  int v18; // eax
  size_t v20; // [esp-8h] [ebp-58h]
  unsigned int v21; // [esp+0h] [ebp-50h]
  const unsigned __int8 *v22; // [esp+4h] [ebp-4Ch]
  unsigned int v24; // [esp+1Ch] [ebp-34h]
  _BYTE *v25; // [esp+20h] [ebp-30h]
  _BYTE *v26; // [esp+24h] [ebp-2Ch]
  unsigned __int8 *v27; // [esp+2Ch] [ebp-24h]
  _BYTE *v28; // [esp+30h] [ebp-20h]
  char v29; // [esp+37h] [ebp-19h]
  int v30; // [esp+60h] [ebp+10h]
  char v31; // [esp+63h] [ebp+13h]

  v5 = a2;
  v6 = 0;
  v7 = (unsigned int)&a2[a5];
  v27 = &a2[a5];
  v8 = a3;
  v9 = (a3 + 3) & 0xFFFFFFFC;
  v10 = 0;
  while ( 1 )
  {
    v24 = v10;
    if ( v10 >= a4 )
      break;
    v11 = (_BYTE *)(a1 + v10 * v9);
    v26 = v11;
    v12 = *v11;
    v31 = *v11;
    v25 = &v11[v8];
    v13 = 0;
    for ( i = 1; ; ++i )
    {
      v28 = ++v11;
      if ( v11 > v25 )
        break;
      if ( v11 == v25 )
        v15 = -1;
      else
        v15 = *v11;
      v29 = v15;
      if ( v13 )
      {
        if ( v13 == 1 )
        {
          if ( v15 == v12 || i == 255 )
          {
            v30 = i != 255;
            v13 = -v30 & 2;
            v17 = WriteAbsolute8(v5, v26, i - v30, v27, v21, v22);
            if ( v5 )
            {
              if ( !v17 )
                return 0;
              v5 += v17;
            }
            v6 += v17;
            v11 = v28;
            v26 = v28;
            i = v30;
            v15 = v29;
          }
          v12 = v15;
          v31 = v15;
        }
        else if ( v13 == 2 && (v15 != v12 || i == 255) )
        {
          v16 = WriteEncoded4(v5, v31, i, v27, v21, v22);
          if ( v5 )
          {
            if ( !v16 )
              return 0;
            v5 += v16;
          }
          v6 += v16;
          v12 = v29;
          v31 = v29;
          v11 = v28;
          v26 = v28;
          i = 0;
          v13 = 0;
        }
      }
      else
      {
        v13 = (v15 == v12) + 1;
        v12 = v15;
        v31 = v15;
      }
    }
    if ( i > 1 )
    {
      v20 = i - 1;
      if ( v13 == 1 )
        v18 = WriteAbsolute8(v5, v26, v20, v27, v21, v22);
      else
        v18 = WriteEncoded4(v5, v31, v20, v27, v21, v22);
      if ( v5 )
      {
        if ( !v18 )
          return 0;
        v5 += v18;
      }
      v6 += v18;
    }
    v7 = (unsigned int)v27;
    if ( v5 <= v27 )
      v6 += 2;
    if ( v5 )
    {
      *(_WORD *)v5 = 0;
      v5 += 2;
    }
    v10 = v24 + 1;
    v9 = (a3 + 3) & 0xFFFFFFFC;
    v8 = a3;
  }
  if ( !v5 )
    return v6 + 2;
  if ( (unsigned int)(v5 + 2) <= v7 )
  {
    *v5 = 0;
    v5[1] = 1;
    return v6 + 2;
  }
  return 0;
}
