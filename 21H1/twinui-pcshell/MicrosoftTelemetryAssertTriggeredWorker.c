/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x180456DF0
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180456DD4 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180022ED4 (_tlgKeywordOn.c)
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x180085378 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     EventUnregister_0 @ 0x18008D85A (EventUnregister_0.c)
 *     EventRegister_0 @ 0x18008D8F6 (EventRegister_0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapSz@D@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapSz@D@@3333@Z @ 0x180456C14 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapSz@D@@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A.c)
 *     GetImageTuple @ 0x180456D28 (GetImageTuple.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(unsigned __int64 a1)
{
  int v2; // esi
  int v3; // r15d
  struct MicrosoftTelemetryAssertTriggeredNode *v4; // rbx
  struct MicrosoftTelemetryAssertTriggeredNode *v5; // rax
  DWORD TickCount; // eax
  struct MicrosoftTelemetryAssertTriggeredNode *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  DWORD v10; // r14d
  char *v11; // rdx
  int v12; // edi
  CHAR v13; // dl
  unsigned int v14; // r13d
  __int64 v15; // r14
  CHAR *v16; // r12
  unsigned int v17; // ecx
  REGHANDLE v18; // rcx
  unsigned int v19; // edx
  __int64 v20; // r8
  const char *v21; // r9
  __int64 v22; // rcx
  REGHANDLE v23; // rcx
  unsigned int v24; // [rsp+78h] [rbp-90h] BYREF
  DWORD ImageTuple; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v26; // [rsp+80h] [rbp-88h] BYREF
  ULONGLONG RegHandle; // [rsp+88h] [rbp-80h] BYREF
  int v28; // [rsp+90h] [rbp-78h] BYREF
  int v29; // [rsp+94h] [rbp-74h] BYREF
  int v30; // [rsp+98h] [rbp-70h] BYREF
  int v31; // [rsp+9Ch] [rbp-6Ch] BYREF
  GUID ProviderId; // [rsp+A0h] [rbp-68h] BYREF
  CHAR v33[272]; // [rsp+B8h] [rbp-50h] BYREF

  v2 = 0;
  v3 = 0;
  AcquireSRWLockExclusive(&g_MicrosoftTelemetryAssertLock);
  v4 = g_MicrosoftTelemetryAssertsTriggeredList;
  if ( !g_MicrosoftTelemetryAssertsTriggeredList )
    goto LABEL_5;
  do
  {
    if ( *(_QWORD *)v4 == a1 )
      break;
    v4 = (struct MicrosoftTelemetryAssertTriggeredNode *)*((_QWORD *)v4 + 3);
  }
  while ( v4 );
  if ( !v4 )
  {
LABEL_5:
    v5 = (struct MicrosoftTelemetryAssertTriggeredNode *)LocalAlloc(0x40u, 0x20uLL);
    v4 = v5;
    if ( !v5 )
      goto LABEL_37;
    *(_QWORD *)v5 = a1;
    TickCount = GetTickCount();
    v7 = g_MicrosoftTelemetryAssertsTriggeredList;
    *((_DWORD *)v4 + 2) = TickCount - 60001;
    *(_QWORD *)((char *)v4 + 12) = 0LL;
    *((_QWORD *)v4 + 3) = v7;
    g_MicrosoftTelemetryAssertsTriggeredList = v4;
  }
  ++*((_DWORD *)v4 + 3);
  ++*((_DWORD *)v4 + 4);
  if ( GetTickCount() - *((_DWORD *)v4 + 2) > 0xEA60 )
  {
    *((_DWORD *)v4 + 2) = GetTickCount();
    ImageTuple = GetImageTuple(v8, v33, v9, &v26, &v24);
    v10 = ImageTuple;
    if ( ImageTuple
      && a1 >= (unsigned __int64)&_ImageBase
      && (v11 = (char *)&_ImageBase + v24, v11 > (char *)&_ImageBase)
      && a1 <= (unsigned __int64)v11 )
    {
      v12 = a1 - (unsigned int)&_ImageBase;
    }
    else
    {
      v12 = 0;
    }
    if ( *((_DWORD *)v4 + 4) == 1
      && !(unsigned int)TraceLoggingRegisterEx_EventRegister_EventSetInformation(
                          (ULONGLONG *)&dword_18059E4D0,
                          0LL,
                          0LL) )
    {
      if ( dword_18059E4D0 )
      {
        v13 = v33[0];
        v2 = 1;
        ProviderId.Data1 = 488056742;
        v3 = 1;
        *(_DWORD *)&ProviderId.Data2 = 1311216328;
        v14 = 0;
        *(_DWORD *)ProviderId.Data4 = -1961924164;
        *(_DWORD *)&ProviderId.Data4[4] = -1655403451;
        if ( v33[0] )
        {
          v15 = 0LL;
          v16 = v33;
          do
          {
            *((_BYTE *)&ProviderId.Data1 + v15) += toupper(v13);
            ++v16;
            v17 = v14 + 1;
            v13 = *v16;
            v14 = v17 < 0x10 ? v17 : 0;
            v15 = (v15 + 1) & -(__int64)(v17 < 0x10);
          }
          while ( *v16 );
          v10 = ImageTuple;
        }
        if ( !EventRegister_0(&ProviderId, 0LL, 0LL, &RegHandle) )
        {
          if ( EventProviderEnabled(RegHandle, 0, 0LL) )
            v2 = 0;
          EventUnregister_0(RegHandle);
        }
      }
      v18 = qword_18059E4F0;
      qword_18059E4F0 = 0LL;
      dword_18059E4D0 = 0;
      EventUnregister(v18);
    }
    if ( !(unsigned int)TraceLoggingRegisterEx_EventRegister_EventSetInformation(
                          (ULONGLONG *)&dword_18059E508,
                          0LL,
                          0LL) )
    {
      if ( (unsigned int)dword_18059E508 > 5 && tlgKeywordOn((__int64)&dword_18059E508, 0x400000000000LL) )
      {
        v19 = *((_DWORD *)v4 + 4);
        v20 = *((unsigned int *)v4 + 3);
        v21 = v33;
        ImageTuple = v2;
        v28 = v20;
        if ( !v10 )
          v21 = "<unknown>";
        v31 = v12;
        *(_QWORD *)&ProviderId.Data1 = v21;
        LODWORD(RegHandle) = 10;
        v22 = v10 != 0 ? v24 : 0;
        v24 = v19;
        v29 = v22;
        v30 = v10 != 0 ? v26 : 0;
        v26 = v3;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v22,
          byte_180500D8E,
          v20,
          (__int64)v21,
          (__int64)&RegHandle,
          (__int64)&v31,
          (__int64)&v30,
          (__int64)&v29,
          (const wchar_t **)&ProviderId,
          (__int64)&v28,
          (__int64)&v24,
          (__int64)&ImageTuple,
          (__int64)&v26);
      }
      v23 = qword_18059E528;
      qword_18059E528 = 0LL;
      dword_18059E508 = 0;
      EventUnregister(v23);
    }
    if ( v3 && v2 )
      Sleep(0x3E8u);
    *((_DWORD *)v4 + 3) = 0;
  }
LABEL_37:
  ReleaseSRWLockExclusive(&g_MicrosoftTelemetryAssertLock);
}
