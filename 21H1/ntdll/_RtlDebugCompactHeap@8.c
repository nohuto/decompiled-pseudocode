/*
 * XREFs of _RtlDebugCompactHeap@8 @ 0x4B35F26E
 * Callers:
 *     _RtlCompactHeap@8 @ 0x4B3567C0 (_RtlCompactHeap@8.c)
 * Callees:
 *     _RtlpCheckHeapSignature@8 @ 0x4B2A7622 (_RtlpCheckHeapSignature@8.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlCompactHeap@8 @ 0x4B3567C0 (_RtlCompactHeap@8.c)
 *     _RtlDebugCompactHeap@8 @ 0x4B35F26E (_RtlDebugCompactHeap@8.c)
 *     _RtlpValidateHeap@8 @ 0x4B360697 (_RtlpValidateHeap@8.c)
 *     _RtlpValidateHeapHeaders@8 @ 0x4B360B86 (_RtlpValidateHeapHeaders@8.c)
 *     _RtlpHeapExceptionFilter@8 @ 0x4B375DFF (_RtlpHeapExceptionFilter@8.c)
 */

int __fastcall RtlDebugCompactHeap(int a1, int a2)
{
  ULONG v5; // ebx
  int v7; // [esp+1Ch] [ebp-20h]
  char v8; // [esp+23h] [ebp-19h]

  v8 = 0;
  if ( (*(_DWORD *)(a1 + 68) & 0x1000000) != 0 )
    return dword_4B3A378C(dword_4B3A378C, a1, a2);
  if ( RtlpCheckHeapSignature((_DWORD *)a1, "RtlCompactHeap") )
  {
    v5 = *(_DWORD *)(a1 + 68) | 0x10000000 | a2;
    if ( (v5 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 200));
      v8 = 1;
      v5 |= 1u;
    }
    RtlpValidateHeap((PVOID)a1);
    v7 = RtlCompactHeap((PVOID)a1, v5);
    RtlpValidateHeapHeaders((void *)a1);
  }
  else
  {
    v7 = 0;
  }
  if ( v8 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 200));
  return v7;
}
