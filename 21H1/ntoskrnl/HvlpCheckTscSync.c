/*
 * XREFs of HvlpCheckTscSync @ 0x1404F3E80
 * Callers:
 *     HvlPhase2Initialize @ 0x1403CACE8 (HvlPhase2Initialize.c)
 *     HvlpPowerStateCallback @ 0x1404EC6E0 (HvlpPowerStateCallback.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038CF90 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404ECDE0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404ED9E0 (HvlpReleaseHypercallPage.c)
 *     HvlpWriteEventLog @ 0x1404F46D4 (HvlpWriteEventLog.c)
 */

char HvlpCheckTscSync()
{
  _QWORD *v0; // rbx
  _QWORD *v1; // rdi
  char result; // al
  _OWORD v3[2]; // [rsp+20h] [rbp-E0h] BYREF
  _OWORD v4[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v5; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v6; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-88h] BYREF
  __int64 *v8; // [rsp+88h] [rbp-78h]
  __int64 v9; // [rsp+90h] [rbp-70h]
  _BYTE v10[16]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v11[2064]; // [rsp+A8h] [rbp-58h] BYREF

  v6 = 0LL;
  memset(v4, 0, sizeof(v4));
  memset(v3, 0, sizeof(v3));
  v5 = 0LL;
  v0 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v4, 1, (__int64)v10, 8LL);
  v1 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v3, 2, (__int64)v11, 1032LL);
  *(_DWORD *)v0 = 14;
  if ( !(unsigned __int16)HvcallInitiateHypercall(123) )
  {
    v5 = *(_OWORD *)v1;
    v6 = v1[2];
  }
  HvlpReleaseHypercallPage((__int64)v3);
  result = HvlpReleaseHypercallPage((__int64)v4);
  if ( BYTE1(v5) )
  {
    if ( (_BYTE)v5 )
    {
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&v5 + 8;
      v9 = 8LL;
      v8 = &v6;
      return HvlpWriteEventLog(&HV_EVENTLOG_TSC_SYNC_FAILED, 2u, &UserData);
    }
  }
  return result;
}
