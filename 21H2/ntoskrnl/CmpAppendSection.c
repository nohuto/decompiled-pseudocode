/*
 * XREFs of CmpAppendSection @ 0x140A6373C
 * Callers:
 *     CmpParseInfBuffer @ 0x140A6306C (CmpParseInfBuffer.c)
 * Callees:
 *     _stricmp @ 0x1403D1F40 (_stricmp.c)
 *     _strnicmp @ 0x1403D1FF0 (_strnicmp.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

char __fastcall CmpAppendSection(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v6; // rbx
  const char *v7; // rcx
  _QWORD *PoolWithTag; // rax
  _QWORD *v9; // rax
  char result; // al

  if ( a1 && a2 )
  {
    v6 = *(_QWORD **)a1;
    if ( *(_QWORD *)a1 )
    {
      do
      {
        v7 = (const char *)v6[1];
        if ( v7 && !stricmp(v7, (const char *)a2) )
          break;
        v6 = (_QWORD *)*v6;
      }
      while ( v6 );
      if ( v6 )
      {
        v9 = (_QWORD *)v6[2];
        if ( v9 )
        {
          while ( *v9 )
            v9 = (_QWORD *)*v9;
        }
        goto LABEL_11;
      }
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x69704D43u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = 0LL;
      PoolWithTag[2] = 0LL;
      PoolWithTag[1] = a2;
      *((_BYTE *)PoolWithTag + 24) = a3;
      *PoolWithTag = *(_QWORD *)a1;
      *(_QWORD *)a1 = PoolWithTag;
      if ( !strnicmp((const char *)a2, "Strings", 7uLL) && (*(_BYTE *)(a2 + 7) == 0) > *(int *)(a1 + 32) )
        *(_QWORD *)(a1 + 40) = v6;
      v9 = 0LL;
LABEL_11:
      *(_QWORD *)(a1 + 16) = v9;
      result = 1;
      *(_QWORD *)(a1 + 24) = 0LL;
      *(_QWORD *)(a1 + 8) = v6;
      return result;
    }
  }
  return 0;
}
