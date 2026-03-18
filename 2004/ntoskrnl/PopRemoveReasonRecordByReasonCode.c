/*
 * XREFs of PopRemoveReasonRecordByReasonCode @ 0x1406A5434
 * Callers:
 *     PopUpdateUpgradeInProgress @ 0x1405C8020 (PopUpdateUpgradeInProgress.c)
 *     PopLogDisabledSleepReason @ 0x1406A5194 (PopLogDisabledSleepReason.c)
 *     PopFilterCapabilities @ 0x1406A528C (PopFilterCapabilities.c)
 *     PopEnableHiberFile @ 0x140783F90 (PopEnableHiberFile.c)
 * Callees:
 *     PopGetReasonListByReasonCode @ 0x1406A5480 (PopGetReasonListByReasonCode.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void PopRemoveReasonRecordByReasonCode()
{
  _QWORD *ReasonListByReasonCode; // rax
  __int64 v1; // rcx
  _QWORD *v2; // rdx

  ReasonListByReasonCode = (_QWORD *)PopGetReasonListByReasonCode();
  if ( ReasonListByReasonCode )
  {
    v1 = *ReasonListByReasonCode;
    if ( *(_QWORD **)(*ReasonListByReasonCode + 8LL) != ReasonListByReasonCode
      || (v2 = (_QWORD *)ReasonListByReasonCode[1], (_QWORD *)*v2 != ReasonListByReasonCode) )
    {
      __fastfail(3u);
    }
    *v2 = v1;
    *(_QWORD *)(v1 + 8) = v2;
    ExFreePoolWithTag(ReasonListByReasonCode, 0x66756263u);
  }
}
