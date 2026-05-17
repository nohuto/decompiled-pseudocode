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

int __fastcall RtlDebugCompactHeap(_DWORD *a1, int a2)
{
  int v5; // edx
  int v6; // ebx
  int v8; // [esp+1Ch] [ebp-20h]
  char v9; // [esp+23h] [ebp-19h]

  v9 = 0;
  if ( (a1[17] & 0x1000000) != 0 )
    return dword_4B3A378C(dword_4B3A378C, a1, a2);
  if ( RtlpCheckHeapSignature(a1, "RtlCompactHeap") )
  {
    v6 = a1[17] | 0x10000000 | a2;
    if ( (v6 & 1) == 0 )
    {
      RtlEnterCriticalSection(a1[50]);
      v9 = 1;
      v6 |= 1u;
    }
    LOBYTE(v5) = 0;
    RtlpValidateHeap(a1, v5);
    v8 = RtlCompactHeap(a1, v6);
    RtlpValidateHeapHeaders(a1);
  }
  else
  {
    v8 = 0;
  }
  if ( v9 )
    RtlLeaveCriticalSection(a1[50]);
  return v8;
}
