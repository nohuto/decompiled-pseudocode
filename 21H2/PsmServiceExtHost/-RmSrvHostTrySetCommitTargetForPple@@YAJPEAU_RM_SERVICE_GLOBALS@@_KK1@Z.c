/*
 * XREFs of ?RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z @ 0x18006A38C
 * Callers:
 *     RmgrSrv_RmSetMemoryUsageLimit @ 0x180063A40 (RmgrSrv_RmSetMemoryUsageLimit.c)
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000A04C (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B6E8 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180022C80 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U1@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@355@Z @ 0x180068B24 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U1@U3@U3@@-$_tlgWrit.c)
 *     ?HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18007EB50 (-HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 */

__int64 __fastcall RmSrvHostTrySetCommitTargetForPple(
        struct _RM_SERVICE_GLOBALS *a1,
        __int64 a2,
        int a3,
        unsigned __int64 a4)
{
  struct _RM_SERVICE_GLOBALS *v4; // rbx
  int Host; // eax
  struct _RM_HAM_ACTIVITY_HOST *v9; // rbx
  int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  void *v14; // rax
  __int64 v15; // rdx
  DWORD v17; // ebx
  struct _RM_HAM_ACTIVITY_HOST *v19; // [rsp+50h] [rbp-B0h] BYREF
  int v20; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v22; // [rsp+68h] [rbp-98h] BYREF
  __int64 v23; // [rsp+70h] [rbp-90h] BYREF
  void *v24; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v25[144]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+110h] [rbp+10h] BYREF

  v4 = RmSvcGlobals;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v25);
  v19 = 0LL;
  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B3218,
      (unsigned __int8 *)dword_18009B1FA,
      0LL,
      0LL,
      2u,
      &v26);
  Host = RmHamFindHost((struct _RM_SERVICE_GLOBALS *)((char *)v4 + 1768), a2, &v19);
  v9 = v19;
  v10 = Host;
  if ( Host >= 0 )
  {
    v10 = HampHostTrySetPpleCommitTarget(v19, a4);
    if ( v10 >= 0 )
      v10 = 0;
  }
  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 0x400000000008LL) )
  {
    v14 = (char *)v9 + 24;
    if ( !v9 )
      v14 = 0LL;
    v24 = v14;
    v21 = 0x1000000LL;
    v22 = a4;
    v20 = a3;
    v23 = a2;
    LODWORD(v19) = v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v11,
      byte_18009BC9F,
      v12,
      v13,
      (__int64)&v19,
      &v24,
      (__int64)&v23,
      (__int64)&v20,
      (__int64)&v22,
      (__int64)&v21);
  }
  if ( v9 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v9 + 74))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v9 - 64), v15);
    RmpReleaseGlobalLock();
  }
  v17 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v17, 0LL);
  }
  return (unsigned int)v10;
}
