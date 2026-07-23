/*
 * XREFs of qsort @ 0x1800907E0
 * Callers:
 *     RtlSetProtectedPolicy @ 0x180081550 (RtlSetProtectedPolicy.c)
 * Callees:
 *     _invalid_parameter @ 0x18008C868 (_invalid_parameter.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     _guard_check_icall @ 0x180092E8C (_guard_check_icall.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1120 (_guard_dispatch_icall_nop.c)
 */

void __cdecl qsort(
        void *Base,
        size_t NumOfElements,
        size_t SizeOfElements,
        _CoreCrtNonSecureSearchSortCompareFunction CompareFunction)
{
  char *v6; // r13
  char *v7; // r15
  __int64 v8; // rcx
  size_t v9; // rbx
  char *v10; // rbx
  unsigned __int64 v11; // rdi
  size_t v12; // r8
  char *v13; // rdx
  signed __int64 v14; // rbx
  char v15; // cl
  size_t v16; // rbx
  char *v17; // rdi
  char *v18; // r8
  size_t v19; // r9
  char v20; // cl
  size_t v21; // r8
  char *v22; // rdx
  signed __int64 v23; // r9
  char v24; // cl
  size_t v25; // r8
  char *v26; // rdx
  signed __int64 v27; // r9
  char v28; // cl
  unsigned __int64 v29; // rbx
  char *v30; // rsi
  char *v31; // rbp
  char *v32; // rdx
  unsigned __int64 v33; // r9
  char v34; // cl
  char *v35; // rax
  __int64 v36; // [rsp+30h] [rbp-448h]
  _QWORD v37[124]; // [rsp+40h] [rbp-438h]

  v6 = (char *)Base;
  if ( (Base || !NumOfElements) && SizeOfElements && CompareFunction )
  {
    if ( NumOfElements >= 2 )
    {
      v7 = (char *)Base + SizeOfElements * (NumOfElements - 1);
      v8 = 0LL;
      v36 = 0LL;
      while ( 1 )
      {
        while ( 1 )
        {
          v9 = (v7 - v6) / SizeOfElements + 1;
          if ( v9 <= 8 )
          {
            if ( v7 > v6 )
            {
              do
              {
                v10 = v6;
                v11 = (unsigned __int64)&v6[SizeOfElements];
                if ( &v6[SizeOfElements] <= v7 )
                {
                  do
                  {
                    if ( ((int (__fastcall *)(unsigned __int64, char *))CompareFunction)(v11, v10) > 0 )
                      v10 = (char *)v11;
                    v11 += SizeOfElements;
                  }
                  while ( v11 <= (unsigned __int64)v7 );
                }
                v12 = SizeOfElements;
                v13 = v7;
                if ( v10 != v7 )
                {
                  v14 = v10 - v7;
                  do
                  {
                    v15 = v13[v14];
                    v13[v14] = *v13;
                    *v13++ = v15;
                    --v12;
                  }
                  while ( v12 );
                }
                v7 -= SizeOfElements;
              }
              while ( v7 > v6 );
              v8 = v36;
            }
            goto LABEL_18;
          }
          v16 = SizeOfElements * (v9 >> 1);
          v17 = &v6[v16];
          if ( ((int (__fastcall *)(char *, char *))CompareFunction)(v6, &v6[v16]) > 0 )
          {
            v19 = SizeOfElements;
            v18 = &v6[v16];
            if ( v6 != v17 )
            {
              do
              {
                v20 = v18[-v16];
                v18[-v16] = *v18;
                *v18++ = v20;
                --v19;
              }
              while ( v19 );
            }
          }
          if ( ((int (__fastcall *)(char *, char *, char *, size_t))CompareFunction)(v6, v7, v18, v19) > 0 )
          {
            v21 = SizeOfElements;
            v22 = v7;
            if ( v6 != v7 )
            {
              v23 = v6 - v7;
              do
              {
                v24 = v22[v23];
                v22[v23] = *v22;
                *v22++ = v24;
                --v21;
              }
              while ( v21 );
            }
          }
          if ( ((int (__fastcall *)(char *, char *, size_t))CompareFunction)(&v6[v16], v7, v21) > 0 )
          {
            v25 = SizeOfElements;
            v26 = v7;
            if ( v17 != v7 )
            {
              v27 = v17 - v7;
              do
              {
                v28 = v26[v27];
                v26[v27] = *v26;
                *v26++ = v28;
                --v25;
              }
              while ( v25 );
            }
          }
          v29 = (unsigned __int64)v6;
          v30 = v7;
          while ( 1 )
          {
            if ( (unsigned __int64)v17 > v29 )
            {
              while ( 1 )
              {
                v29 += SizeOfElements;
                if ( v29 >= (unsigned __int64)v17 )
                  break;
                if ( ((int (__fastcall *)(unsigned __int64, char *, size_t))CompareFunction)(v29, v17, v25) > 0 )
                  goto LABEL_38;
              }
            }
            do
              v29 += SizeOfElements;
            while ( v29 <= (unsigned __int64)v7
                 && ((int (__fastcall *)(unsigned __int64, char *, size_t))CompareFunction)(v29, v17, v25) <= 0 );
            do
            {
LABEL_38:
              v31 = v30;
              v30 -= SizeOfElements;
            }
            while ( v30 > v17 && ((int (__fastcall *)(char *, char *))CompareFunction)(v30, v17) > 0 );
            if ( (unsigned __int64)v30 < v29 )
              break;
            v25 = SizeOfElements;
            v32 = v30;
            if ( v30 != (char *)v29 )
            {
              v33 = v29 - (_QWORD)v30;
              do
              {
                v34 = v32[v33];
                v32[v33] = *v32;
                *v32++ = v34;
                --v25;
              }
              while ( v25 );
            }
            v35 = (char *)v29;
            if ( v17 != v30 )
              v35 = v17;
            v17 = v35;
          }
          if ( v17 < v31 )
          {
            while ( 1 )
            {
              v31 -= SizeOfElements;
              if ( v31 <= v17 )
                break;
              if ( ((unsigned int (__fastcall *)(char *, char *))CompareFunction)(v31, v17) )
                goto LABEL_53;
            }
          }
          do
            v31 -= SizeOfElements;
          while ( v31 > v6 && !((unsigned int (__fastcall *)(char *, char *))CompareFunction)(v31, v17) );
LABEL_53:
          v8 = v36;
          if ( v31 - v6 >= (__int64)&v7[-v29] )
            break;
          if ( v29 < (unsigned __int64)v7 )
          {
            v37[v36] = v29;
            v37[v36 + 62] = v7;
            v8 = ++v36;
          }
          if ( v6 >= v31 )
          {
LABEL_18:
            v36 = --v8;
            if ( v8 < 0 )
              return;
            v6 = (char *)v37[v8];
            v7 = (char *)v37[v8 + 62];
          }
          else
          {
            v7 = v31;
          }
        }
        if ( v6 < v31 )
        {
          v37[v36] = v6;
          v37[v36 + 62] = v31;
          v8 = ++v36;
        }
        if ( v29 >= (unsigned __int64)v7 )
          goto LABEL_18;
        v6 = (char *)v29;
      }
    }
  }
  else
  {
    invalid_parameter();
  }
}
