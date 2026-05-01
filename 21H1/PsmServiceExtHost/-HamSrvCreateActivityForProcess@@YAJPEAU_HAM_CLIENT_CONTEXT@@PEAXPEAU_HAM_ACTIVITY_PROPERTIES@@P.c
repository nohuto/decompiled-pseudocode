/*
 * XREFs of ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x18003448C
 * Callers:
 *     HamRpcSrvCreateActivityForProcess @ 0x180034480 (HamRpcSrvCreateActivityForProcess.c)
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180009E2C (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B478 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F120 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampSrvTraceActivityCreateStart@@YAXXZ @ 0x18000F1E0 (-HampSrvTraceActivityCreateStart@@YAXXZ.c)
 *     ?HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18000F224 (-HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     ?HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTIVITY_PROPERTIES@@KKE@Z @ 0x18000F720 (-HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTI.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x180011850 (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E110 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180022A6C (-RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM.c)
 *     CemRcObjectDereference @ 0x180027240 (CemRcObjectDereference.c)
 *     ?RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180030DD8 (-RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?HampUtilCheckAndSanitizeActivityProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180034690 (-HampUtilCheckAndSanitizeActivityProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvCreateActivityForProcess(
        struct _HOST_ACTIVITY_MANAGER **a1,
        HANDLE Process,
        struct _HAM_ACTIVITY_PROPERTIES *a3,
        unsigned __int64 *a4)
{
  __int64 v4; // r14
  DWORD ProcessId; // eax
  int LastError; // ebx
  int HostWithFullInfo; // eax
  struct _RM_HAM_ACTIVITY_HOST *v12; // rdi
  int v13; // eax
  struct _HAM_ACTIVITY *v14; // rcx
  __int64 v15; // rdx
  DWORD v17; // edi
  unsigned int v19; // [rsp+60h] [rbp-A0h]
  struct _RM_HAM_ACTIVITY_HOST *v20; // [rsp+68h] [rbp-98h] BYREF
  struct _HAM_ACTIVITY *v21; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v22; // [rsp+78h] [rbp-88h]
  union _RM_SID *v23; // [rsp+80h] [rbp-80h]
  unsigned __int16 *v24; // [rsp+88h] [rbp-78h]
  wchar_t v25[232]; // [rsp+90h] [rbp-70h] BYREF
  char v26; // [rsp+260h] [rbp+160h] BYREF
  unsigned int v27; // [rsp+2A8h] [rbp+1A8h]
  unsigned __int64 v28; // [rsp+2B0h] [rbp+1B0h]
  _BYTE v29[144]; // [rsp+2C0h] [rbp+1C0h] BYREF

  v21 = 0LL;
  v20 = 0LL;
  v4 = -1LL;
  v24 = 0LL;
  v19 = 0;
  v23 = 0LL;
  v22 = -1LL;
  HampSrvTraceActivityCreateStart();
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v29);
  if ( !HampUtilCheckAndSanitizeActivityProperties(a3) )
    goto LABEL_19;
  ProcessId = GetProcessId(Process);
  if ( !ProcessId )
  {
    if ( (int)GetLastError() > 0 )
      LastError = (unsigned __int16)GetLastError() | 0xC0070000;
    else
      LastError = GetLastError();
    goto LABEL_14;
  }
  LastError = RmpSystemGetProcessPsmInfo(ProcessId, v25);
  if ( LastError < 0 )
    goto LABEL_14;
  v24 = v25;
  v19 = v27;
  v23 = (union _RM_SID *)&v26;
  v22 = v28;
  if ( !(unsigned int)HampUtilAreActivityPropertiesValid((struct _RM_PSM_HOST_INFO *)v25, a3) )
  {
LABEL_19:
    LastError = -1073741583;
    goto LABEL_14;
  }
  HostWithFullInfo = RmHamFindHostWithFullInfo(*a1, (struct _RM_PSM_HOST_INFO *)v25, &v20);
  v12 = v20;
  LastError = HostWithFullInfo;
  if ( HostWithFullInfo >= 0 )
  {
    v13 = HampActCreate((struct _HAM_CLIENT_CONTEXT *)a1, *a1, v20, a3, 0, &v21);
    v14 = v21;
    LastError = v13;
    if ( v13 >= 0 )
    {
      v4 = *((_QWORD *)v21 + 5);
      LastError = 0;
      *a4 = v4;
    }
    if ( v14 )
      CemRcObjectDereference(v14);
  }
  if ( v12 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v12 + 74))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v12 - 64), v15);
    RmpReleaseGlobalLock();
  }
LABEL_14:
  v17 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v17, 0LL);
  }
  HampSrvTraceActivityCreateStop((unsigned int)LastError, v4, (struct _HAM_CLIENT_CONTEXT *)a1, v24, v19, v23, v22, a3);
  return (unsigned int)LastError;
}
