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
  size_t v4; // ebx
  _CoreCrtNonSecureSearchSortCompareFunction v5; // esi
  _BYTE *v6; // ecx
  char *v7; // edi
  unsigned int v8; // eax
  char *v9; // eax
  char *v10; // ecx
  char *v11; // esi
  char *v12; // edx
  int v13; // eax
  char v14; // cl
  int v15; // eax
  char *v16; // edi
  bool v17; // cc
  const void *v18; // eax
  char *v19; // esi
  size_t v20; // edi
  char v21; // cl
  char *v22; // edx
  int v23; // edi
  char v24; // al
  char v25; // cl
  size_t v26; // eax
  size_t v27; // ebx
  char *v28; // edx
  int v29; // edi
  char v30; // al
  char v31; // cl
  char *v32; // ebx
  char *v33; // esi
  char *v34; // ecx
  char *v35; // edx
  int v36; // esi
  size_t v37; // ebx
  char v38; // al
  char v39; // cl
  int v40; // eax
  bool v41; // zf
  char *v42; // ebx
  char *v43; // ecx
  int v44; // eax
  int v45; // [esp+14h] [ebp-110h]
  char *v46; // [esp+18h] [ebp-10Ch]
  char *v47; // [esp+18h] [ebp-10Ch]
  char *v48; // [esp+1Ch] [ebp-108h]
  char *i; // [esp+1Ch] [ebp-108h]
  int v50; // [esp+1Ch] [ebp-108h]
  char *v51; // [esp+20h] [ebp-104h]
  char *v52; // [esp+24h] [ebp-100h]
  int v53; // [esp+24h] [ebp-100h]
  char *v54; // [esp+24h] [ebp-100h]
  char *v55; // [esp+24h] [ebp-100h]
  char *v56; // [esp+24h] [ebp-100h]
  _DWORD v57[60]; // [esp+30h] [ebp-F4h]

  v51 = (char *)Base;
  v4 = SizeOfElements;
  v5 = CompareFunction;
  if ( (Base || !NumOfElements) && SizeOfElements && CompareFunction )
  {
    if ( NumOfElements >= 2 )
    {
      v6 = Base;
      v45 = 0;
      v7 = (char *)Base + SizeOfElements * (NumOfElements - 1);
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
                v11 = v10;
                for ( i = v9; v11 <= v7; v11 += v4 )
                {
                  if ( CompareFunction(v11, v9) <= 0 )
                  {
                    v9 = i;
                  }
                  else
                  {
                    v9 = v11;
                    i = v11;
                  }
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
                  v4 = SizeOfElements;
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
                v4 = SizeOfElements;
                v18 = v51;
              }
            }
            if ( CompareFunction(v18, v48) > 0 )
            {
              v22 = v48;
              if ( v51 != v48 )
              {
                v23 = v51 - v48;
                do
                {
                  v24 = *v22++;
                  v25 = v22[v23 - 1];
                  v22[v23 - 1] = v24;
                  *(v22 - 1) = v25;
                  --v4;
                }
                while ( v4 );
                v16 = v46;
              }
            }
            v17 = CompareFunction(v16, v48) <= 0;
            v26 = SizeOfElements;
            if ( !v17 )
            {
              v27 = SizeOfElements;
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
                v26 = SizeOfElements;
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
                  v17 = CompareFunction(v33, v16) <= 0;
                  v26 = SizeOfElements;
                  if ( !v17 )
                    goto LABEL_47;
                }
              }
              do
              {
                v33 += v26;
                if ( v33 > v48 )
                  break;
                v17 = CompareFunction(v33, v16) <= 0;
                v26 = SizeOfElements;
              }
              while ( v17 );
              v32 = v54;
              v47 = v33;
LABEL_47:
              while ( 1 )
              {
                v26 = SizeOfElements;
                v34 = v32;
                v32 -= SizeOfElements;
                v55 = v34;
                if ( v32 <= v16 )
                  break;
                if ( CompareFunction(v32, v16) <= 0 )
                {
                  v26 = SizeOfElements;
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
                v26 = SizeOfElements;
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
                v40 = CompareFunction(v34, v16);
                v34 = v56;
                v41 = v40 == 0;
                v26 = SizeOfElements;
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
              v43 = &v34[-v26];
              v56 = v43;
              if ( v43 <= v51 )
                break;
              v44 = CompareFunction(v43, v16);
              v34 = v56;
              v41 = v44 == 0;
              v26 = SizeOfElements;
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
            v4 = SizeOfElements;
            if ( v33 >= v48 )
              goto LABEL_21;
            v6 = v33;
            v5 = CompareFunction;
            v51 = v6;
          }
          if ( v33 < v48 )
          {
            v57[v45 + 30] = v33;
            v57[v45++] = v48;
          }
          v6 = v51;
          v4 = SizeOfElements;
          if ( v51 < v56 )
          {
            v5 = CompareFunction;
            v7 = v56;
            continue;
          }
          break;
        }
LABEL_21:
        v5 = CompareFunction;
LABEL_22:
        v15 = --v45;
        if ( v45 >= 0 )
        {
          v6 = (_BYTE *)v57[v15 + 30];
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
