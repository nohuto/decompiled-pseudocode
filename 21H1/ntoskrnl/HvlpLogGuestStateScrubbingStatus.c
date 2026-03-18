/*
 * XREFs of HvlpLogGuestStateScrubbingStatus @ 0x1404F4008
 * Callers:
 *     HvlPhase2Initialize @ 0x1403CACE8 (HvlPhase2Initialize.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038CF90 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404ECDE0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404ED9E0 (HvlpReleaseHypercallPage.c)
 *     HvlpWriteEventLog @ 0x1404F46D4 (HvlpWriteEventLog.c)
 */

char HvlpLogGuestStateScrubbingStatus()
{
  _QWORD *v0; // rbx
  int *v1; // rax
  __int64 v2; // r8
  __int64 v3; // rdx
  int *v4; // rdi
  __int64 v5; // r9
  char result; // al
  unsigned int v7; // [rsp+28h] [rbp-E0h] BYREF
  int v8; // [rsp+2Ch] [rbp-DCh] BYREF
  unsigned int v9; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v10; // [rsp+34h] [rbp-D4h] BYREF
  unsigned int v11; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v12; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v13; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v14; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int v15; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v16; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v17; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v18; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v19; // [rsp+68h] [rbp-A0h]
  __int128 v20; // [rsp+78h] [rbp-90h] BYREF
  __int128 v21; // [rsp+88h] [rbp-80h]
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+98h] [rbp-70h] BYREF
  unsigned int *v23; // [rsp+A8h] [rbp-60h]
  __int64 v24; // [rsp+B0h] [rbp-58h]
  unsigned int *v25; // [rsp+B8h] [rbp-50h]
  __int64 v26; // [rsp+C0h] [rbp-48h]
  unsigned int *v27; // [rsp+C8h] [rbp-40h]
  __int64 v28; // [rsp+D0h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int *v30; // [rsp+E8h] [rbp-20h]
  __int64 v31; // [rsp+F0h] [rbp-18h]
  unsigned int *v32; // [rsp+F8h] [rbp-10h]
  __int64 v33; // [rsp+100h] [rbp-8h]
  unsigned int *v34; // [rsp+108h] [rbp+0h]
  __int64 v35; // [rsp+110h] [rbp+8h]
  unsigned int *v36; // [rsp+118h] [rbp+10h]
  __int64 v37; // [rsp+120h] [rbp+18h]
  unsigned int *v38; // [rsp+128h] [rbp+20h]
  __int64 v39; // [rsp+130h] [rbp+28h]
  unsigned int *v40; // [rsp+138h] [rbp+30h]
  __int64 v41; // [rsp+140h] [rbp+38h]
  unsigned int *v42; // [rsp+148h] [rbp+40h]
  __int64 v43; // [rsp+150h] [rbp+48h]
  _BYTE v44[16]; // [rsp+158h] [rbp+50h] BYREF
  _BYTE v45[2064]; // [rsp+168h] [rbp+60h] BYREF

  HvlpGuestStateScrubbingStatus = 0;
  v20 = 0LL;
  v21 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v0 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v20, 1, (__int64)v44, 8LL);
  v1 = (int *)HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v18, 2, (__int64)v45, 1032LL);
  v2 = *((_QWORD *)&v19 + 1);
  v3 = *((_QWORD *)&v21 + 1);
  v4 = v1;
  *(_DWORD *)v0 = 25;
  if ( !(unsigned __int16)HvcallInitiateHypercall(123, v3, v2, v5) )
    HvlpGuestStateScrubbingStatus = *v4;
  HvlpReleaseHypercallPage((__int64)&v18);
  result = HvlpReleaseHypercallPage((__int64)&v20);
  if ( HvlpGuestStateScrubbingStatus )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    v31 = 4LL;
    v8 = HvlpGuestStateScrubbingStatus & 1;
    UserData.Ptr = (ULONGLONG)&v8;
    v33 = 4LL;
    v35 = 4LL;
    v7 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 1) & 1;
    v30 = &v7;
    v37 = 4LL;
    v9 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 2) & 1;
    v32 = &v9;
    v39 = 4LL;
    v10 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 3) & 1;
    v34 = &v10;
    v41 = 4LL;
    v11 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 4) & 1;
    v36 = &v11;
    v43 = 4LL;
    v12 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 5) & 1;
    v38 = &v12;
    v13 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 7) & 1;
    v14 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 8) & 1;
    v40 = &v13;
    v42 = &v14;
    HvlpWriteEventLog(&HV_EVENTLOG_GUEST_STATE_SCRUBBING, 8u, &UserData);
    *(_QWORD *)&v22.Size = 4LL;
    v15 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 11) & 1;
    v22.Ptr = (ULONGLONG)&v15;
    v24 = 4LL;
    v7 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 1) & 1;
    v23 = &v7;
    v26 = 4LL;
    v16 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 9) & 1;
    v25 = &v16;
    v27 = &v17;
    v17 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 10) & 1;
    v28 = 4LL;
    HvlpWriteEventLog(&HV_EVENTLOG_MDS_MITIGATION_STATUS, 4u, &v22);
    result = HvlpGuestStateScrubbingStatus;
    if ( (HvlpGuestStateScrubbingStatus & 0x40) != 0 )
      return HvlpWriteEventLog(&HV_EVENTLOG_GUEST_STATE_SCRUBBING_DISABLED_CORE_SCHEDULER, 0, 0LL);
  }
  return result;
}
