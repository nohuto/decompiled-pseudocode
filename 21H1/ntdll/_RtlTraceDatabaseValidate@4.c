/*
 * XREFs of _RtlTraceDatabaseValidate@4 @ 0x4B36A430
 * Callers:
 *     <none>
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 */

char __stdcall RtlTraceDatabaseValidate(int a1)
{
  int v1; // ecx
  int v2; // edx

  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 28));
  *(_DWORD *)(a1 + 24) = 0;
  v1 = *(_DWORD *)(a1 + 52);
  if ( v1 )
  {
    v2 = *(_DWORD *)(a1 + 56);
    do
    {
      v2 += 4;
      --v1;
    }
    while ( v1 );
  }
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 28));
  return 1;
}
