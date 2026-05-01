/*
 * XREFs of ?RmSrvHostNotificationSubscribe@@YAJPEAU_RM_ACTIVATOR@@_KPEA_K@Z @ 0x18000714C
 * Callers:
 *     RmCoreRpcSrvRegisterActivityHostCallbacks @ 0x180007140 (RmCoreRpcSrvRegisterActivityHostCallbacks.c)
 * Callees:
 *     ?RmpActivatorSubscribeForNotifications@@YAJPEAU_RM_ACTIVATOR@@PEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x18000729C (-RmpActivatorSubscribeForNotifications@@YAJPEAU_RM_ACTIVATOR@@PEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180008BD0 (-RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B52C (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180026480 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x180068A90 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

__int64 __fastcall RmSrvHostNotificationSubscribe(
        struct _RM_SERVICE_GLOBALS **a1,
        unsigned __int64 a2,
        unsigned __int64 *a3)
{
  unsigned __int64 v6; // rbx
  int v7; // edi
  int v8; // eax
  int v9; // r8d
  int v10; // r9d
  DWORD v11; // ebx
  unsigned __int64 v13; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  int v15; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v16; // [rsp+54h] [rbp-ACh] BYREF
  unsigned __int64 v17; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v18; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v19[144]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+100h] [rbp+0h] BYREF

  RmpUtilCheckStartLockTracking(&v16, (struct _CEM_LOCK_TRACKER *)v19);
  if ( (unsigned int)dword_1800B31E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800B31E0, 1LL) )
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B31E0, (int)&dword_18009B2B1, 0, 0, 2u, &v20);
  P = 0LL;
  v6 = -1LL;
  v13 = -1LL;
  RmpAcquireGlobalLock();
  v7 = RmpActivityHostFindByHostId(*a1, a2, (struct _RM_ACTIVITY_HOST **)&P);
  if ( v7 >= 0 )
  {
    v8 = RmpActivatorSubscribeForNotifications((struct _RM_ACTIVATOR *)a1, (struct _RM_ACTIVITY_HOST *)P, &v13);
    v6 = v13;
    v7 = v8;
    if ( v8 >= 0 )
    {
      *a3 = v13;
      v7 = 0;
    }
  }
  RmpReleaseGlobalLock();
  if ( (unsigned int)dword_1800B31E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800B31E0, 9LL) )
  {
    v15 = *((_DWORD *)a1 + 14);
    v17 = v6;
    v18 = a2;
    LODWORD(v13) = v7;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1800B31E0,
      (unsigned int)&unk_18009B253,
      v9,
      v10,
      (__int64)&v13,
      (__int64)&v15,
      (__int64)&v18,
      (__int64)&v17);
  }
  if ( P )
    RmpObjectRelease(P);
  if ( v16 )
  {
    v11 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v11, 0LL);
    }
  }
  return (unsigned int)v7;
}
