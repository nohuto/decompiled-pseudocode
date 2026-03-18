/*
 * XREFs of ACPIGetConvertToInstanceIDWide @ 0x1C001D9C0
 * Callers:
 *     ACPIGetWorkerForString @ 0x1C0019740 (ACPIGetWorkerForString.c)
 *     ACPIGetConvertToInstanceID @ 0x1C001D958 (ACPIGetConvertToInstanceID.c)
 * Callees:
 *     ACPIAnsiStringToWideHelper @ 0x1C001D258 (ACPIAnsiStringToWideHelper.c)
 *     RtlStringCchPrintfA @ 0x1C001D284 (RtlStringCchPrintfA.c)
 *     RtlStringCchPrintfW @ 0x1C001DBA0 (RtlStringCchPrintfW.c)
 */

__int64 __fastcall ACPIGetConvertToInstanceIDWide(__int64 a1, int a2, __int64 a3, int a4, _QWORD *a5, _DWORD *a6)
{
  __int64 v8; // rbx
  wchar_t *v9; // rax
  _WORD *v10; // rdi
  __int64 v12; // rbx
  char *v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rbx
  char *Pool2; // rax

  if ( (a4 & 0x4000000) == 0 && _bittest64((const signed __int64 *)(a1 + 8), 0x30u) )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( *(_BYTE *)(*(_QWORD *)(a1 + 616) + v15) );
    v8 = (unsigned int)(v15 + 1);
    Pool2 = (char *)ExAllocatePool2(
                      (-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256,
                      2 * v8,
                      1399874369LL);
    v10 = Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    RtlStringCchPrintfA(Pool2, (unsigned int)v8, "%s", *(const char **)(a1 + 616));
    v14 = 2 * v8;
LABEL_15:
    ACPIAnsiStringToWideHelper(v10, v14);
    goto LABEL_7;
  }
  if ( a2 < 0 )
    return (unsigned int)a2;
  if ( *(_WORD *)(a3 + 2) != 1 )
  {
    if ( *(_WORD *)(a3 + 2) != 2 )
      return 3222536207LL;
    v12 = -1LL;
    do
      ++v12;
    while ( *(_BYTE *)(*(_QWORD *)(a3 + 32) + v12) );
    v8 = (unsigned int)(v12 + 1);
    v13 = (char *)ExAllocatePool2(
                    (-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256,
                    2 * v8,
                    1399874369LL);
    v10 = v13;
    if ( !v13 )
      return 3221225626LL;
    RtlStringCchPrintfA(v13, (unsigned int)v8, "%s", *(const char **)(a3 + 32));
    v14 = 2 * v8;
    goto LABEL_15;
  }
  LODWORD(v8) = 9;
  v9 = (wchar_t *)ExAllocatePool2((-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256, 18LL, 1399874369LL);
  v10 = v9;
  if ( !v9 )
    return 3221225626LL;
  RtlStringCchPrintfW(v9, 9uLL, L"%lx", *(unsigned int *)(a3 + 16));
LABEL_7:
  *a5 = v10;
  if ( a6 )
    *a6 = 2 * v8;
  return 0LL;
}
