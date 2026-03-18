/*
 * XREFs of HvlpLogIommuInitStatus @ 0x1404F4458
 * Callers:
 *     HvlPhase2Initialize @ 0x1403CACE8 (HvlPhase2Initialize.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038CF90 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404ECDE0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404ED9E0 (HvlpReleaseHypercallPage.c)
 *     HvlpWriteEventLog @ 0x1404F46D4 (HvlpWriteEventLog.c)
 */

__int64 HvlpLogIommuInitStatus()
{
  _QWORD *v0; // rbx
  __int128 *v1; // rax
  __int64 v2; // r8
  __int64 v3; // rdx
  __int128 *v4; // rdi
  __int64 v5; // r9
  __int64 result; // rax
  int v7; // [rsp+28h] [rbp-E0h] BYREF
  int v8; // [rsp+2Ch] [rbp-DCh] BYREF
  __int128 v9; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v10; // [rsp+40h] [rbp-C8h]
  __int128 v11; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v12; // [rsp+60h] [rbp-A8h]
  __int128 v13; // [rsp+70h] [rbp-98h] BYREF
  __int128 v14; // [rsp+80h] [rbp-88h] BYREF
  __int128 v15; // [rsp+90h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp-60h] BYREF
  int *v17; // [rsp+B8h] [rbp-50h]
  __int64 v18; // [rsp+C0h] [rbp-48h]
  char *v19; // [rsp+C8h] [rbp-40h]
  __int64 v20; // [rsp+D0h] [rbp-38h]
  __int128 *v21; // [rsp+D8h] [rbp-30h]
  __int64 v22; // [rsp+E0h] [rbp-28h]
  char *v23; // [rsp+E8h] [rbp-20h]
  __int64 v24; // [rsp+F0h] [rbp-18h]
  __int128 *v25; // [rsp+F8h] [rbp-10h]
  __int64 v26; // [rsp+100h] [rbp-8h]
  char *v27; // [rsp+108h] [rbp+0h]
  __int64 v28; // [rsp+110h] [rbp+8h]
  _BYTE v29[16]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v30[2064]; // [rsp+128h] [rbp+20h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v0 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v11, 1, (__int64)v29, 8LL);
  v1 = (__int128 *)HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v9, 2, (__int64)v30, 1032LL);
  v2 = *((_QWORD *)&v10 + 1);
  v3 = *((_QWORD *)&v12 + 1);
  v4 = v1;
  *(_DWORD *)v0 = 5;
  if ( !(unsigned __int16)HvcallInitiateHypercall(123, v3, v2, v5) )
  {
    v13 = *v4;
    v14 = v4[1];
    v15 = v4[2];
  }
  HvlpReleaseHypercallPage((__int64)&v9);
  HvlpReleaseHypercallPage((__int64)&v11);
  v7 = (unsigned __int8)v13;
  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = (ULONGLONG)&v7;
  v8 = BYTE1(v13);
  v17 = &v8;
  v19 = (char *)&v13 + 8;
  v21 = &v14;
  v23 = (char *)&v14 + 8;
  v25 = &v15;
  v27 = (char *)&v15 + 8;
  v18 = 4LL;
  v20 = 8LL;
  v22 = 8LL;
  v24 = 8LL;
  v26 = 8LL;
  v28 = 8LL;
  result = HvlpWriteEventLog(&HV_EVENTLOG_IOMMU_INIT, 7u, &UserData);
  if ( BYTE1(v13) && *((_QWORD *)&v13 + 1) == 1LL )
  {
    if ( (_QWORD)v15 )
      return HvlpWriteEventLog(&HV_EVENTLOG_IOMMU_INIT_POLICY_ENABLE, 0, 0LL);
  }
  return result;
}
