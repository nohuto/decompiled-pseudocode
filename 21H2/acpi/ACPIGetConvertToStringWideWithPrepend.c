/*
 * XREFs of ACPIGetConvertToStringWideWithPrepend @ 0x1C001DD7C
 * Callers:
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C001DFB4 (ACPIGetConvertToCompatibleIDWide.c)
 * Callees:
 *     ACPIAnsiStringToWideHelper @ 0x1C001D258 (ACPIAnsiStringToWideHelper.c)
 *     RtlStringCchPrintfA @ 0x1C001D284 (RtlStringCchPrintfA.c)
 */

__int64 __fastcall ACPIGetConvertToStringWideWithPrepend(__int64 a1, int a2, __int64 a3, int a4, char **a5, _DWORD *a6)
{
  unsigned int v8; // r9d
  __int64 v9; // rax
  _BYTE *v10; // rcx
  _BYTE *v11; // rdx
  char v12; // si
  int v13; // r14d
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rbx
  char *Pool2; // rax
  char *v18; // rbp
  __int64 v19; // rcx

  if ( a2 < 0 )
    return (unsigned int)a2;
  if ( *(_WORD *)(a3 + 2) != 2 )
    return 3222536207LL;
  v8 = *(_DWORD *)(a3 + 24);
  v9 = 0LL;
  v10 = *(_BYTE **)(a3 + 32);
  if ( v8 )
  {
    v11 = *(_BYTE **)(a3 + 32);
    while ( *v11 )
    {
      if ( *v11 == 92 )
      {
        if ( &v10[v9] )
          goto LABEL_25;
        break;
      }
      v9 = (unsigned int)(v9 + 1);
      ++v11;
      if ( (unsigned int)v9 >= v8 )
        break;
    }
  }
  if ( *v10 == 42 )
  {
LABEL_25:
    v12 = 0;
    v13 = 0;
  }
  else
  {
    v12 = 1;
    v13 = 5;
  }
  v14 = -1LL;
  v15 = -1LL;
  do
    ++v15;
  while ( v10[v15] );
  v16 = (unsigned int)(v15 + 1);
  if ( v12 )
  {
    do
      ++v14;
    while ( v10[v14] );
    v16 = (unsigned int)(v13 + v14 + v16 + 1);
  }
  Pool2 = (char *)ExAllocatePool2(
                    (-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256,
                    2 * v16,
                    1399874369LL);
  v18 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v19 = 0LL;
  if ( v12 )
  {
    RtlStringCchPrintfA(Pool2, (unsigned int)v16, "ACPI\\%s", *(const char **)(a3 + 32));
    v19 = (unsigned int)(v13 + *(_DWORD *)(a3 + 24));
  }
  RtlStringCchPrintfA(&v18[v19], (unsigned int)(v16 - v19), "%s", *(const char **)(a3 + 32));
  ACPIAnsiStringToWideHelper(v18, 2 * v16);
  *a5 = v18;
  if ( a6 )
    *a6 = 2 * v16;
  return 0LL;
}
