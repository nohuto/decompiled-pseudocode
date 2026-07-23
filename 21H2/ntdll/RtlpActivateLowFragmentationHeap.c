/*
 * XREFs of RtlpActivateLowFragmentationHeap @ 0x180044A7C
 * Callers:
 *     RtlpPerformHeapMaintenance @ 0x180044D08 (RtlpPerformHeapMaintenance.c)
 *     RtlpSetHeapDebuggingInformation @ 0x1800F4AB0 (RtlpSetHeapDebuggingInformation.c)
 * Callees:
 *     RtlpExtendListLookup @ 0x180009574 (RtlpExtendListLookup.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlGetSuiteMask @ 0x18003CC10 (RtlGetSuiteMask.c)
 *     RtlpCreateLowFragHeap @ 0x1800447E8 (RtlpCreateLowFragHeap.c)
 *     RtlpExtendFrontEndUsageArray @ 0x180044C6C (RtlpExtendFrontEndUsageArray.c)
 */

__int64 __fastcall RtlpActivateLowFragmentationHeap(__int64 HeapHandle)
{
  __int64 v3; // rax
  int v4; // edi
  PVOID LowFragHeap; // r14
  char v7; // [rsp+20h] [rbp-28h]
  char v8; // [rsp+21h] [rbp-27h]

  v8 = 0;
  v7 = 0;
  if ( (*(_DWORD *)(HeapHandle + 112) & 0x75010F61) == 0
    && (*(_BYTE *)(HeapHandle + 112) & 2) != 0
    && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
  {
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(HeapHandle + 352));
    v7 = 1;
    if ( *(_BYTE *)(HeapHandle + 418) == 2 )
      v3 = *(_QWORD *)(HeapHandle + 408);
    else
      v3 = 0LL;
    if ( v3 )
    {
      v4 = 0;
    }
    else if ( *(_WORD *)(HeapHandle + 416) )
    {
      v4 = -1073741794;
    }
    else
    {
      *(_WORD *)(HeapHandle + 416) = 1;
      v8 = 1;
      v4 = RtlpExtendFrontEndUsageArray((PVOID)HeapHandle);
      if ( v4 >= 0 )
      {
        RtlpExtendListLookup((PVOID)HeapHandle, *(_QWORD *)(HeapHandle + 312));
        *(_QWORD *)(HeapHandle + 408) = 0LL;
        *(_BYTE *)(HeapHandle + 418) = 0;
        RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(HeapHandle + 352));
        LowFragHeap = RtlpCreateLowFragHeap(HeapHandle);
        RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(HeapHandle + 352));
        if ( LowFragHeap )
        {
          *(_QWORD *)(HeapHandle + 408) = LowFragHeap;
          *(_WORD *)(HeapHandle + 418) = 514;
          if ( (RtlGetSuiteMask() & 0x10000) == 0 )
            *(_QWORD *)(HeapHandle + 176) = (unsigned __int64)RtlpLargestLfhBlock >> 4;
        }
        else
        {
          v4 = -1073741801;
        }
        --*(_WORD *)(HeapHandle + 416);
        v8 = 0;
        v7 = 0;
        RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(HeapHandle + 352));
      }
    }
  }
  else
  {
    v4 = -1073741811;
  }
  if ( v7 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(HeapHandle + 352));
  if ( v8 )
    --*(_WORD *)(HeapHandle + 416);
  return (unsigned int)v4;
}
