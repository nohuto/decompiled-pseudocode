/*
 * XREFs of ?HamSrvLogoffUser@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAEKK@Z @ 0x180079C30
 * Callers:
 *     HamRpcSrvSessionStateLogoffUser @ 0x180080460 (HamRpcSrvSessionStateLogoffUser.c)
 * Callees:
 *     CempUtilValidateAndCaptureSid @ 0x180002B84 (CempUtilValidateAndCaptureSid.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B478 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     CemRcObjectDereference @ 0x180027240 (CemRcObjectDereference.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSid@U_SID@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSid@U_SID@@@@@Z @ 0x18007844C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSid@U_SID@@@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 *     ?HampUserFindInManager@@YAPEAU_HAM_USER@@PEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@@Z @ 0x18008177C (-HampUserFindInManager@@YAPEAU_HAM_USER@@PEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@@Z.c)
 *     ?HampUserLogoff@@YAJPEAU_HAM_USER@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x1800817D0 (-HampUserLogoff@@YAJPEAU_HAM_USER@@PEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 */

__int64 __fastcall HamSrvLogoffUser(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int8 *a2,
        unsigned int a3,
        unsigned int a4)
{
  NTSTATUS v8; // ebx
  struct _HAM_USER *v9; // rax
  struct _HAM_USER *v10; // rdi
  DWORD v11; // edi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v16; // [rsp+40h] [rbp-148h] BYREF
  NTSTATUS v17; // [rsp+44h] [rbp-144h] BYREF
  unsigned __int8 *v18; // [rsp+48h] [rbp-140h] BYREF
  _BYTE v19[80]; // [rsp+50h] [rbp-138h] BYREF
  _BYTE v20[144]; // [rsp+A0h] [rbp-E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+130h] [rbp-58h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v20);
  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B3218,
      (unsigned __int8 *)dword_18009F8BD,
      0LL,
      0LL,
      2u,
      &v21);
  v8 = CempUtilValidateAndCaptureSid(a2, a3, v19);
  if ( v8 >= 0 )
  {
    v9 = HampUserFindInManager(*(struct _HOST_ACTIVITY_MANAGER **)a1, *((_DWORD *)a1 + 36), (union _RM_SID *)v19);
    v10 = v9;
    if ( v9 )
    {
      v8 = HampUserLogoff(v9, a1, a4);
      if ( v8 >= 0 )
        v8 = 0;
      CemRcObjectDereference(v10);
    }
    else
    {
      v8 = -1058275321;
    }
  }
  v11 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v11, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 8LL) )
  {
    v16 = *((_DWORD *)a1 + 36);
    v18 = a2;
    v17 = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSid<_SID>>(
      v12,
      byte_18009F58A,
      v13,
      v14,
      (__int64)&v17,
      (__int64)&v16,
      (__int64 *)&v18);
  }
  return (unsigned int)v8;
}
