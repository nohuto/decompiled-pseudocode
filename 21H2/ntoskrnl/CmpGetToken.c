/*
 * XREFs of CmpGetToken @ 0x140A63394
 * Callers:
 *     CmpParseInfBuffer @ 0x140A6306C (CmpParseInfBuffer.c)
 * Callees:
 *     isspace @ 0x1403D28D0 (isspace.c)
 *     strchr @ 0x1403D3860 (strchr.c)
 *     strncpy_s @ 0x1403D8080 (strncpy_s.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall CmpGetToken(const char **a1, unsigned __int64 a2, __int64 a3)
{
  const char *i; // rdi
  int v7; // eax
  const char *v8; // r14
  const char *v9; // rbx
  const char *v10; // r15
  __int64 v11; // rbx
  char *PoolWithTag; // rax
  char *v13; // r15
  char v14; // al
  const char *v15; // rbx
  const char *v16; // rbx
  int v17; // eax

  *(_QWORD *)(a3 + 8) = 0LL;
  *(_BYTE *)(a3 + 16) = 0;
  while ( 1 )
  {
    for ( i = *a1; (unsigned __int64)i < a2 && *i != 10 && isspace(*(unsigned __int8 *)i); ++i )
      ;
    if ( (unsigned __int64)i >= a2 )
      break;
    if ( *i == 59 || *i == 35 )
    {
      do
      {
        if ( *i == 10 )
          break;
        ++i;
      }
      while ( (unsigned __int64)i < a2 );
    }
    if ( (unsigned __int64)i >= a2 )
      break;
    v7 = *i;
    if ( *i == 26 )
      break;
    switch ( v7 )
    {
      case 10:
        *(_DWORD *)a3 = 1;
        break;
      case 34:
        v16 = ++i;
        while ( (unsigned __int64)i < a2 && !strchr(&StringTerminators[6], *i) )
          ++i;
        if ( (unsigned __int64)i < a2 && *i == 34 )
        {
          *i = 0;
          v17 = 4;
          ++i;
          *(_QWORD *)(a3 + 8) = v16;
        }
        else
        {
          v17 = 7;
        }
        *(_DWORD *)a3 = v17;
        goto LABEL_29;
      case 44:
        *(_DWORD *)a3 = 6;
        break;
      case 61:
        *(_DWORD *)a3 = 5;
        break;
      case 91:
        *(_DWORD *)a3 = 2;
        break;
      case 92:
        v15 = ++i;
        if ( (unsigned __int64)i < a2 )
        {
          do
          {
            if ( *v15 == 10 )
              break;
            if ( !isspace(*(unsigned __int8 *)v15) )
              break;
            ++v15;
          }
          while ( (unsigned __int64)v15 < a2 );
        }
        if ( *v15 == 59 || *v15 == 35 )
        {
          v15 = ++i;
          if ( (unsigned __int64)i < a2 )
          {
            do
            {
              if ( *v15 == 10 )
                break;
              ++v15;
            }
            while ( (unsigned __int64)v15 < a2 );
          }
        }
        if ( (unsigned __int64)v15 < a2 )
        {
          if ( *v15 == 10 )
          {
            i = v15 + 1;
            v14 = 0;
            goto LABEL_30;
          }
LABEL_19:
          v8 = i;
          v9 = i;
          if ( (unsigned __int64)i < a2 )
          {
            v10 = i;
            do
            {
              v9 = v10;
              if ( strchr(StringTerminators, *i) )
                break;
              i = v10 + 1;
              v10 = i;
              v9 = i;
            }
            while ( (unsigned __int64)i < a2 );
            if ( v9 != v8 )
            {
              v11 = (unsigned int)((_DWORD)i - (_DWORD)v8);
              if ( (int)v11 + 1 >= (unsigned int)v11
                && (PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(v11 + 1), 0x69704D43u),
                    (v13 = PoolWithTag) != 0LL) )
              {
                strncpy_s(PoolWithTag, (unsigned int)(v11 + 1), v8, (unsigned int)v11);
                v13[v11] = 0;
                *(_DWORD *)a3 = 4;
                *(_QWORD *)(a3 + 8) = v13;
                *(_BYTE *)(a3 + 16) = 1;
              }
              else
              {
                *(_DWORD *)a3 = 8;
              }
              goto LABEL_29;
            }
          }
          i = v9 + 1;
        }
        *(_DWORD *)a3 = 7;
        goto LABEL_29;
      case 93:
        *(_DWORD *)a3 = 3;
        break;
      default:
        goto LABEL_19;
    }
    ++i;
LABEL_29:
    v14 = 1;
LABEL_30:
    *a1 = i;
    if ( v14 )
      return;
  }
  *(_DWORD *)a3 = 0;
  *(_QWORD *)(a3 + 8) = 0LL;
  *a1 = i;
}
