/*
 * XREFs of _RtlTraceDatabaseValidate@4 @ 0x4B36A430
 * Callers:
 *     <none>
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 */

char __stdcall RtlTraceDatabaseValidate(_DWORD *a1)
{
  int v1; // ecx
  int v2; // edx

  RtlEnterCriticalSection((int)(a1 + 7));
  a1[6] = 0;
  v1 = a1[13];
  if ( v1 )
  {
    v2 = a1[14];
    do
    {
      v2 += 4;
      --v1;
    }
    while ( v1 );
  }
  RtlLeaveCriticalSection((int)(a1 + 7));
  return 1;
}
