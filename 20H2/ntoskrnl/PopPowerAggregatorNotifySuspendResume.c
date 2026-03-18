/*
 * XREFs of PopPowerAggregatorNotifySuspendResume @ 0x140771D78
 * Callers:
 *     PopIssueActionRequest @ 0x140771A58 (PopIssueActionRequest.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140771E64 (PopPowerAggregatorHandleIntentUnsafe.c)
 *     PopPowerAggregatorDiagTraceEvent @ 0x140772384 (PopPowerAggregatorDiagTraceEvent.c)
 */

void __fastcall PopPowerAggregatorNotifySuspendResume(unsigned __int8 a1)
{
  int v1; // ebx
  __int64 v2; // rcx
  int v3; // [rsp+30h] [rbp-48h] BYREF
  int v4; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  int *v6; // [rsp+50h] [rbp-28h]
  int v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+5Ch] [rbp-1Ch]

  v1 = a1;
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  UserData.Reserved = 0;
  v8 = 0;
  v4 = dword_140C21770;
  UserData.Ptr = (ULONGLONG)&v3;
  UserData.Size = 4;
  v7 = 4;
  v6 = &v4;
  v3 = v1;
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_SUSPEND_RESUME, 2u, &UserData);
  if ( (_BYTE)v1 )
  {
    if ( ++dword_140C21770 != 1 )
      goto LABEL_5;
    v2 = 7LL;
    goto LABEL_4;
  }
  if ( !--dword_140C21770 )
  {
    v2 = 8LL;
LABEL_4:
    PopPowerAggregatorHandleIntentUnsafe(v2, 0LL, 20LL);
  }
LABEL_5:
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
  if ( (_BYTE)v1 )
    KeWaitForSingleObject(&word_140C21758, Executive, 0, 0, 0LL);
}
