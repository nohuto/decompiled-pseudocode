/*
 * XREFs of RtlpSetRequestedFrontEndHeap @ 0x180073EC0
 * Callers:
 *     RtlSetHeapInformation @ 0x180073DB0 (RtlSetHeapInformation.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 */

__int64 __fastcall RtlpSetRequestedFrontEndHeap(__int64 a1)
{
  char v2; // di
  unsigned int v3; // esi
  __int64 v4; // rax

  v2 = 0;
  v3 = 0;
  RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
  v4 = 28LL;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    v4 = 208LL;
  if ( *(_WORD *)(v4 + a1) == 0xFFFF )
  {
    v3 = -1073741811;
  }
  else
  {
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
    v2 = 1;
    if ( !*(_BYTE *)(a1 + 419) )
    {
      *(_BYTE *)(a1 + 419) = 2;
      RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
      v2 = 0;
    }
  }
  if ( v2 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
  return v3;
}
