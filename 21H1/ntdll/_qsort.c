/*
 * XREFs of _qsort @ 0x4B2F8FA0
 * Callers:
 *     _RtlSetProtectedPolicy@12 @ 0x4B2EA320 (_RtlSetProtectedPolicy@12.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     @_guard_check_icall@4 @ 0x4B2F4CAB (@_guard_check_icall@4.c)
 */

void __cdecl qsort(
        void *Base,
        size_t NumOfElements,
        size_t SizeOfElements,
        _CoreCrtNonSecureSearchSortCompareFunction CompareFunction)
{
  unsigned int v4; // ebx
  int (__cdecl *v5)(char *, char *); // esi
  char *v6; // ecx
  char *v7; // edi
  unsigned int v8; // eax
  char *v9; // eax
  char *v10; // ecx
  unsigned int v11; // esi
  char *v12; // edx
  int v13; // eax
  char v14; // cl
  int v15; // eax
  char *v16; // edi
  bool v17; // cc
  char *v18; // eax
  char *v19; // esi
  unsigned int v20; // edi
  char v21; // cl
  char *v22; // edx
  char *v23; // edi
  char v24; // al
  char v25; // cl
  int v26; // eax
  int v27; // ebx
  char *v28; // edx
  int v29; // edi
  char v30; // al
  char v31; // cl
  char *v32; // ebx
  char *v33; // esi
  char *v34; // ecx
  char *v35; // edx
  int v36; // esi
  int v37; // ebx
  char v38; // al
  char v39; // cl
  int v40; // eax
  bool v41; // zf
  char *v42; // ebx
  unsigned int v43; // ecx
  int v44; // eax
  int v45; // [esp+14h] [ebp-110h]
  char *v46; // [esp+18h] [ebp-10Ch]
  char *v47; // [esp+18h] [ebp-10Ch]
  char *v48; // [esp+1Ch] [ebp-108h]
  char *v49; // [esp+1Ch] [ebp-108h]
  int v50; // [esp+1Ch] [ebp-108h]
  char *v51; // [esp+20h] [ebp-104h]
  char *v52; // [esp+24h] [ebp-100h]
  int v53; // [esp+24h] [ebp-100h]
  char *v54; // [esp+24h] [ebp-100h]
  char *v55; // [esp+24h] [ebp-100h]
  char *v56; // [esp+24h] [ebp-100h]
  _DWORD v57[60]; // [esp+30h] [ebp-F4h]

  v51 = (char *)Base;
  v4 = HIDWORD(NumOfElements);
  v5 = (int (__cdecl *)(char *, char *))SizeOfElements;
  if ( (Base || !(_DWORD)NumOfElements) && HIDWORD(NumOfElements) && (_DWORD)SizeOfElements )
  {
    if ( (unsigned int)NumOfElements >= 2 )
    {
      v6 = (char *)Base;
      v45 = 0;
      v7 = (char *)Base + HIDWORD(NumOfElements) * (NumOfElements - 1);
      while ( 2 )
      {
        while ( 2 )
        {
          v48 = v7;
          while ( 1 )
          {
            v8 = (v7 - v6) / v4 + 1;
            if ( v8 <= 8 )
            {
              if ( v7 <= v6 )
                goto LABEL_22;
              v9 = v51;
              v10 = &v6[v4];
              v52 = v10;
              do
              {
                v11 = (unsigned int)v10;
                v49 = v9;
                if ( v10 <= v7 )
                {
                  do
                  {
                    if ( ((int (__cdecl *)(unsigned int, char *))SizeOfElements)(v11, v9) <= 0 )
                    {
                      v9 = v49;
                    }
                    else
                    {
                      v9 = (char *)v11;
                      v49 = (char *)v11;
                    }
                    v11 += v4;
                  }
                  while ( v11 <= (unsigned int)v7 );
                }
                v12 = v7;
                if ( v9 != v7 )
                {
                  v13 = v9 - v7;
                  v50 = v13;
                  do
                  {
                    v14 = (v12++)[v13];
                    v12[v50 - 1] = *(v12 - 1);
                    v13 = v50;
                    *(v12 - 1) = v14;
                    --v4;
                  }
                  while ( v4 );
                  v4 = HIDWORD(NumOfElements);
                }
                v9 = v51;
                v7 -= v4;
                v10 = v52;
              }
              while ( v7 > v51 );
              goto LABEL_21;
            }
            v53 = v4 * (v8 >> 1);
            v16 = &v6[v53];
            v46 = &v6[v53];
            v17 = v5(v6, &v6[v53]) <= 0;
            v18 = v51;
            if ( !v17 )
            {
              v19 = v16;
              if ( v51 != v16 )
              {
                v20 = v4;
                do
                {
                  v21 = v19[-v53];
                  v19[-v53] = *v19;
                  *v19++ = v21;
                  --v20;
                }
                while ( v20 );
                v16 = v46;
                v4 = HIDWORD(NumOfElements);
                v18 = v51;
              }
            }
            if ( ((int (__cdecl *)(char *, char *))SizeOfElements)(v18, v48) > 0 )
            {
              v22 = v48;
              if ( v51 != v48 )
              {
                v23 = (char *)(v51 - v48);
                do
                {
                  v24 = *v22++;
                  v25 = v22[(_DWORD)v23 - 1];
                  v22[(_DWORD)v23 - 1] = v24;
                  *(v22 - 1) = v25;
                  --v4;
                }
                while ( v4 );
                v16 = v46;
              }
            }
            v17 = ((int (__cdecl *)(char *, char *))SizeOfElements)(v16, v48) <= 0;
            v26 = HIDWORD(NumOfElements);
            if ( !v17 )
            {
              v27 = HIDWORD(NumOfElements);
              v28 = v48;
              if ( v16 != v48 )
              {
                v29 = v16 - v48;
                do
                {
                  v30 = *v28++;
                  v31 = v28[v29 - 1];
                  v28[v29 - 1] = v30;
                  *(v28 - 1) = v31;
                  --v27;
                }
                while ( v27 );
                v16 = v46;
                v26 = HIDWORD(NumOfElements);
              }
            }
            v32 = v48;
            v33 = v51;
            v54 = v48;
            while ( 1 )
            {
              if ( v16 > v33 )
              {
                while ( 1 )
                {
                  v33 += v26;
                  v47 = v33;
                  if ( v33 >= v16 )
                    break;
                  v17 = ((int (__cdecl *)(char *, char *))SizeOfElements)(v33, v16) <= 0;
                  v26 = HIDWORD(NumOfElements);
                  if ( !v17 )
                    goto LABEL_47;
                }
              }
              do
              {
                v33 += v26;
                if ( v33 > v48 )
                  break;
                v17 = ((int (__cdecl *)(char *, char *))SizeOfElements)(v33, v16) <= 0;
                v26 = HIDWORD(NumOfElements);
              }
              while ( v17 );
              v32 = v54;
              v47 = v33;
LABEL_47:
              while ( 1 )
              {
                v26 = HIDWORD(NumOfElements);
                v34 = v32;
                v32 -= HIDWORD(NumOfElements);
                v55 = v34;
                if ( v32 <= v16 )
                  break;
                if ( ((int (__cdecl *)(char *, char *))SizeOfElements)(v32, v16) <= 0 )
                {
                  v26 = HIDWORD(NumOfElements);
                  v34 = v55;
                  break;
                }
              }
              v33 = v47;
              v54 = v32;
              if ( v32 < v47 )
                break;
              v35 = v32;
              if ( v32 != v47 )
              {
                v36 = v47 - v32;
                v37 = v26;
                do
                {
                  v38 = *v35++;
                  v39 = v35[v36 - 1];
                  v35[v36 - 1] = v38;
                  *(v35 - 1) = v39;
                  --v37;
                }
                while ( v37 );
                v33 = v47;
                v32 = v54;
                v26 = HIDWORD(NumOfElements);
              }
              if ( v16 == v32 )
                v16 = v33;
            }
            if ( v16 < v34 )
            {
              while ( 1 )
              {
                v34 -= v26;
                v56 = v34;
                if ( v34 <= v16 )
                  break;
                v40 = ((int (__cdecl *)(char *, char *))SizeOfElements)(v34, v16);
                v34 = v56;
                v41 = v40 == 0;
                v26 = HIDWORD(NumOfElements);
                if ( !v41 )
                {
                  v42 = v51;
                  goto LABEL_65;
                }
              }
            }
            v42 = v51;
            do
            {
              v43 = (unsigned int)&v34[-v26];
              v56 = (char *)v43;
              if ( v43 <= (unsigned int)v51 )
                break;
              v44 = ((int (__cdecl *)(unsigned int, char *))SizeOfElements)(v43, v16);
              v34 = v56;
              v41 = v44 == 0;
              v26 = HIDWORD(NumOfElements);
            }
            while ( v41 );
            v33 = v47;
LABEL_65:
            v7 = v48;
            if ( v56 - v42 < v48 - v33 )
              break;
            if ( v42 < v56 )
            {
              v57[v45 + 30] = v42;
              v57[v45++] = v56;
            }
            v4 = HIDWORD(NumOfElements);
            if ( v33 >= v48 )
              goto LABEL_21;
            v6 = v33;
            v5 = (int (__cdecl *)(char *, char *))SizeOfElements;
            v51 = v6;
          }
          if ( v33 < v48 )
          {
            v57[v45 + 30] = v33;
            v57[v45++] = v48;
          }
          v6 = v51;
          v4 = HIDWORD(NumOfElements);
          if ( v51 < v56 )
          {
            v5 = (int (__cdecl *)(char *, char *))SizeOfElements;
            v7 = v56;
            continue;
          }
          break;
        }
LABEL_21:
        v5 = (int (__cdecl *)(char *, char *))SizeOfElements;
LABEL_22:
        v15 = --v45;
        if ( v45 >= 0 )
        {
          v6 = (char *)v57[v15 + 30];
          v7 = (char *)v57[v15];
          v51 = v6;
          continue;
        }
        break;
      }
    }
  }
  else
  {
    _invalid_parameter();
  }
}
