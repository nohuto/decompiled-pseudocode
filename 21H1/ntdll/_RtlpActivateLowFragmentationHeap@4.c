/*
 * XREFs of _RtlpActivateLowFragmentationHeap@4 @ 0x4B2AEDBA
 * Callers:
 *     _RtlpPerformHeapMaintenance@4 @ 0x4B2AED81 (_RtlpPerformHeapMaintenance@4.c)
 *     _RtlpSetHeapDebuggingInformation@8 @ 0x4B359790 (_RtlpSetHeapDebuggingInformation@8.c)
 * Callees:
 *     _RtlpActivateLowFragmentationHeap@4 @ 0x4B2AEDBA (_RtlpActivateLowFragmentationHeap@4.c)
 *     @RtlpCreateLowFragHeap@4 @ 0x4B2AEF38 (@RtlpCreateLowFragHeap@4.c)
 *     _RtlGetSuiteMask@0 @ 0x4B2B0630 (_RtlGetSuiteMask@0.c)
 *     @RtlpExtendListLookup@12 @ 0x4B2B12B3 (@RtlpExtendListLookup@12.c)
 *     _RtlpExtendFrontEndUsageArray@8 @ 0x4B2B1C10 (_RtlpExtendFrontEndUsageArray@8.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

char __thiscall RtlpActivateLowFragmentationHeap(int this)
{
  int v2; // eax
  int v3; // ecx
  char v4; // di
  int LowFragHeap; // [esp+14h] [ebp-24h]
  char v7; // [esp+1Eh] [ebp-1Ah]
  char v8; // [esp+1Fh] [ebp-19h]

  v7 = 0;
  v8 = 0;
  LOBYTE(v2) = (*(_DWORD *)(this + 64) & 0x75010F61) == 0
            && (*(_BYTE *)(this + 64) & 2) != 0
            && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0;
  if ( (_BYTE)v2 )
  {
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(this + 200));
    v8 = 1;
    if ( *(_BYTE *)(this + 234) == 2 )
      v2 = *(_DWORD *)(this + 228);
    else
      v2 = 0;
    if ( v2 )
    {
      v4 = 0;
    }
    else if ( *(_WORD *)(this + 232) )
    {
      v4 = 30;
    }
    else
    {
      *(_WORD *)(this + 232) = 1;
      v7 = 1;
      v2 = RtlpExtendFrontEndUsageArray((PVOID)this);
      v4 = v2;
      if ( v2 >= 0 )
      {
        RtlpExtendListLookup((PVOID)this, v3);
        *(_DWORD *)(this + 228) = 0;
        *(_BYTE *)(this + 234) = 0;
        RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(this + 200));
        LowFragHeap = RtlpCreateLowFragHeap((PVOID)this);
        RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(this + 200));
        if ( LowFragHeap )
        {
          *(_DWORD *)(this + 228) = LowFragHeap;
          *(_WORD *)(this + 234) = 514;
          if ( (RtlGetSuiteMask() & 0x10000) == 0 )
            *(_DWORD *)(this + 108) = (unsigned int)RtlpLargestLfhBlock >> 3;
        }
        else
        {
          v4 = 23;
        }
        --*(_WORD *)(this + 232);
        v7 = 0;
        v8 = 0;
        LOBYTE(v2) = RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(this + 200));
      }
    }
  }
  else
  {
    v4 = 13;
  }
  if ( v8 )
    LOBYTE(v2) = RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(this + 200));
  if ( v7 )
  {
    --*(_WORD *)(this + 232);
    LOBYTE(v2) = v4;
  }
  return v2;
}
