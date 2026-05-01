/*
 * XREFs of ?RmSrvGameModeRegisterPairedAuxiliaryProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@1K@Z @ 0x1800692E4
 * Callers:
 *     RmGameModeRSrvRegisterPairedAuxiliaryProcess @ 0x18006A010 (RmGameModeRSrvRegisterPairedAuxiliaryProcess.c)
 *     RmGameModeSrvRegisterPairedAuxiliaryProcess @ 0x18006A1D0 (RmGameModeSrvRegisterPairedAuxiliaryProcess.c)
 * Callees:
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B2BC (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@U1@U1@U?$_tlgWrapSz@G@@U3@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@33AEBU?$_tlgWrapSz@G@@5AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180067CC4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$00@@U1@U1@U-$_tlgWrapSz@G@@U3@U-$_t.c)
 *     ?RmpGameModeIsResourceRequestValid@@YAEPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x18006EA80 (-RmpGameModeIsResourceRequestValid@@YAEPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUE.c)
 *     ?RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@1@Z @ 0x18006EF94 (-RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_.c)
 */

__int64 __fastcall RmSrvGameModeRegisterPairedAuxiliaryProcess(
        struct _RM_SERVICE_GLOBALS *a1,
        void *a2,
        struct _RM_GAME_MODE_RESOURCE_REQUEST *a3,
        void *a4,
        unsigned int a5)
{
  struct _RM_SERVICE_GLOBALS *v5; // rbx
  LPWSTR v9; // r12
  int v10; // r14d
  LPWSTR FileNameW; // r13
  ULONG v12; // ebx
  int v13; // edi
  DWORD ProcessId; // esi
  DWORD v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  DWORD v19; // ebx
  _BYTE v21[4]; // [rsp+70h] [rbp-90h] BYREF
  ULONG ReturnLength; // [rsp+74h] [rbp-8Ch] BYREF
  int v23; // [rsp+78h] [rbp-88h] BYREF
  DWORD v24; // [rsp+7Ch] [rbp-84h] BYREF
  DWORD v25; // [rsp+80h] [rbp-80h] BYREF
  int v26; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v27; // [rsp+88h] [rbp-78h] BYREF
  HANDLE Process; // [rsp+90h] [rbp-70h] BYREF
  __int64 v29; // [rsp+98h] [rbp-68h] BYREF
  LPWSTR v30; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v31[144]; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+140h] [rbp+40h] BYREF
  _BYTE ProcessInformation[8]; // [rsp+160h] [rbp+60h] BYREF
  LPCWSTR pszPath; // [rsp+168h] [rbp+68h]
  _BYTE v35[8]; // [rsp+390h] [rbp+290h] BYREF
  LPCWSTR v36; // [rsp+398h] [rbp+298h]

  v5 = RmSvcGlobals;
  Process = a2;
  RmpUtilCheckStartLockTracking(&v27, (struct _CEM_LOCK_TRACKER *)v31);
  v9 = 0LL;
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B31E0,
      (unsigned __int8 *)dword_18009B660,
      0LL,
      0LL,
      2u,
      &v32);
  if ( a5 )
  {
    v10 = -1073741583;
  }
  else if ( RmpGameModeIsResourceRequestValid(v5, a3) && (*((_DWORD *)a3 + 8) & 5) == 1 )
  {
    v10 = RmpGameModeRegisterPairedProcess((struct _RM_SERVICE_GLOBALS *)((char *)v5 + 1616), a2, a3, a4);
    if ( v10 >= 0 )
      v10 = 0;
  }
  else
  {
    v10 = -1073741584;
  }
  if ( dword_1800B31E0 )
  {
    ReturnLength = 0;
    FileNameW = 0LL;
    if ( NtQueryInformationProcess(a2, ProcessImageFileNameWin32, ProcessInformation, 0x228u, &ReturnLength) >= 0 )
      FileNameW = PathFindFileNameW(pszPath);
    ReturnLength = 0;
    if ( NtQueryInformationProcess(a4, ProcessImageFileNameWin32, v35, 0x228u, &ReturnLength) >= 0 )
      v9 = PathFindFileNameW(v36);
    if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 0x400000000001LL) )
    {
      v12 = *((_DWORD *)a3 + 7);
      v13 = *((_DWORD *)a3 + 8);
      ProcessId = GetProcessId(a4);
      v15 = GetProcessId(Process);
      LOBYTE(v16) = *((_BYTE *)a3 + 36);
      v25 = v15;
      v29 = 0x1000000LL;
      Process = v9;
      v30 = FileNameW;
      ReturnLength = v12;
      v23 = v13;
      v21[0] = v16;
      v24 = ProcessId;
      v26 = v10;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
        v16,
        byte_18009B697,
        v17,
        v18,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)v21,
        (__int64)&v23,
        (__int64)&ReturnLength,
        (void **)&v30,
        &Process,
        (__int64)&v29);
    }
  }
  if ( v27 )
  {
    v19 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        NT_ASSERT("CurrentTracker->Bitmap == 0");
      TlsSetValue(v19, 0LL);
    }
  }
  return (unsigned int)v10;
}
