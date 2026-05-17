/*
 * XREFs of _RtlDebugQueryTagHeap@20 @ 0x4B35FB69
 * Callers:
 *     _RtlQueryTagHeap@20 @ 0x4B356E90 (_RtlQueryTagHeap@20.c)
 * Callees:
 *     _RtlpCheckHeapSignature@8 @ 0x4B2A7622 (_RtlpCheckHeapSignature@8.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlQueryTagHeap@20 @ 0x4B356E90 (_RtlQueryTagHeap@20.c)
 *     _RtlDebugQueryTagHeap@20 @ 0x4B35FB69 (_RtlDebugQueryTagHeap@20.c)
 *     _RtlpValidateHeap@8 @ 0x4B360697 (_RtlpValidateHeap@8.c)
 *     _RtlpHeapExceptionFilter@8 @ 0x4B375DFF (_RtlpHeapExceptionFilter@8.c)
 */

int *__fastcall RtlDebugQueryTagHeap(_DWORD *a1, int a2, int a3, int a4, _DWORD *a5)
{
  int v7; // edx
  int v8; // ebx
  int *TagHeap; // [esp+18h] [ebp-24h]
  char v12; // [esp+23h] [ebp-19h]

  v12 = 0;
  TagHeap = 0;
  if ( RtlpCheckHeapSignature(a1, "RtlQueryTagHeap") )
  {
    v8 = a1[17] | 0x10000000 | a2;
    if ( (v8 & 1) == 0 )
    {
      RtlEnterCriticalSection(a1[50]);
      v12 = 1;
      v8 |= 1u;
    }
    LOBYTE(v7) = 0;
    if ( (unsigned __int8)RtlpValidateHeap(a1, v7) )
      TagHeap = RtlQueryTagHeap((int)a1, v8, a3, a4, a5);
  }
  if ( v12 )
    RtlLeaveCriticalSection(a1[50]);
  return TagHeap;
}
