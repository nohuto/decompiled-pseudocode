/*
 * XREFs of _RtlDebugCreateTagHeap@16 @ 0x4B35F5CA
 * Callers:
 *     _RtlCreateTagHeap@16 @ 0x4B2EA550 (_RtlCreateTagHeap@16.c)
 * Callees:
 *     _RtlpCheckHeapSignature@8 @ 0x4B2A7622 (_RtlpCheckHeapSignature@8.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _RtlCreateTagHeap@16 @ 0x4B2EA550 (_RtlCreateTagHeap@16.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlDebugCreateTagHeap@16 @ 0x4B35F5CA (_RtlDebugCreateTagHeap@16.c)
 *     _RtlpValidateHeap@8 @ 0x4B360697 (_RtlpValidateHeap@8.c)
 *     _RtlpValidateHeapHeaders@8 @ 0x4B360B86 (_RtlpValidateHeapHeaders@8.c)
 *     _RtlpHeapExceptionFilter@8 @ 0x4B375DFF (_RtlpHeapExceptionFilter@8.c)
 */

int __fastcall RtlDebugCreateTagHeap(_DWORD *a1, int a2, _WORD *a3, __int16 *a4)
{
  int v6; // edx
  int v7; // ebx
  int TagHeap; // [esp+18h] [ebp-24h]
  char v11; // [esp+23h] [ebp-19h]

  v11 = 0;
  TagHeap = 0;
  if ( RtlpCheckHeapSignature(a1, "RtlCreateTagHeap") )
  {
    v7 = a1[17] | 0x10000000 | a2;
    if ( (v7 & 1) == 0 )
    {
      RtlEnterCriticalSection(a1[50]);
      v11 = 1;
      v7 |= 1u;
    }
    LOBYTE(v6) = 0;
    if ( (unsigned __int8)RtlpValidateHeap(a1, v6) )
      TagHeap = RtlCreateTagHeap(a1, v7, a3, a4);
    RtlpValidateHeapHeaders(a1);
  }
  if ( v11 )
    RtlLeaveCriticalSection(a1[50]);
  return TagHeap;
}
