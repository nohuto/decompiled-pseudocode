/*
 * XREFs of ACPIGetConvertToPnpIDWide @ 0x1C00281E0
 * Callers:
 *     ACPIGetWorkerForString @ 0x1C000C4F0 (ACPIGetWorkerForString.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C0027D58 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIGetConvertToPnpID @ 0x1C00280D0 (ACPIGetConvertToPnpID.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C000C948 (RtlStringCchPrintfA.c)
 *     ACPIAnsiStringToWideHelper @ 0x1C000C9C4 (ACPIAnsiStringToWideHelper.c)
 *     ACPIAmliDoubleToNameWide @ 0x1C00285AC (ACPIAmliDoubleToNameWide.c)
 *     memset @ 0x1C0032480 (memset.c)
 */

__int64 __fastcall ACPIGetConvertToPnpIDWide(__int64 a1, int a2, __int64 a3, int a4, char **a5, int *a6)
{
  int v8; // ebp
  char *v9; // rdi
  __int64 v10; // r8
  int v12; // eax
  const char *v13; // rsi
  __int64 v14; // rbx
  unsigned int v15; // ebx
  SIZE_T v16; // r14
  char *v17; // rax
  const char *v18; // r9
  __int64 v19; // rbx
  char *PoolWithTag; // rax

  if ( (a4 & 0x4000000) == 0 && (*(_QWORD *)(a1 + 8) & 0x800000000000LL) != 0 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *(_BYTE *)(*(_QWORD *)(a1 + 568) + v19) );
    v15 = v19 - 3;
    v8 = 2 * v15;
    v16 = 2 * v15;
    PoolWithTag = (char *)ExAllocatePoolWithTag(
                            (POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool),
                            v16,
                            0x53706341u);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, (unsigned int)v16);
      v18 = (const char *)(*(_QWORD *)(a1 + 568) + 5LL);
      goto LABEL_18;
    }
    return 3221225626LL;
  }
  if ( a2 < 0 )
    return (unsigned int)a2;
  if ( *(_WORD *)(a3 + 2) != 1 )
  {
    if ( *(_WORD *)(a3 + 2) != 2 )
      return 3222536207LL;
    v12 = *(_DWORD *)(a3 + 24);
    v13 = *(const char **)(a3 + 32);
    if ( !v12 )
      return 3221225485LL;
    if ( *v13 == 42 )
    {
      ++v13;
      --v12;
    }
    if ( !v12 )
      return 3221225485LL;
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v15 = v14 + 2;
    v8 = 2 * v15;
    v16 = 2 * v15;
    v17 = (char *)ExAllocatePoolWithTag(
                    (POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool),
                    v16,
                    0x53706341u);
    v9 = v17;
    if ( v17 )
    {
      memset(v17, 0, (unsigned int)v16);
      v18 = v13;
LABEL_18:
      RtlStringCchPrintfA(v9, v15, "*%s", v18);
      ACPIAnsiStringToWideHelper(v9, v16);
      goto LABEL_6;
    }
    return 3221225626LL;
  }
  v8 = 18;
  v9 = (char *)ExAllocatePoolWithTag(
                 (POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool),
                 0x12uLL,
                 0x53706341u);
  if ( !v9 )
    return 3221225626LL;
  *(_OWORD *)v9 = 0LL;
  *((_WORD *)v9 + 8) = 0;
  LOBYTE(v10) = 1;
  ACPIAmliDoubleToNameWide(v9, *(unsigned int *)(a3 + 16), v10);
LABEL_6:
  *a5 = v9;
  if ( a6 )
    *a6 = v8;
  return 0LL;
}
