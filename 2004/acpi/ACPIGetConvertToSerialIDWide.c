/*
 * XREFs of ACPIGetConvertToSerialIDWide @ 0x1C0055980
 * Callers:
 *     ACPIGetWorkerForString @ 0x1C000C130 (ACPIGetWorkerForString.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1C0028580 (RtlStringCchPrintfW.c)
 *     ACPIGetConvertToStringWide @ 0x1C0055AB8 (ACPIGetConvertToStringWide.c)
 */

__int64 __fastcall ACPIGetConvertToSerialIDWide(__int64 a1, int a2, __int64 a3, int a4, wchar_t **a5, _DWORD *a6)
{
  wchar_t *PoolWithTag; // rax
  wchar_t *v9; // rdi

  if ( a2 < 0 )
    return (unsigned int)a2;
  if ( *(_WORD *)(a3 + 2) == 1 )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(
                               (POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool),
                               0x12uLL,
                               0x53706341u);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      RtlStringCchPrintfW(PoolWithTag, 9uLL, L"%X", *(unsigned int *)(a3 + 16));
      *a5 = v9;
      if ( a6 )
        *a6 = 18;
      return 0LL;
    }
    else
    {
      return 3221225626LL;
    }
  }
  else if ( *(_WORD *)(a3 + 2) == 2 )
  {
    return ACPIGetConvertToStringWide(1, a2, a3, a4, (__int64)a5, (__int64)a6);
  }
  else
  {
    return 3222536207LL;
  }
}
