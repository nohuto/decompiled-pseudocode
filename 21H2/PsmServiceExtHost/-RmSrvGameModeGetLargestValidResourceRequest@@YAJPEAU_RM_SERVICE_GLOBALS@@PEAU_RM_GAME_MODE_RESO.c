/*
 * XREFs of ?RmSrvGameModeGetLargestValidResourceRequest@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x180069978
 * Callers:
 *     RmGameModeSrvGetLargestValidResourceRequest @ 0x18006AB80 (RmGameModeSrvGetLargestValidResourceRequest.c)
 * Callees:
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B52C (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@333@Z @ 0x1800689D8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6.c)
 *     ?RmpCpuSetManagerGetGameModeRequestLimits@@YAXPEAU_RM_CPU_SET_MANAGER@@KPEAKPEA_K@Z @ 0x18006CE74 (-RmpCpuSetManagerGetGameModeRequestLimits@@YAXPEAU_RM_CPU_SET_MANAGER@@KPEAKPEA_K@Z.c)
 */

__int64 __fastcall RmSrvGameModeGetLargestValidResourceRequest(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_GAME_MODE_RESOURCE_REQUEST *a2)
{
  struct _RM_SERVICE_GLOBALS *v2; // rdi
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // r10d
  __int64 v8; // rax
  DWORD v9; // ebx
  int v11; // [rsp+50h] [rbp-B0h] BYREF
  int v12; // [rsp+54h] [rbp-ACh] BYREF
  int v13; // [rsp+58h] [rbp-A8h] BYREF
  int v14; // [rsp+5Ch] [rbp-A4h] BYREF
  int v15; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v16; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v17; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v18[144]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+100h] [rbp+0h] BYREF

  v2 = RmSvcGlobals;
  RmpUtilCheckStartLockTracking(&v16, (struct _CEM_LOCK_TRACKER *)v18);
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B31E0,
      (unsigned __int8 *)dword_18009BB89,
      0LL,
      0LL,
      2u,
      &v19);
  *(_OWORD *)a2 = 0LL;
  *((_OWORD *)a2 + 1) = 0LL;
  *((_QWORD *)a2 + 4) = 0LL;
  *(_DWORD *)a2 = 6;
  *((_DWORD *)a2 + 4) = 10;
  *((_DWORD *)a2 + 5) = 50;
  *((_DWORD *)a2 + 6) = 30;
  RmpAcquireGlobalLock();
  RmpCpuSetManagerGetGameModeRequestLimits(
    (struct _RM_SERVICE_GLOBALS *)((char *)v2 + 680),
    0,
    (unsigned int *)a2 + 1,
    (unsigned __int64 *)a2 + 1);
  RmpReleaseGlobalLock();
  *((_DWORD *)a2 + 4) = 10;
  *((_DWORD *)a2 + 5) = 70;
  *((_BYTE *)a2 + 36) = 3;
  *((_DWORD *)a2 + 6) = 30;
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 9LL) )
  {
    v8 = *((_QWORD *)a2 + 1);
    v15 = 0;
    v17 = v8;
    v14 = *((_DWORD *)a2 + 1);
    v11 = v6;
    v12 = v7;
    v13 = 10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v4,
      byte_18009B952,
      v5,
      v6,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v17,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11);
  }
  if ( v16 )
  {
    v9 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v9, 0LL);
    }
  }
  return 0LL;
}
