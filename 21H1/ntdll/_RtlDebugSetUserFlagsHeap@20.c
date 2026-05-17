/*
 * XREFs of _RtlDebugSetUserFlagsHeap@20 @ 0x4B36015A
 * Callers:
 *     _RtlSetUserFlagsHeap@20 @ 0x4B357160 (_RtlSetUserFlagsHeap@20.c)
 * Callees:
 *     _RtlpValidateHeapEntry@12 @ 0x4B2A74FF (_RtlpValidateHeapEntry@12.c)
 *     _RtlpCheckHeapSignature@8 @ 0x4B2A7622 (_RtlpCheckHeapSignature@8.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlSetUserFlagsHeap@20 @ 0x4B357160 (_RtlSetUserFlagsHeap@20.c)
 *     _RtlDebugSetUserFlagsHeap@20 @ 0x4B36015A (_RtlDebugSetUserFlagsHeap@20.c)
 *     _RtlpValidateHeap@8 @ 0x4B360697 (_RtlpValidateHeap@8.c)
 *     _RtlpHeapExceptionFilter@8 @ 0x4B375DFF (_RtlpHeapExceptionFilter@8.c)
 */

char __fastcall RtlDebugSetUserFlagsHeap(_DWORD *a1, int a2, int a3, unsigned int a4, unsigned int a5, int a6, int a7)
{
  int v10; // edx
  int v11; // ebx
  unsigned int v12; // edx
  int v13; // edx
  char v15; // [esp+1Eh] [ebp-1Ah]
  char v16; // [esp+1Fh] [ebp-19h]

  v16 = 0;
  v15 = 0;
  if ( (a1[17] & 0x1000000) != 0 )
    return dword_4B3A3780(dword_4B3A3780, a1, a2, a3, a4, a5);
  if ( ((a5 | a4) & 0xFFFFF1FF) != 0 )
    return 0;
  if ( RtlpCheckHeapSignature(a1, "RtlSetUserFlagsHeap") )
  {
    v11 = a1[17] | 0x10000000 | a2;
    if ( (v11 & 1) == 0 )
    {
      RtlEnterCriticalSection(a1[50]);
      v15 = 1;
      v11 |= 1u;
    }
    LOBYTE(v10) = 0;
    RtlpValidateHeap(a1, v10);
    v12 = a3 - 8;
    if ( *(_BYTE *)(a3 - 8 + 7) == 5 )
      v12 -= 8 * *(unsigned __int8 *)(v12 + 6);
    if ( RtlpValidateHeapEntry((unsigned int)a1, v12, "RtlSetUserFlagsHeap") )
    {
      v16 = RtlSetUserFlagsHeap((int)a1, v11, a3, a4, a5);
      LOBYTE(v13) = 0;
      RtlpValidateHeap(a1, v13);
    }
  }
  else
  {
    v16 = 0;
  }
  if ( v15 )
    RtlLeaveCriticalSection(a1[50]);
  return v16;
}
