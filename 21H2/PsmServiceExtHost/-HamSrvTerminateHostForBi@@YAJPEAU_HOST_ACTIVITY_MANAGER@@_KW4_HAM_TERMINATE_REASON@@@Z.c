/*
 * XREFs of ?HamSrvTerminateHostForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HAM_TERMINATE_REASON@@@Z @ 0x18007BAC8
 * Callers:
 *     PsmHamTerminateHost @ 0x1800632C0 (PsmHamTerminateHost.c)
 * Callees:
 *     ?HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@K@Z @ 0x180004E10 (-HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000A04C (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B6E8 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180022C80 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180079444 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@.c)
 */

__int64 __fastcall HamSrvTerminateHostForBi(struct _HOST_ACTIVITY_MANAGER *a1, __int64 a2, int a3)
{
  char *v6; // rsi
  int Host; // eax
  struct _RM_HAM_ACTIVITY_HOST *v8; // rbx
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  DWORD v15; // ebx
  _BYTE v17[8]; // [rsp+40h] [rbp-C0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v18; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B0h] BYREF
  void *v20; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v21[144]; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+F0h] [rbp-10h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B3218,
      (unsigned __int8 *)dword_1800A052D,
      0LL,
      0LL,
      2u,
      &v22);
  v6 = 0LL;
  v18 = 0LL;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v21);
  Host = RmHamFindHost(a1, a2, &v18);
  v8 = v18;
  v9 = Host;
  if ( Host >= 0 )
  {
    v6 = (char *)v18 + 24;
    HampHostQueueTerminateEx(v18, 3u, a3, 0LL, 0, 0);
    v9 = 0;
  }
  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 8LL) )
  {
    v17[0] = a3;
    v19 = a2;
    v20 = v6;
    LODWORD(v18) = v9;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      v10,
      byte_1800A05F3,
      v11,
      v12,
      (__int64)&v18,
      &v20,
      (__int64)&v19,
      (__int64)v17);
  }
  if ( v8 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v8 + 74))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v8 - 64), v13);
    RmpReleaseGlobalLock();
  }
  v15 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v15, 0LL);
  }
  return v9;
}
