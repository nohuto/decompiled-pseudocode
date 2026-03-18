/*
 * XREFs of RIMWaitForPriorPnpWorkToComplete @ 0x1C016EEA4
 * Callers:
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C016E5C4 (RIMSignalOnPnpNotificationAndWait.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00ADEB0 (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall RIMWaitForPriorPnpWorkToComplete(__int64 a1, __int64 a2)
{
  unsigned __int16 v4; // r9
  __int64 result; // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = 39;
LABEL_7:
    WPP_RECORDER_SF_qq((__int64)gRimLog, 4u, 1u, v4, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids, a1, a2);
  }
  while ( 1 )
  {
    result = *(unsigned int *)(a2 + 184);
    if ( (result & 0x10) == 0 )
      break;
    ++*(_DWORD *)(a1 + 880);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        (__int64)gRimLog,
        4u,
        1u,
        0x28u,
        (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
        a1,
        a2);
    *(_QWORD *)(a1 + 112) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 104, 0LL);
    KeLeaveCriticalRegion();
    KeWaitForSingleObject(*(PVOID *)(a1 + 872), UserRequest, 0, 0, 0LL);
    RIMLockExclusive(a1 + 104);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 41;
      goto LABEL_7;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_qq(
             (__int64)gRimLog,
             4u,
             1u,
             0x2Au,
             (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
             a1,
             a2);
  return result;
}
