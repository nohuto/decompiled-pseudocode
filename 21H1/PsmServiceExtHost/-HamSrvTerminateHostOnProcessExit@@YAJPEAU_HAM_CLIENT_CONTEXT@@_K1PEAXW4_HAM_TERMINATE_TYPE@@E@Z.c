/*
 * XREFs of ?HamSrvTerminateHostOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAXW4_HAM_TERMINATE_TYPE@@E@Z @ 0x1800289AC
 * Callers:
 *     HamRpcSrvTerminateHostOnProcessExit @ 0x180028C20 (HamRpcSrvTerminateHostOnProcessExit.c)
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180009E2C (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B478 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F120 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E110 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180022B10 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x18002814C (-HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@P.c)
 *     ?HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@Z @ 0x1800281D8 (-HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@.c)
 *     ?HampSystemIsProcessLifetimeManaged@@YAJPEAXPEAK@Z @ 0x180028B64 (-HampSystemIsProcessLifetimeManaged@@YAJPEAXPEAK@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4344@Z @ 0x180078C80 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U1@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 */

__int64 __fastcall HamSrvTerminateHostOnProcessExit(
        struct _HOST_ACTIVITY_MANAGER **a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        int a5,
        unsigned __int8 a6)
{
  struct _HOST_ACTIVITY_MANAGER *v10; // rcx
  unsigned __int64 v11; // r14
  int Host; // eax
  struct _RM_HAM_ACTIVITY_HOST *v13; // rsi
  int IsProcessLifetimeManaged; // ebx
  int v15; // eax
  struct _RM_HAM_ACTIVITY_HOST *v16; // rdi
  __int64 v17; // rdx
  bool v18; // zf
  __int64 v19; // rdx
  DWORD v20; // edi
  DWORD ProcessId; // eax
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  unsigned int v26; // [rsp+50h] [rbp-B0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v27; // [rsp+58h] [rbp-A8h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v28; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v29; // [rsp+68h] [rbp-98h] BYREF
  __int64 v30; // [rsp+70h] [rbp-90h] BYREF
  __int64 v31; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v32[144]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+110h] [rbp+10h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B3218, (int)&dword_18009F720, 0, 0, 2u, &v33);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v32);
  v10 = *a1;
  v28 = 0LL;
  v27 = 0LL;
  v11 = 0LL;
  v29 = 0LL;
  Host = RmHamFindHost(v10, a2, &v27);
  v13 = v27;
  IsProcessLifetimeManaged = Host;
  if ( Host >= 0 )
  {
    IsProcessLifetimeManaged = HampSystemIsProcessLifetimeManaged(a4, &v26);
    if ( IsProcessLifetimeManaged >= 0 )
    {
      IsProcessLifetimeManaged = 0;
      if ( v26 )
      {
        v15 = HampHostFindByProcessHandle(*a1, a4, &v28, &v29);
        v16 = v28;
        IsProcessLifetimeManaged = v15;
        v11 = v29;
        if ( v15 >= 0 )
        {
          IsProcessLifetimeManaged = HampDepGroupAddTerminateDependency(v13, a3, v28, v29, a5, a6);
          if ( IsProcessLifetimeManaged >= 0 )
            IsProcessLifetimeManaged = 0;
        }
        if ( v16 )
        {
          RmpAcquireGlobalLock();
          v18 = (*((_QWORD *)v16 + 74))-- == 1LL;
          if ( v18 )
            RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v16 - 64), v17);
          RmpReleaseGlobalLock();
        }
      }
    }
  }
  if ( v13 )
  {
    RmpAcquireGlobalLock();
    v18 = (*((_QWORD *)v13 + 74))-- == 1LL;
    if ( v18 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v13 - 64), v19);
    RmpReleaseGlobalLock();
  }
  v20 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v20, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 8LL) )
  {
    ProcessId = GetProcessId(a4);
    v28 = (struct _RM_HAM_ACTIVITY_HOST *)-1LL;
    v26 = ProcessId;
    v29 = v11;
    v30 = a3;
    v31 = a2;
    LODWORD(v27) = IsProcessLifetimeManaged;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v23,
      (unsigned int)&unk_18009FA30,
      v24,
      v25,
      (__int64)&v27,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v26,
      (__int64)&v28,
      (__int64)&v29);
  }
  return (unsigned int)IsProcessLifetimeManaged;
}
