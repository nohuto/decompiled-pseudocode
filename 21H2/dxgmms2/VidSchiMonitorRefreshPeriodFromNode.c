/*
 * XREFs of VidSchiMonitorRefreshPeriodFromNode @ 0x1C0014DC4
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C00095B0 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C000D3F0 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     ?VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0014C2C (-VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiMonitorRefreshPeriodFromNode(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  ULONGLONG v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 result; // rax
  __int64 v10; // rax

  v2 = *(_QWORD *)(a1 + 24);
  v4 = *(unsigned int *)(a1 + 1760);
  if ( !v4 )
  {
    result = *(unsigned int *)(*(_QWORD *)(v2 + 3104) + 70580LL);
    if ( (_DWORD)result )
      return result;
    v10 = WdLogNewEntry5_WdWarning(0LL, a2);
    *(_QWORD *)(v10 + 24) = 0LL;
LABEL_9:
    WdLogEvent5_WdWarning(v10);
    return 16LL;
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16 * ((unsigned int)RtlFindMostSignificantBit(v4) + 128LL)) + 96LL);
  v7 = *(unsigned int *)(v6 + 504);
  if ( (unsigned int)v7 > *(_DWORD *)(v2 + 40) )
    v7 = 0LL;
  v8 = (unsigned int)v7;
  result = *(unsigned int *)(*(_QWORD *)(v2 + 8 * v7 + 3104) + 70580LL);
  if ( !(_DWORD)result )
  {
    v10 = WdLogNewEntry5_WdWarning(v6, v5);
    *(_QWORD *)(v10 + 24) = v8;
    goto LABEL_9;
  }
  return result;
}
