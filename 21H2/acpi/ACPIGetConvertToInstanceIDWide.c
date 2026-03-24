/*
 * XREFs of ACPIGetConvertToInstanceIDWide @ 0x1C002866C
 * Callers:
 *     ACPIGetWorkerForString @ 0x1C000C4F0 (ACPIGetWorkerForString.c)
 *     ACPIGetConvertToInstanceID @ 0x1C0028068 (ACPIGetConvertToInstanceID.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C000C948 (RtlStringCchPrintfA.c)
 *     ACPIAnsiStringToWideHelper @ 0x1C000C9C4 (ACPIAnsiStringToWideHelper.c)
 *     RtlStringCchPrintfW @ 0x1C00287E0 (RtlStringCchPrintfW.c)
 *     memset @ 0x1C0032480 (memset.c)
 */

__int64 __fastcall ACPIGetConvertToInstanceIDWide(__int64 a1, int a2, __int64 a3, int a4, char **a5, _DWORD *a6)
{
  __int64 v8; // rbx
  wchar_t *v9; // rax
  char *v10; // rdi
  __int64 v12; // rbx
  char *PoolWithTag; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rbx
  char *v16; // rax

  if ( (a4 & 0x4000000) == 0 && (*(_QWORD *)(a1 + 8) & 0x1000000000000LL) != 0 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( *(_BYTE *)(*(_QWORD *)(a1 + 576) + v12) );
    v8 = (unsigned int)(v12 + 1);
    PoolWithTag = (char *)ExAllocatePoolWithTag(
                            (POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool),
                            2 * v8,
                            0x53706341u);
    v10 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memset(PoolWithTag, 0, 2 * v8);
    RtlStringCchPrintfA(v10, (unsigned int)v8, "%s", *(const char **)(a1 + 576));
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
    v15 = -1LL;
    do
      ++v15;
    while ( *(_BYTE *)(*(_QWORD *)(a3 + 32) + v15) );
    v8 = (unsigned int)(v15 + 1);
    v16 = (char *)ExAllocatePoolWithTag(
                    (POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool),
                    2 * v8,
                    0x53706341u);
    v10 = v16;
    if ( !v16 )
      return 3221225626LL;
    memset(v16, 0, 2 * v8);
    RtlStringCchPrintfA(v10, (unsigned int)v8, "%s", *(const char **)(a3 + 32));
    v14 = 2 * v8;
    goto LABEL_15;
  }
  LODWORD(v8) = 9;
  v9 = (wchar_t *)ExAllocatePoolWithTag(
                    (POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool),
                    0x12uLL,
                    0x53706341u);
  v10 = (char *)v9;
  if ( !v9 )
    return 3221225626LL;
  *(_OWORD *)v9 = 0LL;
  v9[8] = 0;
  RtlStringCchPrintfW(v9, 9uLL, L"%lx", *(unsigned int *)(a3 + 16));
LABEL_7:
  *a5 = v10;
  if ( a6 )
    *a6 = 2 * v8;
  return 0LL;
}
