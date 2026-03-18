/*
 * XREFs of KiTrackSystemCallExit @ 0x1408BFA50
 * Callers:
 *     KiSystemCall64 @ 0x14040F000 (KiSystemCall64.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     PerfInfoLogSysCallExit @ 0x1405A8970 (PerfInfoLogSysCallExit.c)
 */

__int64 __fastcall KiTrackSystemCallExit(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+58h] [rbp+10h] BYREF

  v3 = a2;
  if ( a1 && *(_BYTE *)(a1 + 41) )
  {
    _InterlockedAdd(&KiSystemServiceTraceCallbacksActive, 1u);
    if ( *(_BYTE *)(a1 + 41) )
      ((void (__fastcall *)(_QWORD, _QWORD, __int64, __int64 *, int, _QWORD))qword_140CFCBA8)(
        *(_QWORD *)(a1 + 24),
        *(_QWORD *)(a1 + 56),
        1LL,
        &v3,
        1,
        0LL);
    _InterlockedDecrement(&KiSystemServiceTraceCallbacksActive);
  }
  if ( (BYTE8(PerfGlobalGroupMask[0]) & 0x40) != 0 )
    PerfInfoLogSysCallExit(v3);
  return v3;
}
