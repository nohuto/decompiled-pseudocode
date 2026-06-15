/*
 * XREFs of ?LogTelemetry@CSpatialCPEndpointErrorEventValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x1400680F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@55@Z @ 0x140067194 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$03@@U3@U3@@.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::CSpatialCPEndpointErrorEventValues::LogTelemetry(
        CSpatialCrossProcessEndpointTraceLogger::CSpatialCPEndpointErrorEventValues *this)
{
  ULONGLONG TickCount64; // rbx
  __int64 v3; // r9
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // [rsp+50h] [rbp-20h] BYREF
  struct _FILETIME v10; // [rsp+58h] [rbp-18h] BYREF
  __int64 v11[2]; // [rsp+60h] [rbp-10h] BYREF
  struct _FILETIME v12; // [rsp+90h] [rbp+20h] BYREF
  struct _FILETIME v13; // [rsp+98h] [rbp+28h] BYREF
  int v14; // [rsp+A0h] [rbp+30h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+A8h] [rbp+38h] BYREF

  if ( *((_QWORD *)this + 1) && *((_QWORD *)this + 2) && *((_QWORD *)this + 3) )
  {
    SystemTimeAsFileTime = 0LL;
    TickCount64 = GetTickCount64();
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v4 = (__int64 *)*((_QWORD *)this + 3);
    v13 = SystemTimeAsFileTime;
    v12 = SystemTimeAsFileTime;
    v5 = *v4;
    v12 = (struct _FILETIME)(10000 * (**((_QWORD **)this + 2) - TickCount64) + *(_QWORD *)&SystemTimeAsFileTime);
    v6 = 10000 * (v5 - TickCount64);
    v13 = (struct _FILETIME)(v6 + *(_QWORD *)&SystemTimeAsFileTime);
    v7 = (__int64 *)*((_QWORD *)this + 4);
    v9 = v6 + *(_QWORD *)&SystemTimeAsFileTime;
    v10 = v12;
    v8 = *v7;
    if ( **((_BYTE **)this + 1) )
    {
      if ( *(_DWORD *)v8 > 3u
        && (*(_QWORD *)(v8 + 16) & 0x200000000000LL) != 0
        && (*(_QWORD *)(v8 + 24) & 0x200000000000LL) == *(_QWORD *)(v8 + 24) )
      {
        v12.dwLowDateTime = *((_DWORD *)this + 14);
        v13.dwLowDateTime = *((_DWORD *)this + 13);
        v14 = *((_DWORD *)this + 12);
        v11[0] = *((_QWORD *)this + 5);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v8,
          byte_14007CCEC,
          v6,
          v3,
          v11,
          (__int64)&v10,
          (__int64)&v9,
          (__int64)&v14,
          (__int64)&v13,
          (__int64)&v12);
      }
    }
    else if ( *(_DWORD *)v8 > 3u
           && (*(_QWORD *)(v8 + 16) & 0x400000000000LL) != 0
           && (*(_QWORD *)(v8 + 24) & 0x400000000000LL) == *(_QWORD *)(v8 + 24) )
    {
      v12.dwLowDateTime = *((_DWORD *)this + 14);
      v13.dwLowDateTime = *((_DWORD *)this + 13);
      v14 = *((_DWORD *)this + 12);
      v11[0] = v9;
      v9 = *((_QWORD *)this + 5);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v8,
        byte_14007CD89,
        v6,
        v3,
        &v9,
        (__int64)&v10,
        (__int64)v11,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12);
    }
  }
}
