/*
 * XREFs of ?HamSrvTryEstimateRemainingQuiesceTime@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAK@Z @ 0x1800378EC
 * Callers:
 *     HamRpcSrvTryEstimateRemainingQuiesceTime @ 0x1800378E0 (HamRpcSrvTryEstimateRemainingQuiesceTime.c)
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180009E2C (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B478 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000EAEC (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F120 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E110 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampHostTryEstimateRemainingQuiesceTime@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180037A30 (-HampHostTryEstimateRemainingQuiesceTime@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvTryEstimateRemainingQuiesceTime(struct _HAM_CLIENT_CONTEXT *a1, unsigned int *a2)
{
  void *v4; // rdx
  struct _HOST_ACTIVITY_MANAGER *v5; // rcx
  __int64 v6; // r12
  unsigned int v7; // esi
  int HostByProcessHandle; // eax
  struct _RM_HAM_ACTIVITY_HOST *v9; // rbx
  unsigned int v10; // edi
  __int64 v11; // rdx
  int v13; // edx
  int v14; // r9d
  DWORD v15; // ebx
  int v17; // eax
  struct _RM_HAM_ACTIVITY_HOST *v18; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v19; // [rsp+38h] [rbp-C8h] BYREF
  int v20; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  char v22[144]; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+E0h] [rbp-20h] BYREF
  struct _RM_HAM_ACTIVITY_HOST **v24; // [rsp+100h] [rbp+0h]
  int v25; // [rsp+108h] [rbp+8h]
  int v26; // [rsp+10Ch] [rbp+Ch]
  int *v27; // [rsp+110h] [rbp+10h]
  int v28; // [rsp+118h] [rbp+18h]
  int v29; // [rsp+11Ch] [rbp+1Ch]
  __int64 *v30; // [rsp+120h] [rbp+20h]
  int v31; // [rsp+128h] [rbp+28h]
  int v32; // [rsp+12Ch] [rbp+2Ch]
  unsigned int *v33; // [rsp+130h] [rbp+30h]
  int v34; // [rsp+138h] [rbp+38h]
  int v35; // [rsp+13Ch] [rbp+3Ch]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+140h] [rbp+40h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B3218,
      (unsigned __int8 *)dword_1800A0421,
      0LL,
      0LL,
      2u,
      &v36);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v22);
  v4 = (void *)*((_QWORD *)a1 + 21);
  v5 = *(struct _HOST_ACTIVITY_MANAGER **)a1;
  v6 = -1LL;
  v18 = 0LL;
  v7 = 0;
  HostByProcessHandle = RmHamFindHostByProcessHandle(v5, v4, &v18);
  v9 = v18;
  v10 = HostByProcessHandle;
  if ( HostByProcessHandle >= 0 )
  {
    v6 = *((_QWORD *)v18 - 4);
    v7 = HampHostTryEstimateRemainingQuiesceTime(v18);
    *a2 = v7;
    v10 = 0;
  }
  if ( v9 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v9 + 74))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v9 - 64), v11);
    RmpReleaseGlobalLock();
  }
  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 8LL) )
  {
    v17 = *((_DWORD *)a1 + 35);
    v35 = 0;
    v32 = 0;
    v29 = 0;
    v26 = 0;
    v20 = v17;
    v33 = &v19;
    v30 = &v21;
    v27 = &v20;
    v24 = &v18;
    v34 = v14;
    v31 = v13;
    v28 = v14;
    v25 = v14;
    v19 = v7;
    v21 = v6;
    LODWORD(v18) = v10;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B3218,
      (unsigned __int8 *)dword_1800A0199,
      0LL,
      0LL,
      6u,
      &v23);
  }
  v15 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v15, 0LL);
  }
  return v10;
}
