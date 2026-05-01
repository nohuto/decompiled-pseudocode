/*
 * XREFs of ?HamSrvOpenPackageHandle@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAEKPEA_K@Z @ 0x18007A79C
 * Callers:
 *     HamRpcSrvServicingOpenPackageHandle @ 0x180080D40 (HamRpcSrvServicingOpenPackageHandle.c)
 *     HamRpcSrvDebugOpenPackageHandle @ 0x180080F00 (HamRpcSrvDebugOpenPackageHandle.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B6E8 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapSid@U_SID@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapSid@U_SID@@@@@Z @ 0x1800799AC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapSid@U_.c)
 *     ?HampClientPkgCreate@@YAJPEAU_HAM_PACKAGE_INFO@@PEAU_HAM_CLIENT_CONTEXT@@PEA_K@Z @ 0x180080FCC (-HampClientPkgCreate@@YAJPEAU_HAM_PACKAGE_INFO@@PEAU_HAM_CLIENT_CONTEXT@@PEA_K@Z.c)
 *     CempUtilValidateAndCapturePackageInfo @ 0x180085C10 (CempUtilValidateAndCapturePackageInfo.c)
 */

__int64 __fastcall HamSrvOpenPackageHandle(
        struct _HAM_CLIENT_CONTEXT *a1,
        const unsigned __int16 *a2,
        unsigned int a3,
        unsigned __int8 *a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  __int64 v10; // r14
  unsigned __int64 v11; // rdi
  char *v12; // r14
  int v13; // ebx
  int v14; // eax
  DWORD v15; // esi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v21; // [rsp+58h] [rbp-A8h] BYREF
  char *v22; // [rsp+60h] [rbp-A0h] BYREF
  void *v23; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v24; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v25[132]; // [rsp+80h] [rbp-80h] BYREF
  char v26; // [rsp+104h] [rbp+4h] BYREF
  _BYTE v27[144]; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+1E0h] [rbp+E0h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B3218,
      (unsigned __int8 *)dword_1800A04E9,
      0LL,
      0LL,
      2u,
      &v28);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v27);
  v10 = *(_QWORD *)a1;
  v11 = 0LL;
  v20 = 0LL;
  v12 = (char *)(v10 + 876);
  v13 = CempUtilValidateAndCapturePackageInfo(a2, a4, a5, a3, v25);
  if ( v13 >= 0 )
  {
    v12 = &v26;
    v14 = HampClientPkgCreate((struct _HAM_PACKAGE_INFO *)v25, a1, &v20);
    v11 = v20;
    v13 = v14;
    if ( v14 >= 0 )
    {
      *a6 = v20;
      v13 = 0;
    }
  }
  v15 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v15, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 64LL) )
  {
    v22 = v12;
    v21 = a3;
    v23 = (void *)a2;
    v24 = v11;
    LODWORD(v20) = v13;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSid<_SID>>(
      v16,
      byte_18009F410,
      v17,
      v18,
      (__int64)&v20,
      (__int64)&v24,
      &v23,
      (__int64)&v21,
      (__int64 *)&v22);
  }
  return (unsigned int)v13;
}
