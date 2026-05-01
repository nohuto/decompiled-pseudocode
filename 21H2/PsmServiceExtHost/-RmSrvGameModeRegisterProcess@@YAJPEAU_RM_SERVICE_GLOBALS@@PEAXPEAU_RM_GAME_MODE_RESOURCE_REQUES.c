/*
 * XREFs of ?RmSrvGameModeRegisterProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@K@Z @ 0x180069F8C
 * Callers:
 *     RmGameModeRSrvRegisterProcess @ 0x18006AA90 (RmGameModeRSrvRegisterProcess.c)
 *     RmGameModeSrvRegisterProcess @ 0x18006ABB0 (RmGameModeSrvRegisterProcess.c)
 * Callees:
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B52C (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U?$_tlgWrapperByVal@$00@@U1@U1@U?$_tlgWrapSz@G@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$07@@333AEBU?$_tlgWrapperByVal@$00@@33AEBU?$_tlgWrapSz@G@@4@Z @ 0x1800687E0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U-$_tlgWrapperByVal@$0.c)
 *     ?RmpGameModeIsResourceRequestValid@@YAEPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x18006F450 (-RmpGameModeIsResourceRequestValid@@YAEPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUE.c)
 *     ?RmpGameModeRegisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x18006FBCC (-RmpGameModeRegisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUES.c)
 */

__int64 __fastcall RmSrvGameModeRegisterProcess(
        struct _RM_SERVICE_GLOBALS *a1,
        void *a2,
        struct _RM_GAME_MODE_RESOURCE_REQUEST *a3,
        int a4)
{
  struct _RM_SERVICE_GLOBALS *v4; // rbx
  __int64 v8; // rcx
  int v9; // r13d
  ULONG v10; // ebx
  int v11; // edi
  int v12; // esi
  int v13; // r14d
  int v14; // r15d
  int v15; // r12d
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  DWORD v19; // ebx
  _BYTE v21[4]; // [rsp+80h] [rbp-80h] BYREF
  ULONG ReturnLength; // [rsp+84h] [rbp-7Ch] BYREF
  LPWSTR FileNameW; // [rsp+88h] [rbp-78h] BYREF
  int v24; // [rsp+90h] [rbp-70h] BYREF
  int v25; // [rsp+94h] [rbp-6Ch] BYREF
  int v26; // [rsp+98h] [rbp-68h] BYREF
  int v27; // [rsp+9Ch] [rbp-64h] BYREF
  int v28; // [rsp+A0h] [rbp-60h] BYREF
  DWORD ProcessId; // [rsp+A4h] [rbp-5Ch] BYREF
  HANDLE Process; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v31; // [rsp+B0h] [rbp-50h] BYREF
  struct _RM_GAME_MODE_RESOURCE_REQUEST *v32; // [rsp+B8h] [rbp-48h]
  __int64 v33; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v34; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v35[144]; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+160h] [rbp+60h] BYREF
  _BYTE ProcessInformation[8]; // [rsp+180h] [rbp+80h] BYREF
  LPCWSTR pszPath; // [rsp+188h] [rbp+88h]

  v4 = RmSvcGlobals;
  Process = a2;
  v32 = a3;
  RmpUtilCheckStartLockTracking(&v31, (struct _CEM_LOCK_TRACKER *)v35);
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
    tlgWriteTransfer_EventWriteTransfer(v8, (unsigned __int8 *)dword_18009BB2C, 0LL, 0LL, 2u, &v36);
  if ( a4 )
  {
    v9 = -1073741583;
  }
  else if ( RmpGameModeIsResourceRequestValid(v4, a3) )
  {
    v9 = RmpGameModeRegisterProcess((struct _RM_SERVICE_GLOBALS *)((char *)v4 + 1616), a2, a3);
    if ( v9 >= 0 )
      v9 = 0;
  }
  else
  {
    v9 = -1073741584;
  }
  if ( dword_1800B31E0 )
  {
    FileNameW = 0LL;
    ReturnLength = 0;
    if ( NtQueryInformationProcess(a2, ProcessImageFileNameWin32, ProcessInformation, 0x228u, &ReturnLength) >= 0 )
      FileNameW = PathFindFileNameW(pszPath);
    if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 0x400000000001LL) )
    {
      v10 = *((_DWORD *)a3 + 7);
      v11 = *((_DWORD *)a3 + 8);
      v12 = *((_DWORD *)a3 + 6);
      v13 = *((_DWORD *)a3 + 5);
      v14 = *((_DWORD *)a3 + 4);
      v15 = *((_DWORD *)a3 + 1);
      ProcessId = GetProcessId(Process);
      v21[0] = *((_BYTE *)v32 + 36);
      v16 = *((_QWORD *)v32 + 1);
      v33 = 0x1000000LL;
      ReturnLength = v10;
      v24 = v11;
      v25 = v12;
      v26 = v13;
      v27 = v14;
      v34 = v16;
      v28 = v15;
      LODWORD(Process) = v9;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
        v16,
        byte_18009B529,
        v17,
        v18,
        (__int64)&Process,
        (__int64)&ProcessId,
        (__int64)&v28,
        (__int64)&v34,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)v21,
        (__int64)&v24,
        (__int64)&ReturnLength,
        (void **)&FileNameW,
        (__int64)&v33);
    }
  }
  if ( v31 )
  {
    v19 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v19, 0LL);
    }
  }
  return (unsigned int)v9;
}
