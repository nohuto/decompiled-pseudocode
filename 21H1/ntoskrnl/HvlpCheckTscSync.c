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
  _QWORD *v1; // rax
  __int64 v2; // r8
  __int64 v3; // rdx
  _QWORD *v4; // rdi
  __int64 v5; // r9
  char result; // al
  __int128 v7; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v8; // [rsp+30h] [rbp-D0h]
  __int128 v9; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v10; // [rsp+50h] [rbp-B0h]
  __int128 v11; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v12; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-88h] BYREF
  __int64 *v14; // [rsp+88h] [rbp-78h]
  __int64 v15; // [rsp+90h] [rbp-70h]
  _BYTE v16[16]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v17[2064]; // [rsp+A8h] [rbp-58h] BYREF

  v12 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v11 = 0LL;
  v0 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v9, 1, (__int64)v16, 8LL);
  v1 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v7, 2, (__int64)v17, 1032LL);
  v2 = *((_QWORD *)&v8 + 1);
  v3 = *((_QWORD *)&v10 + 1);
  v4 = v1;
  *(_DWORD *)v0 = 14;
  if ( !(unsigned __int16)HvcallInitiateHypercall(123, v3, v2, v5) )
  {
    v11 = *(_OWORD *)v4;
    v12 = v4[2];
  }
  HvlpReleaseHypercallPage((__int64)&v7);
  result = HvlpReleaseHypercallPage((__int64)&v9);
  if ( BYTE1(v11) )
  {
    if ( (_BYTE)v11 )
    {
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&v11 + 8;
      v15 = 8LL;
      v14 = &v12;
      return HvlpWriteEventLog(&HV_EVENTLOG_TSC_SYNC_FAILED, 2u, &UserData);
    }
  }
  return result;
}
