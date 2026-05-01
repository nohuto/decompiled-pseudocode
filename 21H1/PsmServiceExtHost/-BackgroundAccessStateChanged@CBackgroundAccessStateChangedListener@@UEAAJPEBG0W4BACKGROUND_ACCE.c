/*
 * XREFs of ?BackgroundAccessStateChanged@CBackgroundAccessStateChangedListener@@UEAAJPEBG0W4BACKGROUND_ACCESS_STATE@@@Z @ 0x180076F40
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B478 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     ?HampPkgInfoInitialize@@YAXPEBGPEAXKPEAU_HAM_PACKAGE_INFO@@@Z @ 0x180026864 (-HampPkgInfoInitialize@@YAXPEBGPEAXKPEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@43@Z @ 0x1800769A0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U2@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgP.c)
 *     ?HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@K@Z @ 0x18007FE60 (-HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@.c)
 *     CempPackageFamilyNameFromFullName @ 0x180085084 (CempPackageFamilyNameFromFullName.c)
 */

__int64 __fastcall CBackgroundAccessStateChangedListener::BackgroundAccessStateChanged(
        __int64 a1,
        const WCHAR *a2,
        const WCHAR *a3,
        int a4)
{
  int v8; // ebx
  unsigned int v9; // ebx
  signed int LastError; // eax
  DWORD v11; // edi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v16; // [rsp+50h] [rbp-B0h] BYREF
  int v17; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v18; // [rsp+58h] [rbp-A8h] BYREF
  PSID Sid; // [rsp+60h] [rbp-A0h] BYREF
  const WCHAR *v20; // [rsp+68h] [rbp-98h] BYREF
  const WCHAR *v21; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v22[208]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v23[144]; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+1E0h] [rbp+E0h] BYREF
  unsigned __int16 v25[72]; // [rsp+200h] [rbp+100h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v23);
  Sid = 0LL;
  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B3218,
      (unsigned __int8 *)dword_18009EC90,
      0LL,
      0LL,
      2u,
      &v24);
  v8 = CempPackageFamilyNameFromFullName(a3);
  if ( v8 >= 0 )
  {
    if ( ConvertStringSidToSidW(a2, &Sid) )
    {
      HampPkgInfoInitialize(v25, Sid, *(_DWORD *)(a1 + 40), (struct _HAM_PACKAGE_INFO *)v22);
      HampPkgHandleBackgroundAccessStateChange(
        *(struct _HOST_ACTIVITY_MANAGER **)(a1 + 32),
        (struct _HAM_PACKAGE_INFO *)v22,
        (a4 & 1) == 0);
      v9 = 0;
    }
    else
    {
      LastError = GetLastError();
      v9 = LastError;
      if ( LastError > 0 )
        v9 = (unsigned __int16)LastError | 0x80070000;
    }
  }
  else
  {
    v9 = v8 | 0x10000000;
  }
  if ( Sid )
    LocalFree(Sid);
  v11 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v11, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 8LL) )
  {
    v17 = *(_DWORD *)(a1 + 40);
    v16 = a4;
    v20 = a3;
    v21 = a2;
    v18 = v9;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      v12,
      byte_18009ED09,
      v13,
      v14,
      (__int64)&v18,
      (__int64)&v17,
      (void **)&v21,
      (void **)&v20,
      (__int64)&v16);
  }
  return v9;
}
