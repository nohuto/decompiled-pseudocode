/*
 * XREFs of _RtlpFindUnicodeStringInSection@32 @ 0x4B2CA720
 * Callers:
 *     _RtlQueryActivationContextApplicationSettings@28 @ 0x4B2B4270 (_RtlQueryActivationContextApplicationSettings@28.c)
 *     _RtlFindActivationContextSectionString@20 @ 0x4B2CA130 (_RtlFindActivationContextSectionString@20.c)
 * Callees:
 *     _RtlHashUnicodeString@16 @ 0x4B2A7970 (_RtlHashUnicodeString@16.c)
 *     _RtlCompareUnicodeString@12 @ 0x4B2D0490 (_RtlCompareUnicodeString@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _bsearch @ 0x4B2F8160 (_bsearch.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 */

int __fastcall RtlpFindUnicodeStringInSection(
        _DWORD *a1,
        unsigned int a2,
        unsigned __int16 *a3,
        int *a4,
        _DWORD *a5,
        int *a6,
        int a7,
        int a8)
{
  _DWORD *v8; // ebx
  int *v9; // esi
  bool v10; // zf
  _DWORD *v11; // edi
  char v12; // dl
  unsigned int v13; // ecx
  int v14; // eax
  unsigned __int16 *v15; // ebx
  unsigned __int16 *v16; // edi
  int v17; // ebx
  unsigned int v18; // ecx
  int v19; // eax
  char v20; // dh
  char v21; // dl
  int v22; // ecx
  unsigned int *v23; // esi
  _DWORD *v24; // ecx
  unsigned __int64 v25; // rax
  unsigned int *v26; // edx
  unsigned int v27; // eax
  int v28; // edi
  unsigned int v29; // edx
  int v30; // eax
  _DWORD *v31; // edx
  char *v32; // eax
  unsigned int *i; // esi
  char *v34; // ebx
  int result; // eax
  char *v36; // esi
  char *v37; // edi
  char *v38; // eax
  unsigned int v39; // esi
  unsigned int v40; // ecx
  _DWORD *v41; // edi
  int v42; // ecx
  int v43; // ecx
  int v44; // esi
  unsigned int *v45; // ecx
  size_t v46; // [esp-Ch] [ebp-64h]
  const void *v47; // [esp+10h] [ebp-48h] BYREF
  unsigned int v48; // [esp+14h] [ebp-44h]
  _DWORD *v49; // [esp+18h] [ebp-40h]
  _DWORD *v50; // [esp+1Ch] [ebp-3Ch]
  __int16 v51; // [esp+20h] [ebp-38h] BYREF
  __int16 v52; // [esp+22h] [ebp-36h]
  char *v53; // [esp+24h] [ebp-34h]
  int v54; // [esp+28h] [ebp-30h]
  unsigned __int16 *v55; // [esp+2Ch] [ebp-2Ch]
  _DWORD *v56; // [esp+30h] [ebp-28h]
  unsigned int *v57; // [esp+34h] [ebp-24h]
  char v58; // [esp+3Bh] [ebp-1Dh]
  unsigned int Key[6]; // [esp+3Ch] [ebp-1Ch] BYREF

  v8 = a1;
  v55 = a3;
  v9 = a6;
  v10 = (a1[4] & 1) == 0;
  v11 = a5;
  v48 = a2;
  v56 = a1;
  v49 = a5;
  v57 = (unsigned int *)a6;
  v58 = 1;
  v12 = !v10;
  v10 = *a1 == 1682469715;
  LOBYTE(v54) = v12;
  if ( !v10 )
    return -1072365565;
  if ( !a1[5] )
    return -1072365560;
  v13 = a1[7];
  if ( v13 == -1 )
  {
    v20 = 0;
    goto LABEL_21;
  }
  if ( *a5 == v13 )
    goto LABEL_20;
  v14 = 0;
  if ( v55 && a6 )
  {
    v15 = v55;
    v16 = (unsigned __int16 *)*((_DWORD *)v55 + 1);
    *a6 = 0;
    v17 = *v15 >> 1;
    if ( v13 > 1 )
      goto LABEL_64;
    if ( v17 )
    {
      if ( v12 )
      {
        do
        {
          v18 = *v16++;
          --v17;
          v50 = (_DWORD *)v18;
          if ( v18 >= 0x61 )
          {
            if ( v18 > 0x7A )
            {
              if ( Nls844UnicodeUpcaseTable && (unsigned __int16)v18 >= 0xC0u )
                LOWORD(v18) = (_WORD)v50
                            + *(_WORD *)(Nls844UnicodeUpcaseTable
                                       + 2
                                       * ((v18 & 0xF)
                                        + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                              + 2
                                                              * ((((unsigned __int16)v18 >> 4) & 0xF)
                                                               + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                     + 2 * BYTE1(v18))))));
            }
            else
            {
              LOWORD(v18) = v18 - 32;
            }
          }
          v14 = (unsigned __int16)v18 + 65599 * v14;
        }
        while ( v17 );
        v9 = (int *)v57;
      }
      else
      {
        do
        {
          v43 = *v16++;
          v14 = v43 + 65599 * v14;
          --v17;
        }
        while ( v17 );
      }
    }
    v8 = v56;
    v11 = v49;
    *v9 = v14;
    v19 = 0;
  }
  else
  {
    v19 = -1073741811;
  }
  if ( v19 >= 0 )
  {
    *v11 = v8[7];
LABEL_20:
    v20 = v58;
    goto LABEL_21;
  }
