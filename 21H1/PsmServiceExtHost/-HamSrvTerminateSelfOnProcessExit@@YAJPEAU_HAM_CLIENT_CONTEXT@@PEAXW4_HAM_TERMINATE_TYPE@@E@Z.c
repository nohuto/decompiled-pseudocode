/*
 * XREFs of ?HamSrvTerminateSelfOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXW4_HAM_TERMINATE_TYPE@@E@Z @ 0x18007B958
 * Callers:
 *     HamRpcSrvTerminateSelfOnRequiredProcessExit @ 0x180080510 (HamRpcSrvTerminateSelfOnRequiredProcessExit.c)
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180009E2C (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B478 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F120 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E110 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x18002814C (-HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@P.c)
 *     ?HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@Z @ 0x1800281D8 (-HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4344@Z @ 0x180078C80 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U1@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 */

__int64 __fastcall HamSrvTerminateSelfOnProcessExit(__int64 a1, void *a2, int a3, unsigned __int8 a4)
{
  void *v8; // rdx
  struct _HOST_ACTIVITY_MANAGER *v9; // rcx
  unsigned __int64 v10; // r14
  int v11; // eax
  struct _RM_HAM_ACTIVITY_HOST *v12; // rdi
  int v13; // esi
  struct _HOST_ACTIVITY_MANAGER *v14; // rcx
  int v15; // eax
  struct _RM_HAM_ACTIVITY_HOST *v16; // rbx
  __int64 v17; // rdx
  bool v18; // zf
  __int64 v19; // rdx
  DWORD v20; // ebx
  __int64 v21; // r8
  __int64 v22; // r9
  struct _RM_HAM_ACTIVITY_HOST *v24; // [rsp+50h] [rbp-B0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v25; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v26; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v27; // [rsp+68h] [rbp-98h] BYREF
  __int64 v28; // [rsp+70h] [rbp-90h]
  __int64 v29; // [rsp+78h] [rbp-88h]
  __int64 v30; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v31; // [rsp+88h] [rbp-78h] BYREF
  __int64 v32; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v33[144]; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+130h] [rbp+30h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B3218,
      (unsigned __int8 *)dword_18009F4FC,
      0LL,
      0LL,
      2u,
      &v34);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v33);
  v8 = *(void **)(a1 + 168);
  v9 = *(struct _HOST_ACTIVITY_MANAGER **)a1;
  v24 = 0LL;
  v28 = -1LL;
  v10 = 0LL;
  v29 = -1LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v11 = HampHostFindByProcessHandle(v9, v8, &v25, &v27);
  v12 = v25;
  v13 = v11;
  if ( v11 >= 0 )
  {
    v14 = *(struct _HOST_ACTIVITY_MANAGER **)a1;
    v29 = *((_QWORD *)v25 - 4);
    v15 = HampHostFindByProcessHandle(v14, a2, &v24, &v26);
    v16 = v24;
    v13 = v15;
    v10 = v26;
    if ( v15 >= 0 )
    {
      v28 = *((_QWORD *)v24 - 4);
      v13 = HampDepGroupAddTerminateDependency(v12, v27, v24, v26, a3, a4);
      if ( v13 >= 0 )
        v13 = 0;
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
  if ( v12 )
  {
    RmpAcquireGlobalLock();
    v18 = (*((_QWORD *)v12 + 74))-- == 1LL;
    if ( v18 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v12 - 64), v19);
    RmpReleaseGlobalLock();
  }
  v20 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v20, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 8LL) )
  {
    LODWORD(v24) = GetProcessId(a2);
    v31 = v27;
    v32 = v29;
    v26 = v10;
    v30 = v28;
    LODWORD(v25) = v13;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v28,
      byte_18009F821,
      v21,
      v22,
      (__int64)&v25,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v24,
      (__int64)&v30,
      (__int64)&v26);
  }
  return (unsigned int)v13;
}
