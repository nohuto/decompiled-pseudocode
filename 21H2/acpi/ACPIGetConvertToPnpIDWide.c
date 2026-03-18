/*
 * XREFs of ACPIGetConvertToPnpIDWide @ 0x1C001C5D8
 * Callers:
 *     ACPIGetWorkerForString @ 0x1C0019740 (ACPIGetWorkerForString.c)
 *     ACPIGetConvertToPnpID @ 0x1C001C530 (ACPIGetConvertToPnpID.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C001DFB4 (ACPIGetConvertToCompatibleIDWide.c)
 * Callees:
 *     ACPIAnsiStringToWideHelper @ 0x1C001D258 (ACPIAnsiStringToWideHelper.c)
 *     RtlStringCchPrintfA @ 0x1C001D284 (RtlStringCchPrintfA.c)
 *     ACPIAmliDoubleToNameWide @ 0x1C001D62C (ACPIAmliDoubleToNameWide.c)
 */

__int64 __fastcall ACPIGetConvertToPnpIDWide(__int64 a1, int a2, __int64 a3, int a4, char **a5, int *a6)
{
  int v8; // eax
  const char *v9; // rsi
  __int64 v10; // rbx
  unsigned int v11; // ebx
  int v12; // ebp
  __int64 v13; // r14
  char *Pool2; // rdi
  const char *v15; // r9
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rbx

  if ( (a4 & 0x4000000) == 0 && _bittest64((const signed __int64 *)(a1 + 8), 0x2Fu) )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *(_BYTE *)(*(_QWORD *)(a1 + 608) + v19) );
    v11 = v19 - 3;
    v12 = 2 * v11;
    v13 = 2 * v11;
    Pool2 = (char *)ExAllocatePool2(
                      (-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256,
                      v13,
                      1399874369LL);
    if ( Pool2 )
    {
      v15 = (const char *)(*(_QWORD *)(a1 + 608) + 5LL);
      goto LABEL_11;
    }
    return 3221225626LL;
  }
  if ( a2 < 0 )
    return (unsigned int)a2;
  if ( *(_WORD *)(a3 + 2) == 1 )
  {
    v12 = 18;
    v17 = ExAllocatePool2((-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256, 18LL, 1399874369LL);
    Pool2 = (char *)v17;
    if ( v17 )
    {
      LOBYTE(v18) = 1;
      ACPIAmliDoubleToNameWide(v17, *(unsigned int *)(a3 + 16), v18);
      goto LABEL_12;
    }
    return 3221225626LL;
  }
  if ( *(_WORD *)(a3 + 2) != 2 )
    return 3222536207LL;
  v8 = *(_DWORD *)(a3 + 24);
  v9 = *(const char **)(a3 + 32);
  if ( !v8 )
    return 3221225485LL;
  if ( *v9 == 42 )
  {
    ++v9;
    if ( v8 == 1 )
      return 3221225485LL;
  }
  v10 = -1LL;
  do
    ++v10;
  while ( v9[v10] );
  v11 = v10 + 2;
  v12 = 2 * v11;
  v13 = 2 * v11;
  Pool2 = (char *)ExAllocatePool2((-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256, v13, 1399874369LL);
  if ( !Pool2 )
    return 3221225626LL;
  v15 = v9;
LABEL_11:
  RtlStringCchPrintfA(Pool2, v11, "*%s", v15);
  ACPIAnsiStringToWideHelper(Pool2, v13);
LABEL_12:
  *a5 = Pool2;
  if ( a6 )
    *a6 = v12;
  return 0LL;
}
