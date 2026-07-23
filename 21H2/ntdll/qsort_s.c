/*
 * XREFs of qsort_s @ 0x180090B70
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x18008C868 (_invalid_parameter.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     _guard_check_icall @ 0x180092E8C (_guard_check_icall.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1120 (_guard_dispatch_icall_nop.c)
 */

void __cdecl qsort_s(
        void *Base,
        rsize_t NumOfElements,
        rsize_t SizeOfElements,
        _CoreCrtSecureSearchSortCompareFunction CompareFunction,
        void *Context)
{
  char *v7; // rsi
  char *v8; // r15
  __int64 v9; // rcx
  rsize_t v10; // rbx
  char *v11; // rbx
  unsigned __int64 v12; // rdi
  rsize_t v13; // r8
  char *v14; // rdx
  signed __int64 v15; // rbx
  char v16; // cl
  rsize_t v17; // rbx
  char *v18; // rdi
  rsize_t v19; // r9
  char *v20; // r8
  char v21; // cl
  rsize_t v22; // r8
  char *v23; // rdx
  signed __int64 v24; // r9
  char v25; // cl
  rsize_t v26; // r8
  char *v27; // rdx
  signed __int64 v28; // r9
  char v29; // cl
  unsigned __int64 v30; // rbx
  char *v31; // rsi
  char *v32; // rbp
  rsize_t v33; // r8
  char *v34; // rdx
  unsigned __int64 v35; // r9
  char v36; // cl
  char *v37; // rax
  __int64 v38; // [rsp+30h] [rbp-448h]
  char *v39; // [rsp+38h] [rbp-440h]
  _QWORD v40[124]; // [rsp+40h] [rbp-438h]

  v39 = (char *)Base;
  v7 = (char *)Base;
  if ( (Base || !NumOfElements) && SizeOfElements && CompareFunction )
  {
    if ( NumOfElements >= 2 )
    {
      v8 = (char *)Base + SizeOfElements * (NumOfElements - 1);
      v9 = 0LL;
      v38 = 0LL;
      while ( 1 )
      {
        while ( 1 )
        {
          v10 = (v8 - v7) / SizeOfElements + 1;
          if ( v10 <= 8 )
          {
            if ( v8 > v7 )
            {
              do
              {
                v11 = v7;
                v12 = (unsigned __int64)&v7[SizeOfElements];
                if ( &v7[SizeOfElements] <= v8 )
                {
                  do
                  {
                    if ( ((int (__fastcall *)(void *, unsigned __int64, char *))CompareFunction)(Context, v12, v11) > 0 )
                      v11 = (char *)v12;
                    v12 += SizeOfElements;
                  }
                  while ( v12 <= (unsigned __int64)v8 );
                }
                v13 = SizeOfElements;
                v14 = v8;
                if ( v11 != v8 )
                {
                  v15 = v11 - v8;
                  do
                  {
                    v16 = v14[v15];
                    v14[v15] = *v14;
                    *v14++ = v16;
                    --v13;
                  }
                  while ( v13 );
                }
                v8 -= SizeOfElements;
              }
              while ( v8 > v7 );
              v9 = v38;
            }
            goto LABEL_18;
          }
          v17 = SizeOfElements * (v10 >> 1);
          v18 = &v7[v17];
          if ( ((int (__fastcall *)(void *, char *, char *))CompareFunction)(Context, v7, &v7[v17]) > 0 )
          {
            v19 = SizeOfElements;
            v20 = &v7[v17];
            if ( v7 != v18 )
            {
              do
              {
                v21 = v20[-v17];
                v20[-v17] = *v20;
                *v20++ = v21;
                --v19;
              }
              while ( v19 );
            }
          }
          if ( ((int (__fastcall *)(void *, char *, char *, rsize_t))CompareFunction)(Context, v7, v8, v19) > 0 )
          {
            v22 = SizeOfElements;
            v23 = v8;
            if ( v7 != v8 )
            {
              v24 = v7 - v8;
              do
              {
                v25 = v23[v24];
                v23[v24] = *v23;
                *v23++ = v25;
                --v22;
              }
              while ( v22 );
            }
          }
          if ( ((int (__fastcall *)(void *, char *, char *))CompareFunction)(Context, &v7[v17], v8) > 0 )
          {
            v26 = SizeOfElements;
            v27 = v8;
            if ( v18 != v8 )
            {
              v28 = v18 - v8;
              do
              {
                v29 = v27[v28];
                v27[v28] = *v27;
                *v27++ = v29;
                --v26;
              }
              while ( v26 );
            }
          }
          v30 = (unsigned __int64)v7;
          v31 = v8;
          while ( 1 )
          {
            if ( (unsigned __int64)v18 > v30 )
            {
              while ( 1 )
              {
                v30 += SizeOfElements;
                if ( v30 >= (unsigned __int64)v18 )
                  break;
                if ( ((int (__fastcall *)(void *, unsigned __int64, char *))CompareFunction)(Context, v30, v18) > 0 )
                  goto LABEL_38;
              }
            }
            do
              v30 += SizeOfElements;
            while ( v30 <= (unsigned __int64)v8
                 && ((int (__fastcall *)(void *, unsigned __int64, char *))CompareFunction)(Context, v30, v18) <= 0 );
            do
            {
LABEL_38:
              v32 = v31;
              v31 -= SizeOfElements;
            }
            while ( v31 > v18 && ((int (__fastcall *)(void *, char *, char *))CompareFunction)(Context, v31, v18) > 0 );
            if ( (unsigned __int64)v31 < v30 )
              break;
            v33 = SizeOfElements;
            v34 = v31;
            if ( v31 != (char *)v30 )
            {
              v35 = v30 - (_QWORD)v31;
              do
              {
                v36 = v34[v35];
                v34[v35] = *v34;
                *v34++ = v36;
                --v33;
              }
              while ( v33 );
            }
            v37 = (char *)v30;
            if ( v18 != v31 )
              v37 = v18;
            v18 = v37;
          }
          if ( v18 < v32 )
          {
            while ( 1 )
            {
              v32 -= SizeOfElements;
              if ( v32 <= v18 )
                break;
              if ( ((unsigned int (__fastcall *)(void *, char *, char *))CompareFunction)(Context, v32, v18) )
              {
                v7 = v39;
                goto LABEL_54;
              }
            }
          }
          v7 = v39;
          do
            v32 -= SizeOfElements;
          while ( v32 > v39
               && !((unsigned int (__fastcall *)(void *, char *, char *))CompareFunction)(Context, v32, v18) );
LABEL_54:
          v9 = v38;
          if ( v32 - v7 >= (__int64)&v8[-v30] )
            break;
          if ( v30 < (unsigned __int64)v8 )
          {
            v40[v38] = v30;
            v40[v38 + 62] = v8;
            v9 = ++v38;
          }
          if ( v7 >= v32 )
          {
LABEL_18:
            v38 = --v9;
            if ( v9 < 0 )
              return;
            v7 = (char *)v40[v9];
            v8 = (char *)v40[v9 + 62];
            v39 = v7;
          }
          else
          {
            v8 = v32;
          }
        }
        if ( v7 < v32 )
        {
          v40[v38] = v7;
          v40[v38 + 62] = v32;
          v9 = ++v38;
        }
        if ( v30 >= (unsigned __int64)v8 )
          goto LABEL_18;
        v7 = (char *)v30;
        v39 = (char *)v30;
      }
    }
  }
  else
  {
    invalid_parameter();
  }
}
