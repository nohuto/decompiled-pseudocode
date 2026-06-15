/*
 * XREFs of ?LogTelemetry@CCrossProcessEndpointGlitchValues@CCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x1400595B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@5555555@Z @ 0x140058F80 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$03@@U3@U3@U.c)
 */

void __fastcall CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues::LogTelemetry(
        CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues *this)
{
  ULONGLONG TickCount64; // rbx
  __int64 v3; // r9
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 *v7; // rax
  __int64 v8; // rcx
  int v9; // [rsp+80h] [rbp+17h] BYREF
  int v10; // [rsp+84h] [rbp+1Bh] BYREF
  int v11; // [rsp+88h] [rbp+1Fh] BYREF
  int v12; // [rsp+8Ch] [rbp+23h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+90h] [rbp+27h] BYREF
  __int64 v14; // [rsp+98h] [rbp+2Fh] BYREF
  struct _FILETIME v15; // [rsp+A0h] [rbp+37h] BYREF
  __int64 v16[3]; // [rsp+A8h] [rbp+3Fh] BYREF
  struct _FILETIME v17; // [rsp+D0h] [rbp+67h] BYREF
  struct _FILETIME v18; // [rsp+D8h] [rbp+6Fh] BYREF
  int v19; // [rsp+E0h] [rbp+77h] BYREF
  int v20; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( *((_QWORD *)this + 1) && *((_QWORD *)this + 2) && *((_QWORD *)this + 3) )
  {
    SystemTimeAsFileTime = 0LL;
    TickCount64 = GetTickCount64();
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v4 = (__int64 *)*((_QWORD *)this + 3);
    v18 = SystemTimeAsFileTime;
    v17 = SystemTimeAsFileTime;
    v5 = *v4;
    v17 = (struct _FILETIME)(10000 * (**((_QWORD **)this + 2) - TickCount64) + *(_QWORD *)&SystemTimeAsFileTime);
    v6 = 10000 * (v5 - TickCount64);
    v18 = (struct _FILETIME)(v6 + *(_QWORD *)&SystemTimeAsFileTime);
    v7 = (__int64 *)*((_QWORD *)this + 4);
    v14 = v6 + *(_QWORD *)&SystemTimeAsFileTime;
    v15 = v17;
    v8 = *v7;
    if ( **((_BYTE **)this + 1) )
    {
      if ( *(_DWORD *)v8 > 3u && (*(_BYTE *)(v8 + 16) & 2) != 0 && (*(_QWORD *)(v8 + 24) & 2LL) == *(_QWORD *)(v8 + 24) )
      {
        v17.dwLowDateTime = *((_DWORD *)this + 19);
        v18.dwLowDateTime = *((_DWORD *)this + 18);
        v19 = *((_DWORD *)this + 17);
        v20 = *((_DWORD *)this + 16);
        v9 = *((_DWORD *)this + 15);
        v10 = *((_DWORD *)this + 14);
        v11 = *((_DWORD *)this + 13);
        v12 = *((_DWORD *)this + 12);
        v16[0] = *((_QWORD *)this + 5);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v8,
          byte_140072245,
          v6,
          v3,
          v16,
          (__int64)&v15,
          (__int64)&v14,
          (__int64)&v12,
          (__int64)&v11,
          (__int64)&v10,
          (__int64)&v9,
          (__int64)&v20,
          (__int64)&v19,
          (__int64)&v18,
          (__int64)&v17);
      }
    }
    else if ( *(_DWORD *)v8 > 3u
           && (*(_QWORD *)(v8 + 16) & 0x400000000002LL) != 0
           && (*(_QWORD *)(v8 + 24) & 0x400000000002LL) == *(_QWORD *)(v8 + 24) )
    {
      v17.dwLowDateTime = *((_DWORD *)this + 19);
      v18.dwLowDateTime = *((_DWORD *)this + 18);
      v19 = *((_DWORD *)this + 17);
      v20 = *((_DWORD *)this + 16);
      v12 = *((_DWORD *)this + 15);
      v11 = *((_DWORD *)this + 14);
      v10 = *((_DWORD *)this + 13);
      v9 = *((_DWORD *)this + 12);
      v16[0] = v14;
      v14 = *((_QWORD *)this + 5);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v8,
        byte_140072379,
        v6,
        v3,
        &v14,
        (__int64)&v15,
        (__int64)v16,
        (__int64)&v9,
        (__int64)&v10,
        (__int64)&v11,
        (__int64)&v12,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17);
    }
  }
}
