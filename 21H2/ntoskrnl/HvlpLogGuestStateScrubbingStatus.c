/*
 * XREFs of HvlpLogGuestStateScrubbingStatus @ 0x1404F99E8
 * Callers:
 *     HvlPhase2Initialize @ 0x1403CF228 (HvlPhase2Initialize.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x140390610 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404F27C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F33B0 (HvlpReleaseHypercallPage.c)
 *     HvlpWriteEventLog @ 0x1404FA0B4 (HvlpWriteEventLog.c)
 */

char HvlpLogGuestStateScrubbingStatus()
{
  _QWORD *v0; // rbx
  int *v1; // rdi
  char result; // al
  unsigned int v3; // [rsp+28h] [rbp-E0h] BYREF
  int v4; // [rsp+2Ch] [rbp-DCh] BYREF
  unsigned int v5; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v6; // [rsp+34h] [rbp-D4h] BYREF
  unsigned int v7; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v8; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v9; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v10; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int v11; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v12; // [rsp+4Ch] [rbp-BCh] BYREF
  _BYTE v13[40]; // [rsp+50h] [rbp-B8h] BYREF
  PHYSICAL_ADDRESS v14[4]; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+98h] [rbp-70h] BYREF
  unsigned int *v16; // [rsp+A8h] [rbp-60h]
  __int64 v17; // [rsp+B0h] [rbp-58h]
  unsigned int *v18; // [rsp+B8h] [rbp-50h]
  __int64 v19; // [rsp+C0h] [rbp-48h]
  _BYTE *v20; // [rsp+C8h] [rbp-40h]
  __int64 v21; // [rsp+D0h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int *v23; // [rsp+E8h] [rbp-20h]
  __int64 v24; // [rsp+F0h] [rbp-18h]
  unsigned int *v25; // [rsp+F8h] [rbp-10h]
  __int64 v26; // [rsp+100h] [rbp-8h]
  unsigned int *v27; // [rsp+108h] [rbp+0h]
  __int64 v28; // [rsp+110h] [rbp+8h]
  unsigned int *v29; // [rsp+118h] [rbp+10h]
  __int64 v30; // [rsp+120h] [rbp+18h]
  unsigned int *v31; // [rsp+128h] [rbp+20h]
  __int64 v32; // [rsp+130h] [rbp+28h]
  unsigned int *v33; // [rsp+138h] [rbp+30h]
  __int64 v34; // [rsp+140h] [rbp+38h]
  unsigned int *v35; // [rsp+148h] [rbp+40h]
  __int64 v36; // [rsp+150h] [rbp+48h]
  _BYTE v37[16]; // [rsp+158h] [rbp+50h] BYREF
  _BYTE v38[2064]; // [rsp+168h] [rbp+60h] BYREF

  HvlpGuestStateScrubbingStatus = 0;
  memset(v14, 0, sizeof(v14));
  memset(&v13[8], 0, 32);
  v0 = HvlpAcquireHypercallPage(v14, 1, (__int64)v37, 8LL);
  v1 = (int *)HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v13[8], 2, (__int64)v38, 1032LL);
  *(_DWORD *)v0 = 25;
  if ( !(unsigned __int16)HvcallInitiateHypercall(123) )
    HvlpGuestStateScrubbingStatus = *v1;
  HvlpReleaseHypercallPage((__int64)&v13[8]);
  result = HvlpReleaseHypercallPage((__int64)v14);
  if ( HvlpGuestStateScrubbingStatus )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    v24 = 4LL;
    v4 = HvlpGuestStateScrubbingStatus & 1;
    UserData.Ptr = (ULONGLONG)&v4;
    v26 = 4LL;
    v28 = 4LL;
    v3 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 1) & 1;
    v23 = &v3;
    v30 = 4LL;
    v5 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 2) & 1;
    v25 = &v5;
    v32 = 4LL;
    v6 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 3) & 1;
    v27 = &v6;
    v34 = 4LL;
    v7 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 4) & 1;
    v29 = &v7;
    v36 = 4LL;
    v8 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 5) & 1;
    v31 = &v8;
    v9 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 7) & 1;
    v10 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 8) & 1;
    v33 = &v9;
    v35 = &v10;
    HvlpWriteEventLog(&HV_EVENTLOG_GUEST_STATE_SCRUBBING, 8u, &UserData);
    *(_QWORD *)&v15.Size = 4LL;
    v11 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 11) & 1;
    v15.Ptr = (ULONGLONG)&v11;
    v17 = 4LL;
    v3 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 1) & 1;
    v16 = &v3;
    v19 = 4LL;
    v12 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 9) & 1;
    v18 = &v12;
    v20 = v13;
    *(_DWORD *)v13 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 10) & 1;
    v21 = 4LL;
    HvlpWriteEventLog(&HV_EVENTLOG_MDS_MITIGATION_STATUS, 4u, &v15);
    result = HvlpGuestStateScrubbingStatus;
    if ( (HvlpGuestStateScrubbingStatus & 0x40) != 0 )
      return HvlpWriteEventLog(&HV_EVENTLOG_GUEST_STATE_SCRUBBING_DISABLED_CORE_SCHEDULER, 0, 0LL);
  }
  return result;
}
