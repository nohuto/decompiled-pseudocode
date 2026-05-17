/*
 * XREFs of RtlpActivateLowFragmentationHeap @ 0x180044A6C
 * Callers:
 *     RtlpPerformHeapMaintenance @ 0x180044CF8 (RtlpPerformHeapMaintenance.c)
 *     RtlpSetHeapDebuggingInformation @ 0x1800F4750 (RtlpSetHeapDebuggingInformation.c)
 * Callees:
 *     RtlpExtendListLookup @ 0x180009574 (RtlpExtendListLookup.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlGetSuiteMask @ 0x18003CC00 (RtlGetSuiteMask.c)
 *     RtlpCreateLowFragHeap @ 0x1800447D8 (RtlpCreateLowFragHeap.c)
 *     RtlpExtendFrontEndUsageArray @ 0x180044C5C (RtlpExtendFrontEndUsageArray.c)
 */

__int64 __fastcall RtlpActivateLowFragmentationHeap(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 LowFragHeap; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  char v14; // [rsp+20h] [rbp-28h]
  char v15; // [rsp+21h] [rbp-27h]

  v15 = 0;
  v14 = 0;
  if ( (*(_DWORD *)(a1 + 112) & 0x75010F61) == 0
    && (*(_BYTE *)(a1 + 112) & 2) != 0
    && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
  {
    RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
    v14 = 1;
    if ( *(_BYTE *)(a1 + 418) == 2 )
      v5 = *(_QWORD *)(a1 + 408);
    else
      v5 = 0LL;
    if ( v5 )
    {
      v7 = 0;
    }
    else if ( *(_WORD *)(a1 + 416) )
    {
      v7 = -1073741794;
    }
    else
    {
      *(_WORD *)(a1 + 416) = 1;
      v15 = 1;
      v6 = (unsigned __int64)RtlpLargestLfhBlock >> 4;
      LOWORD(v6) = ((unsigned __int64)RtlpLargestLfhBlock >> 4) + 2;
      v7 = RtlpExtendFrontEndUsageArray(a1, v6);
      if ( v7 >= 0 )
      {
        RtlpExtendListLookup(a1, *(_QWORD *)(a1 + 312));
        *(_QWORD *)(a1 + 408) = 0LL;
        *(_BYTE *)(a1 + 418) = 0;
        RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352), v8, v9);
        LowFragHeap = RtlpCreateLowFragHeap(a1);
        RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
        if ( LowFragHeap )
        {
          *(_QWORD *)(a1 + 408) = LowFragHeap;
          *(_WORD *)(a1 + 418) = 514;
          if ( (RtlGetSuiteMask() & 0x10000) == 0 )
            *(_QWORD *)(a1 + 176) = (unsigned __int64)RtlpLargestLfhBlock >> 4;
        }
        else
        {
          v7 = -1073741801;
        }
        --*(_WORD *)(a1 + 416);
        v15 = 0;
        v14 = 0;
        RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352), v11, v12);
      }
    }
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v14 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352), a2, a3);
  if ( v15 )
    --*(_WORD *)(a1 + 416);
  return (unsigned int)v7;
}
