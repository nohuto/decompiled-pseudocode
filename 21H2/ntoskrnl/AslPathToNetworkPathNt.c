/*
 * XREFs of AslPathToNetworkPathNt @ 0x1407544DC
 * Callers:
 *     SdbpResolveMatchingFile @ 0x140753B9C (SdbpResolveMatchingFile.c)
 * Callees:
 *     wcscat_s @ 0x1403D8340 (wcscat_s.c)
 *     wcscpy_s @ 0x1403D83E0 (wcscpy_s.c)
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     AslAlloc @ 0x14075B258 (AslAlloc.c)
 */

__int64 __fastcall AslPathToNetworkPathNt(wchar_t **a1, _WORD *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdi
  unsigned __int64 v5; // rax
  __int16 v7; // ax
  const wchar_t *v8; // r14
  __int16 v9; // ax
  __int16 v10; // ax
  rsize_t v11; // rdi
  wchar_t *v12; // rax
  wchar_t *v13; // rsi

  v2 = 0;
  v4 = -1LL;
  *a1 = 0LL;
  v5 = -1LL;
  do
    ++v5;
  while ( a2[v5] );
  if ( v5 > 4
    && (*a2 == 92 || *a2 == 47)
    && ((v7 = a2[1], v7 == 92) || v7 == 47)
    && ((v8 = a2 + 2, v9 = a2[2], v9 != 46) && v9 != 63 || (v10 = a2[3], v10 != 92) && v10 != 47 && v10) )
  {
    do
      ++v4;
    while ( a2[v4] );
    v11 = v4 + 9;
    v12 = (wchar_t *)AslAlloc(a1, 2 * v11);
    v13 = v12;
    if ( v12 )
    {
      wcscpy_s(v12, v11, L"\\??\\UNC\\");
      wcscat_s(v13, v11, v8);
      *a1 = v13;
    }
    else
    {
      v2 = -1073741801;
      AslLogCallPrintf(1, (unsigned int)"AslPathToNetworkPathNt", 351, (unsigned int)"Out of memory");
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
