/*
 * XREFs of _qsort_s @ 0x4B2F9440
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     @_guard_check_icall@4 @ 0x4B2F4CAB (@_guard_check_icall@4.c)
 */

void __cdecl qsort_s(
        void *Base,
        rsize_t NumOfElements,
        rsize_t SizeOfElements,
        _CoreCrtSecureSearchSortCompareFunction CompareFunction,
        void *Context)
{
  unsigned int v5; // ebx
  int (__cdecl *v6)(_DWORD, char *, char *); // esi
  char *v7; // edi
  char *v8; // ecx
  unsigned int v9; // eax
  char *v10; // eax
  char *v11; // esi
  unsigned int v12; // esi
  char *v13; // edx
  int v14; // edi
  char v15; // al
  char v16; // cl
  int v17; // eax
  int v18; // eax
  char *v19; // edi
  bool v20; // cc
  char *v21; // eax
  char *v22; // esi
  unsigned int v23; // edi
  char v24; // cl
  char *v25; // esi
  char *v26; // edx
  char *v27; // esi
  char v28; // al
  char v29; // cl
  int v30; // eax
  int v31; // ebx
  char *v32; // edx
  int v33; // edi
  char v34; // al
  char v35; // cl
  char *v36; // ebx
  char *v37; // esi
  char *v38; // ecx
  char *v39; // edx
  int v40; // esi
  int v41; // ebx
  char v42; // al
  char v43; // cl
  int v44; // eax
  bool v45; // zf
  unsigned int v46; // ecx
  int v47; // eax
  int v48; // [esp+10h] [ebp-118h]
  char *v49; // [esp+18h] [ebp-110h]
  char *v50; // [esp+18h] [ebp-110h]
  char *v51; // [esp+18h] [ebp-110h]
  char *v52; // [esp+20h] [ebp-108h]
  int v53; // [esp+24h] [ebp-104h]
  char *v54; // [esp+24h] [ebp-104h]
  char *v55; // [esp+24h] [ebp-104h]
  char *v56; // [esp+24h] [ebp-104h]
  char *v57; // [esp+28h] [ebp-100h]
  _DWORD v58[60]; // [esp+34h] [ebp-F4h]

  v57 = (char *)Base;
  v5 = HIDWORD(NumOfElements);
  v6 = (int (__cdecl *)(_DWORD, char *, char *))SizeOfElements;
  if ( (Base || !(_DWORD)NumOfElements) && HIDWORD(NumOfElements) && (_DWORD)SizeOfElements )
  {
    if ( (unsigned int)NumOfElements >= 2 )
    {
      v48 = 0;
      v7 = (char *)Base;
      v8 = (char *)Base + HIDWORD(NumOfElements) * (NumOfElements - 1);
      while ( 2 )
      {
        while ( 2 )
        {
          v52 = v8;
          while ( 1 )
          {
            v9 = (v8 - v7) / v5 + 1;
            if ( v9 <= 8 )
            {
              if ( v8 <= v7 )
                goto LABEL_21;
              v10 = &v7[v5];
              v49 = &v7[v5];
              do
              {
                v11 = v10;
                if ( v10 <= v8 )
                {
                  do
                  {
                    if ( ((int (__cdecl *)(_DWORD, char *, char *))SizeOfElements)(HIDWORD(SizeOfElements), v11, v7) > 0 )
                      v7 = v11;
                    v8 = v52;
                    v11 += v5;
                  }
                  while ( v11 <= v52 );
                }
                v12 = v5;
                v13 = v8;
                if ( v7 != v8 )
                {
                  v14 = v7 - v8;
                  do
                  {
                    v15 = *v13++;
                    v16 = v13[v14 - 1];
                    v13[v14 - 1] = v15;
                    *(v13 - 1) = v16;
                    --v12;
                  }
                  while ( v12 );
                  v8 = v52;
                }
                v7 = v57;
                v8 -= v5;
                v10 = v49;
                v52 = v8;
              }
              while ( v8 > v57 );
              goto LABEL_20;
            }
            v18 = v5 * (v9 >> 1);
            v19 = &v7[v18];
            v53 = v18;
            v50 = v19;
            v20 = v6(HIDWORD(SizeOfElements), v57, v19) <= 0;
            v21 = v57;
            if ( !v20 )
            {
              v22 = v19;
              if ( v57 != v19 )
              {
                v23 = v5;
                do
                {
                  v24 = v22[-v53];
                  v22[-v53] = *v22;
                  *v22++ = v24;
                  --v23;
                }
                while ( v23 );
                v19 = v50;
                v5 = HIDWORD(NumOfElements);
                v21 = v57;
              }
            }
            v25 = v52;
            if ( ((int (__cdecl *)(_DWORD, char *, char *))SizeOfElements)(HIDWORD(SizeOfElements), v21, v52) > 0 )
            {
              v26 = v52;
              if ( v57 != v52 )
              {
                v27 = (char *)(v57 - v52);
                do
                {
                  v28 = *v26++;
                  v29 = v26[(_DWORD)v27 - 1];
                  v26[(_DWORD)v27 - 1] = v28;
                  *(v26 - 1) = v29;
                  --v5;
                }
                while ( v5 );
                v25 = v52;
              }
            }
            v20 = ((int (__cdecl *)(_DWORD, char *, char *))SizeOfElements)(HIDWORD(SizeOfElements), v19, v25) <= 0;
            v30 = HIDWORD(NumOfElements);
            if ( !v20 )
            {
              v31 = HIDWORD(NumOfElements);
              v32 = v25;
              if ( v19 != v25 )
              {
                v33 = v19 - v25;
                do
                {
                  v34 = *v32++;
                  v35 = v32[v33 - 1];
                  v32[v33 - 1] = v34;
                  *(v32 - 1) = v35;
                  --v31;
                }
                while ( v31 );
                v19 = v50;
                v30 = HIDWORD(NumOfElements);
              }
            }
            v36 = v52;
            v37 = v57;
            v54 = v52;
            while ( 1 )
            {
              if ( v19 > v37 )
              {
                while ( 1 )
                {
                  v37 += v30;
                  v51 = v37;
                  if ( v37 >= v19 )
                    break;
                  v20 = ((int (__cdecl *)(_DWORD, char *, char *))SizeOfElements)(HIDWORD(SizeOfElements), v37, v19) <= 0;
                  v30 = HIDWORD(NumOfElements);
                  if ( !v20 )
                    goto LABEL_46;
                }
              }
              do
              {
                v37 += v30;
                if ( v37 > v52 )
                  break;
                v20 = ((int (__cdecl *)(_DWORD, char *, char *))SizeOfElements)(HIDWORD(SizeOfElements), v37, v19) <= 0;
                v30 = HIDWORD(NumOfElements);
              }
              while ( v20 );
              v36 = v54;
              v51 = v37;
LABEL_46:
              while ( 1 )
              {
                v30 = HIDWORD(NumOfElements);
                v38 = v36;
                v36 -= HIDWORD(NumOfElements);
                v55 = v38;
                if ( v36 <= v19 )
                  break;
                if ( ((int (__cdecl *)(_DWORD, char *, char *))SizeOfElements)(HIDWORD(SizeOfElements), v36, v19) <= 0 )
                {
                  v30 = HIDWORD(NumOfElements);
                  v38 = v55;
                  break;
                }
              }
              v37 = v51;
              v54 = v36;
              if ( v36 < v51 )
                break;
              v39 = v36;
              if ( v36 != v51 )
              {
                v40 = v51 - v36;
                v41 = v30;
                do
                {
                  v42 = *v39++;
                  v43 = v39[v40 - 1];
                  v39[v40 - 1] = v42;
                  *(v39 - 1) = v43;
                  --v41;
                }
                while ( v41 );
                v37 = v51;
                v36 = v54;
                v30 = HIDWORD(NumOfElements);
              }
              if ( v19 == v36 )
                v19 = v37;
            }
            if ( v19 < v38 )
            {
              while ( 1 )
              {
                v38 -= v30;
                v56 = v38;
                if ( v38 <= v19 )
                  break;
                v44 = ((int (__cdecl *)(_DWORD, char *, char *))SizeOfElements)(HIDWORD(SizeOfElements), v38, v19);
                v38 = v56;
                v45 = v44 == 0;
                v30 = HIDWORD(NumOfElements);
                if ( !v45 )
                  goto LABEL_63;
              }
            }
            do
            {
              v46 = (unsigned int)&v38[-v30];
              v56 = (char *)v46;
              if ( v46 <= (unsigned int)v57 )
                break;
              v47 = ((int (__cdecl *)(_DWORD, unsigned int, char *))SizeOfElements)(HIDWORD(SizeOfElements), v46, v19);
              v38 = v56;
              v45 = v47 == 0;
              v30 = HIDWORD(NumOfElements);
            }
            while ( v45 );
            v37 = v51;
LABEL_63:
            v7 = v57;
            if ( v56 - v57 < v52 - v37 )
              break;
            if ( v57 < v56 )
            {
              v58[v48 + 30] = v57;
              v58[v48++] = v56;
            }
            v8 = v52;
            v5 = HIDWORD(NumOfElements);
            if ( v37 >= v52 )
              goto LABEL_20;
            v7 = v37;
            v6 = (int (__cdecl *)(_DWORD, char *, char *))SizeOfElements;
            v57 = v7;
          }
          if ( v37 < v52 )
          {
            v58[v48 + 30] = v37;
            v58[v48++] = v52;
          }
          v5 = HIDWORD(NumOfElements);
          if ( v57 < v56 )
          {
            v6 = (int (__cdecl *)(_DWORD, char *, char *))SizeOfElements;
            v8 = v56;
            continue;
          }
          break;
        }
LABEL_20:
        v6 = (int (__cdecl *)(_DWORD, char *, char *))SizeOfElements;
LABEL_21:
        v17 = --v48;
        if ( v48 >= 0 )
        {
          v7 = (char *)v58[v17 + 30];
          v8 = (char *)v58[v17];
          v57 = v7;
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
