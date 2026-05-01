/*
 * XREFs of ?HamSrvGetPackageInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x18007A21C
 * Callers:
 *     HamRpcSrvGetPackageInterruptiveUIState @ 0x180080DB0 (HamRpcSrvGetPackageInterruptiveUIState.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B6E8 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x1800251A0 (-HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     CemRcObjectDereference @ 0x1800273B0 (CemRcObjectDereference.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapSid@U_SID@@@@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSid@U_SID@@@@3AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180079264 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapSid@U_SID@@@@U1@U-$_tlgWrapperByVa.c)
 *     ?HampPkgGetInterruptiveUIState@@YAKPEAU_HAM_PACKAGE@@PEBG@Z @ 0x180080748 (-HampPkgGetInterruptiveUIState@@YAKPEAU_HAM_PACKAGE@@PEBG@Z.c)
 *     CempUtilValidateAndCapturePackageInfoWithFamilyName @ 0x180085D3C (CempUtilValidateAndCapturePackageInfoWithFamilyName.c)
 */

__int64 __fastcall HamSrvGetPackageInterruptiveUIState(
        struct _HOST_ACTIVITY_MANAGER *a1,
        unsigned __int16 *a2,
        PSID SourceSid,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6)
{
  char v6; // si
  int v10; // edi
  struct _HAM_PACKAGE *v11; // rax
  struct _HAM_PACKAGE *v12; // rbx
  unsigned int InterruptiveUIState; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  DWORD v17; // ebx
  _BYTE v19[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v20; // [rsp+54h] [rbp-ACh] BYREF
  int v21; // [rsp+58h] [rbp-A8h] BYREF
  PSID v22; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 *v23; // [rsp+68h] [rbp-98h] BYREF
  __int64 v24[26]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v25[144]; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+1D0h] [rbp+D0h] BYREF

  v6 = 0;
  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B3218,
      (unsigned __int8 *)dword_18009F3E7,
      0LL,
      0LL,
      2u,
      &v26);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v25);
  v10 = CempUtilValidateAndCapturePackageInfoWithFamilyName(a2, SourceSid, (__int64)v24);
  if ( v10 >= 0 )
  {
    v11 = HampPkgFindInManager(a1, (struct _HAM_PACKAGE_INFO *)v24);
    v12 = v11;
    if ( v11 )
    {
      InterruptiveUIState = HampPkgGetInterruptiveUIState(v11, 0LL);
      v6 = InterruptiveUIState;
      *a6 = InterruptiveUIState;
      v10 = 0;
      CemRcObjectDereference(v12);
    }
    else
    {
      v10 = -1073741275;
    }
  }
  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 8LL) )
  {
    v19[0] = v6;
    v20 = a5;
    v22 = SourceSid;
    v23 = a2;
    v21 = v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSid<_SID>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
      v14,
      byte_1800A01C6,
      v15,
      v16,
      (__int64)&v21,
      (void **)&v23,
      (__int64 *)&v22,
      (__int64)&v20,
      (__int64)v19);
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
