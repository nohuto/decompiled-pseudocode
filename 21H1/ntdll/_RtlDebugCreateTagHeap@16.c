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

ULONG __fastcall RtlDebugCreateTagHeap(int a1, int a2, PWSTR TagPrefix, PWSTR TagNames)
{
  ULONG v6; // ebx
  ULONG TagHeap; // [esp+18h] [ebp-24h]
  char v10; // [esp+23h] [ebp-19h]

  v10 = 0;
  TagHeap = 0;
  if ( RtlpCheckHeapSignature((_DWORD *)a1, "RtlCreateTagHeap") )
  {
    v6 = *(_DWORD *)(a1 + 68) | 0x10000000 | a2;
    if ( (v6 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 200));
      v10 = 1;
      v6 |= 1u;
    }
    if ( (unsigned __int8)RtlpValidateHeap((PVOID)a1) )
      TagHeap = RtlCreateTagHeap((PVOID)a1, v6, TagPrefix, TagNames);
    RtlpValidateHeapHeaders((void *)a1);
  }
  if ( v10 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 200));
  return TagHeap;
}