LABEL_64:
  result = RtlHashUnicodeString(v55, v54, 0, (int *)&v47);
  if ( result < 0 )
    return result;
  v8 = v56;
  DbgPrintEx(51, 0, "RtlpFindUnicodeStringInSection: Unsupported hash algorithm %lu found in string section.\n", v56[7]);
  v20 = 0;
LABEL_21:
  v10 = v8[2] == 1;
  v21 = v20;
  v58 = v20;
  if ( !v10 )
    v20 = 0;
  v22 = v8[8];
  if ( ((unsigned __int8)-(v22 != 0) & (unsigned __int8)v20) != 0 )
  {
    v23 = (_DWORD *)((char *)v8 + v22);
    v10 = *(_DWORD *)((char *)v8 + v22) == 11;
    v24 = (_DWORD *)*v57;
    v25 = *v57;
    v49 = (_DWORD *)*v57;
    if ( v10 )
      v26 = (unsigned int *)(v25 % 0xB);
    else
      v26 = (unsigned int *)(v25 % *v23);
    v27 = v23[1];
    v28 = 0;
    v57 = v26;
    v29 = v27 + 8 * (_DWORD)v26;
    v30 = *(_DWORD *)((char *)v8 + v29 + 4);
    v31 = (_DWORD *)((char *)v8 + v29);
    v32 = (char *)v8 + v30;
    v50 = v31;
    v47 = v32;
    if ( *v31 )
    {
      for ( i = (unsigned int *)v32; *i <= v48; ++i )
      {
        v34 = (char *)v8 + *i;
        if ( !v58 || *(_DWORD **)v34 == v24 )
        {
          v40 = *((_DWORD *)v34 + 1);
          if ( v40 > v48 )
          {
            DbgPrintEx(
              51,
              0,
              "SXS: String hash table entry at %p has invalid key offset (= %ld)\n"
              "   Header = %p; Index = %lu; Bucket = %p; Chain = %p\n",
              v34,
              v40,
              v56,
              v57,
              v31,
              v47);
            return -1072365565;
          }
          v51 = *((_WORD *)v34 + 4);
          v52 = v51;
          v53 = (char *)v56 + v40;
          if ( !RtlCompareUnicodeString(v55, &v51, v54) )
            goto LABEL_49;
          v24 = v49;
          v31 = v50;
        }
        v8 = v56;
        if ( (unsigned int)++v28 >= *v31 )
          return -1072365560;
      }
      DbgPrintEx(51, 0, "SXS: String hash collision chain offset at %p (= %ld) out of bounds\n", i, *i);
      return -1072365565;
    }
    return -1072365560;
  }
  if ( !v21 || (v8[4] & 2) == 0 )
  {
    v41 = v56;
    v34 = (char *)v56 + v8[6];
    v44 = v56[5];
    if ( v44 )
    {
      v45 = v57;
      do
      {
        v51 = *((_WORD *)v34 + 4);
        v52 = v51;
        v53 = (char *)v41 + *((_DWORD *)v34 + 1);
        if ( !v21 || *(_DWORD *)v34 == *v45 )
        {
          if ( !RtlCompareUnicodeString(v55, &v51, v54) )
            goto LABEL_50;
          v21 = v58;
          v45 = v57;
        }
        v34 += 24;
        --v44;
      }
      while ( v44 );
    }
    return -1072365560;
  }
  v36 = (char *)v8 + v8[6];
  v37 = &v36[24 * v8[5] - 24];
  v46 = v8[5];
  Key[0] = *v57;
  v38 = (char *)bsearch(Key, v36, v46, 0x18u, RtlpCompareActivationContextStringSectionEntryByPseudoKey);
  v34 = v38;
  if ( !v38 )
    return -1072365560;
  if ( v38 != v36 )
  {
    do
    {
      if ( *(_DWORD *)v34 != *v57 )
        break;
      v34 -= 24;
    }
    while ( v34 != v36 );
  }
  v39 = *v57;
  if ( *(_DWORD *)v34 != *v57 )
    v34 += 24;
  do
  {
    v51 = *((_WORD *)v34 + 4);
    v52 = v51;
    v53 = (char *)v56 + *((_DWORD *)v34 + 1);
    if ( !RtlCompareUnicodeString(v55, &v51, v54) )
      break;
    v34 += 24;
    if ( v34 > v37 )
      return -1072365560;
  }
  while ( *(_DWORD *)v34 == v39 );
  if ( v34 > v37 || *(_DWORD *)v34 != v39 )
    return -1072365560;
LABEL_49:
  v41 = v56;
LABEL_50:
  if ( !v34 || !*((_DWORD *)v34 + 3) )
    return -1072365560;
  if ( a4 )
  {
    v42 = *a4;
    a4[1] = v41[3];
    a4[2] = (int)v41 + *((_DWORD *)v34 + 3);
    a4[3] = *((_DWORD *)v34 + 4);
    if ( a4 + 10 <= (int *)((char *)a4 + v42) )
      a4[9] = *((_DWORD *)v34 + 5);
  }
  return 0;
}
