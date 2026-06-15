/*
 * XREFs of ?LogTelemetry@CSarmErrorEventValues@CSpatialAudioResourceManagerTraceLogger@@UEAAXXZ @ 0x18010AA80
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1800B7A3C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x18010A440 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

void __fastcall CSpatialAudioResourceManagerTraceLogger::CSarmErrorEventValues::LogTelemetry(
        CSpatialAudioResourceManagerTraceLogger::CSarmErrorEventValues *this)
{
  ULONGLONG TickCount64; // rbx
  __int64 *v3; // rax
  __int64 v4; // rdx
  _DWORD **v5; // rax
  _DWORD *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int8 *v10; // rdx
  struct _FILETIME v11; // [rsp+50h] [rbp-10h] BYREF
  struct _FILETIME v12; // [rsp+58h] [rbp-8h] BYREF
  struct _FILETIME v13; // [rsp+80h] [rbp+20h] BYREF
  struct _FILETIME v14; // [rsp+88h] [rbp+28h] BYREF
  int v15; // [rsp+90h] [rbp+30h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+98h] [rbp+38h] BYREF

  if ( *((_QWORD *)this + 1) && *((_QWORD *)this + 2) && *((_QWORD *)this + 3) )
  {
    SystemTimeAsFileTime = 0LL;
    TickCount64 = GetTickCount64();
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v3 = (__int64 *)*((_QWORD *)this + 3);
    v14 = SystemTimeAsFileTime;
    v13 = SystemTimeAsFileTime;
    v4 = *v3;
    v13 = (struct _FILETIME)(10000 * (**((_QWORD **)this + 2) - TickCount64) + *(_QWORD *)&SystemTimeAsFileTime);
    v14 = (struct _FILETIME)(10000 * (v4 - TickCount64) + *(_QWORD *)&SystemTimeAsFileTime);
    v5 = (_DWORD **)*((_QWORD *)this + 4);
    v11 = v14;
    v12 = v13;
    v6 = *v5;
    if ( **((_BYTE **)this + 1) )
    {
      if ( *v6 > 3u && tlgKeywordOn((__int64)v6, 0x400000000000LL) )
      {
        v10 = (unsigned __int8 *)&unk_18016A2C9;
LABEL_11:
        v13.dwLowDateTime = *((_DWORD *)this + 14);
        v14.dwLowDateTime = *((_DWORD *)this + 13);
        v15 = *((_DWORD *)this + 12);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v7,
          v10,
          v8,
          v9,
          (__int64)&v12,
          (__int64)&v11,
          (__int64)&v15,
          (__int64)&v14,
          (__int64)&v13);
      }
    }
    else if ( *v6 > 3u && tlgKeywordOn((__int64)v6, 0x400000000000LL) )
    {
      v10 = (unsigned __int8 *)&unk_18016A35E;
      goto LABEL_11;
    }
  }
}
