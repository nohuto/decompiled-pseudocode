/*
 * XREFs of ?HamSrvQueryTaskCompletionsForTerminateGraph@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEA_K@Z @ 0x18007A4CC
 * Callers:
 *     HamRpcSrvQueryTaskCompletionsForTerminateGraph @ 0x1800804D0 (HamRpcSrvQueryTaskCompletionsForTerminateGraph.c)
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180009E2C (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B478 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000EAEC (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F120 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E110 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ?HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007D9F0 (-HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HamSrvQueryTaskCompletionsForTerminateGraph(
        struct _HOST_ACTIVITY_MANAGER **a1,
        void *a2,
        unsigned __int64 *a3)
{
  struct _HOST_ACTIVITY_MANAGER *v5; // r14
  struct _HOST_ACTIVITY_MANAGER *v6; // rdx
  struct _RM_HAM_ACTIVITY_HOST *v7; // rbx
  unsigned __int64 TransitiveAppliedTaskCompletions; // r12
  int HostByProcessHandle; // eax
  struct _RM_HAM_ACTIVITY_HOST *v10; // rdi
  unsigned int v11; // esi
  int v12; // eax
  __int64 v13; // r14
  __int64 v14; // rdx
  bool v15; // zf
  __int64 v16; // rdx
  DWORD v17; // ebx
  DWORD ProcessId; // eax
  struct _RM_HAM_ACTIVITY_HOST *v20; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+38h] [rbp-C8h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v22; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Process; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v25; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A0h] BYREF
  char v27[144]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+100h] [rbp+0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST **v29; // [rsp+120h] [rbp+20h]
  __int64 v30; // [rsp+128h] [rbp+28h]
  __int64 *v31; // [rsp+130h] [rbp+30h]
  __int64 v32; // [rsp+138h] [rbp+38h]
  unsigned __int64 *v33; // [rsp+140h] [rbp+40h]
  __int64 v34; // [rsp+148h] [rbp+48h]
  HANDLE *p_Process; // [rsp+150h] [rbp+50h]
  __int64 v36; // [rsp+158h] [rbp+58h]
  struct _RM_HAM_ACTIVITY_HOST **v37; // [rsp+160h] [rbp+60h]
  __int64 v38; // [rsp+168h] [rbp+68h]
  __int64 *v39; // [rsp+170h] [rbp+70h]
  __int64 v40; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+180h] [rbp+80h] BYREF

  Process = a2;
  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B3218,
      (unsigned __int8 *)dword_1800A02FC,
      0LL,
      0LL,
      2u,
      &v41);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v27);
  v5 = *a1;
  v6 = a1[21];
  v22 = 0LL;
  v7 = 0LL;
  v24 = -1LL;
  v21 = -1LL;
  TransitiveAppliedTaskCompletions = 0LL;
  v20 = 0LL;
  HostByProcessHandle = RmHamFindHostByProcessHandle(v5, v6, &v22);
  v10 = v22;
  v11 = HostByProcessHandle;
  if ( HostByProcessHandle < 0
    || (v24 = *((_QWORD *)v22 - 4), v12 = RmHamFindHostByProcessHandle(v5, Process, &v20), v7 = v20, v11 = v12, v12 < 0) )
  {
    v13 = v21;
  }
  else
  {
    v13 = *((_QWORD *)v20 - 4);
    if ( *(_QWORD *)(*((_QWORD *)v20 + 97) + 88LL) == *(_QWORD *)(*((_QWORD *)v10 + 97) + 88LL) )
    {
      TransitiveAppliedTaskCompletions = HampHostGetTransitiveAppliedTaskCompletions(v20);
      *a3 = TransitiveAppliedTaskCompletions;
      v11 = 0;
    }
    else
    {
      v11 = -1073741790;
    }
  }
  if ( v10 )
  {
    RmpAcquireGlobalLock();
    v15 = (*((_QWORD *)v10 + 74))-- == 1LL;
    if ( v15 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v10 - 64), v14);
    RmpReleaseGlobalLock();
  }
  if ( v7 )
  {
    RmpAcquireGlobalLock();
    v15 = (*((_QWORD *)v7 + 74))-- == 1LL;
    if ( v15 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v7 - 64), v16);
    RmpReleaseGlobalLock();
  }
  v17 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v17, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 8LL) )
  {
    ProcessId = GetProcessId(Process);
    v25 = TransitiveAppliedTaskCompletions;
    LODWORD(v21) = ProcessId;
    LODWORD(v22) = *((_DWORD *)a1 + 35);
    Process = (HANDLE)v24;
    v39 = &v21;
    v37 = &v22;
    p_Process = &Process;
    v33 = &v25;
    v31 = &v26;
    v29 = &v20;
    v26 = v13;
    LODWORD(v20) = v11;
    v40 = 4LL;
    v38 = 4LL;
    v36 = 8LL;
    v34 = 8LL;
    v32 = 8LL;
    v30 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B3218,
      (unsigned __int8 *)dword_1800A005A,
      0LL,
      0LL,
      8u,
      &v28);
  }
  return v11;
}
