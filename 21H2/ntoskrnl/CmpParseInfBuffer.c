/*
 * XREFs of CmpParseInfBuffer @ 0x140A6306C
 * Callers:
 *     EmpParseInfDatabase @ 0x140A465E8 (EmpParseInfDatabase.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     CmpGetToken @ 0x140A63394 (CmpGetToken.c)
 *     CmpAppendValue @ 0x140A63630 (CmpAppendValue.c)
 *     CmpAppendLine @ 0x140A636B4 (CmpAppendLine.c)
 *     CmpAppendSection @ 0x140A6373C (CmpAppendSection.c)
 */

_QWORD *__fastcall CmpParseInfBuffer(__int64 a1, unsigned int a2, int *a3)
{
  __int64 v3; // rdi
  void *v5; // r13
  char v6; // r12
  _QWORD *result; // rax
  _QWORD *v8; // r14
  unsigned int v9; // r15d
  __int64 v10; // rax
  char v11; // bl
  char v12; // si
  __int64 v13; // r8
  int v14; // edi
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r8
  PVOID P; // [rsp+20h] [rbp-30h]
  __int64 v19; // [rsp+28h] [rbp-28h] BYREF
  __int64 v20; // [rsp+30h] [rbp-20h]
  __int128 v21; // [rsp+38h] [rbp-18h] BYREF
  __int64 v22; // [rsp+48h] [rbp-8h]
  int v24; // [rsp+A8h] [rbp+58h]

  v3 = a2;
  v22 = 0LL;
  v5 = 0LL;
  v6 = 0;
  v21 = 0LL;
  result = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x69704D43u);
  v8 = result;
  if ( !result )
    return result;
  v9 = 1;
  *result = 0LL;
  result[1] = 0LL;
  result[2] = 0LL;
  result[3] = 0LL;
  *((_DWORD *)result + 8) = 0;
  result[5] = 0LL;
  v10 = a1 + v3;
  v19 = a1;
  v11 = 0;
  v20 = v10;
  v12 = 0;
  P = 0LL;
  v24 = 1;
  do
  {
    CmpGetToken(&v19, v10, &v21);
    v13 = 6LL;
    if ( v9 <= 6 )
    {
      if ( v9 != 6 )
      {
        switch ( v9 )
        {
          case 1u:
            v14 = v21;
            if ( (_DWORD)v21 )
            {
              if ( (_DWORD)v21 != 1 )
              {
                if ( (_DWORD)v21 != 2 )
                  goto LABEL_58;
                v9 = 2;
              }
              goto LABEL_24;
            }
            goto LABEL_57;
          case 2u:
            v14 = v21;
            if ( (_DWORD)v21 != 3 )
            {
              if ( (_DWORD)v21 != 4 )
                goto LABEL_58;
              v9 = 3;
              v6 = v22;
              P = (PVOID)*((_QWORD *)&v21 + 1);
              goto LABEL_24;
            }
            LOBYTE(v22) = 0;
            *((_QWORD *)&v21 + 1) = &EmptyValue;
            v6 = 0;
            break;
          case 3u:
            v14 = v21;
            if ( (_DWORD)v21 != 3 )
              goto LABEL_58;
            break;
          case 4u:
            v14 = v21;
            if ( (_DWORD)v21 )
            {
              if ( (_DWORD)v21 != 1 )
              {
                v11 = 1;
                v12 = 1;
                goto LABEL_61;
              }
              LOBYTE(v13) = v6;
              if ( !(unsigned __int8)CmpAppendSection(v8, P, v13) )
                goto LABEL_58;
              v9 = 5;
            }
            else
            {
              LOBYTE(v13) = v6;
              if ( !(unsigned __int8)CmpAppendSection(v8, P, v13) )
                goto LABEL_58;
              v11 = 1;
            }
            P = 0LL;
            goto LABEL_24;
          default:
            v14 = v21;
            if ( (_DWORD)v21 )
            {
              if ( (_DWORD)v21 != 1 )
              {
                if ( (_DWORD)v21 == 2 )
                {
                  v9 = 2;
                }
                else
                {
                  if ( (_DWORD)v21 != 4 )
                  {
                    v11 = v9 - 4;
                    v12 = v9 - 4;
                    goto LABEL_61;
                  }
                  v5 = (void *)*((_QWORD *)&v21 + 1);
                  v9 = 6;
                  v6 = v22;
                }
              }
              goto LABEL_24;
            }
            goto LABEL_57;
        }
        v9 = 4;
        goto LABEL_24;
      }
      v14 = v21;
      if ( (_DWORD)v21 )
      {
        switch ( (_DWORD)v21 )
        {
          case 1:
            if ( (unsigned __int8)CmpAppendLine(v8, 0LL, 0LL) )
            {
              LOBYTE(v16) = v6;
              if ( (unsigned __int8)CmpAppendValue(v8, v5, v16) )
              {
                v5 = 0LL;
                goto LABEL_41;
              }
            }
            break;
          case 5:
            LOBYTE(v13) = v6;
            if ( !(unsigned __int8)CmpAppendLine(v8, v5, v13) )
              goto LABEL_58;
            v5 = 0LL;
            v9 = 8;
            goto LABEL_24;
          case 6:
            if ( (unsigned __int8)CmpAppendLine(v8, 0LL, 0LL) )
            {
              LOBYTE(v15) = v6;
              if ( (unsigned __int8)CmpAppendValue(v8, v5, v15) )
              {
                v5 = 0LL;
                v9 = 7;
                goto LABEL_24;
              }
            }
            break;
          default:
            goto LABEL_58;
        }
      }
      else if ( (unsigned __int8)CmpAppendLine(v8, 0LL, 0LL) )
      {
        LOBYTE(v17) = v6;
        if ( (unsigned __int8)CmpAppendValue(v8, v5, v17) )
        {
          v5 = 0LL;
          goto LABEL_57;
        }
      }
    }
    else
    {
      if ( v9 != 7 )
      {
        if ( v9 != 8 )
        {
          v14 = v21;
          if ( (_DWORD)v21 )
          {
            if ( (_DWORD)v21 != 1 )
            {
              if ( (_DWORD)v21 != 6 )
                goto LABEL_58;
              v9 = 7;
              goto LABEL_24;
            }
            goto LABEL_41;
          }
          goto LABEL_57;
        }
        v14 = v21;
        if ( (_DWORD)v21 )
        {
          if ( (_DWORD)v21 != 1 )
          {
            if ( (_DWORD)v21 != 4 )
              goto LABEL_58;
            v13 = 0LL;
            goto LABEL_22;
          }
          LOBYTE(v22) = 0;
          *((_QWORD *)&v21 + 1) = &EmptyValue;
          v6 = 0;
          if ( !(unsigned __int8)CmpAppendValue(v8, &EmptyValue, 0LL) )
          {
            v12 = 1;
            v11 = 1;
            goto LABEL_61;
          }
LABEL_41:
          v9 = 5;
          goto LABEL_24;
        }
        LOBYTE(v22) = 0;
        *((_QWORD *)&v21 + 1) = &EmptyValue;
        v6 = 0;
        if ( !(unsigned __int8)CmpAppendValue(v8, &EmptyValue, 0LL) )
          v12 = 1;
LABEL_57:
        v11 = 1;
        goto LABEL_24;
      }
      v14 = v21;
      if ( (_DWORD)v21 == 4 )
      {
        LOBYTE(v13) = v22;
LABEL_22:
        if ( !(unsigned __int8)CmpAppendValue(v8, *((_QWORD *)&v21 + 1), v13) )
          goto LABEL_58;
        v9 = 9;
        goto LABEL_24;
      }
      if ( (_DWORD)v21 != 6 )
      {
LABEL_58:
        v11 = 1;
        v12 = 1;
        goto LABEL_61;
      }
      LOBYTE(v22) = 0;
      *((_QWORD *)&v21 + 1) = &EmptyValue;
      v6 = 0;
      if ( (unsigned __int8)CmpAppendValue(v8, &EmptyValue, 0LL) )
        goto LABEL_24;
    }
    v11 = 1;
    v12 = 1;
LABEL_24:
    if ( !v12 )
    {
      if ( v14 == 1 )
        ++v24;
      goto LABEL_27;
    }
LABEL_61:
    *a3 = v24;
    if ( P && v6 )
      ExFreePoolWithTag(P, 0);
    if ( v5 && v6 )
      ExFreePoolWithTag(v5, 0);
    ExFreePoolWithTag(v8, 0);
    v8 = 0LL;
LABEL_27:
    v10 = v20;
  }
  while ( !v11 );
  if ( v8 )
    v8[1] = 0LL;
  return v8;
}
