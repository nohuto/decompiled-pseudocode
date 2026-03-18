/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x14000A088
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x14000A064 (MicrosoftTelemetryAssertTriggeredArgs.c)
 * Callees:
 *     __security_check_cookie @ 0x140003190 (__security_check_cookie.c)
 *     EventUnregister_0 @ 0x1400046CC (EventUnregister_0.c)
 *     EventRegister_0 @ 0x1400046D8 (EventRegister_0.c)
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x140009904 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     _tlgKeywordOn @ 0x140009A3C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapSz@D@@U1@U1@U2@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapSz@D@@3343333@Z @ 0x140009E34 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapSz@D@@U1@U1@U2@U1@U1@U1@U1@@-$_tlgWriteTem.c)
 *     GetImageTuple @ 0x140009FB8 (GetImageTuple.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5)
{
  int v6; // esi
  int v7; // r13d
  int v8; // r15d
  struct MicrosoftTelemetryAssertTriggeredNode *v9; // rbx
  struct MicrosoftTelemetryAssertTriggeredNode *v10; // rax
  DWORD TickCount; // eax
  struct MicrosoftTelemetryAssertTriggeredNode *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  DWORD v15; // r14d
  char *v16; // rdx
  int v17; // edi
  CHAR v18; // dl
  unsigned int v19; // r15d
  __int64 v20; // r14
  CHAR *v21; // r12
  unsigned int v22; // ecx
  REGHANDLE v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  const char *v26; // r10
  int v27; // edx
  __int64 v28; // rcx
  REGHANDLE v29; // rcx
  int v30; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v31; // [rsp+8Ch] [rbp-7Ch] BYREF
  DWORD ImageTuple; // [rsp+90h] [rbp-78h] BYREF
  int v33; // [rsp+94h] [rbp-74h] BYREF
  ULONGLONG RegHandle; // [rsp+98h] [rbp-70h] BYREF
  int v35; // [rsp+A0h] [rbp-68h] BYREF
  int v36; // [rsp+A4h] [rbp-64h] BYREF
  int v37; // [rsp+A8h] [rbp-60h] BYREF
  int v38; // [rsp+ACh] [rbp-5Ch] BYREF
  int v39; // [rsp+B0h] [rbp-58h] BYREF
  const char *v40; // [rsp+B8h] [rbp-50h] BYREF
  GUID ProviderId; // [rsp+C0h] [rbp-48h] BYREF
  CHAR v42[272]; // [rsp+D8h] [rbp-30h] BYREF

  v30 = a4;
  v6 = 0;
  v7 = 0;
  v8 = a4;
  AcquireSRWLockExclusive(&g_MicrosoftTelemetryAssertLock);
  v9 = g_MicrosoftTelemetryAssertsTriggeredList;
  if ( !g_MicrosoftTelemetryAssertsTriggeredList )
    goto LABEL_5;
  do
  {
    if ( *(_QWORD *)v9 == a1 )
      break;
    v9 = (struct MicrosoftTelemetryAssertTriggeredNode *)*((_QWORD *)v9 + 3);
  }
  while ( v9 );
  if ( !v9 )
  {
LABEL_5:
    v10 = (struct MicrosoftTelemetryAssertTriggeredNode *)LocalAlloc(0x40u, 0x20uLL);
    v9 = v10;
    if ( !v10 )
      goto LABEL_38;
    *(_QWORD *)v10 = a1;
    TickCount = GetTickCount();
    v12 = g_MicrosoftTelemetryAssertsTriggeredList;
    *((_DWORD *)v9 + 2) = TickCount - 60001;
    *(_QWORD *)((char *)v9 + 12) = 0LL;
    *((_QWORD *)v9 + 3) = v12;
    g_MicrosoftTelemetryAssertsTriggeredList = v9;
  }
  ++*((_DWORD *)v9 + 3);
  ++*((_DWORD *)v9 + 4);
  if ( GetTickCount() - *((_DWORD *)v9 + 2) > 0xEA60 )
  {
    *((_DWORD *)v9 + 2) = GetTickCount();
    ImageTuple = GetImageTuple(v13, v42, v14, &v33, &v31);
    v15 = ImageTuple;
    if ( ImageTuple
      && a1 >= (unsigned __int64)&_ImageBase
      && (v16 = (char *)&_ImageBase + v31, v16 > (char *)&_ImageBase)
      && a1 <= (unsigned __int64)v16 )
    {
      v17 = a1 - (unsigned int)&_ImageBase;
    }
    else
    {
      v17 = 0;
    }
    if ( *((_DWORD *)v9 + 4) == 1
      && !(unsigned int)TraceLoggingRegisterEx_EventRegister_EventSetInformation((ULONGLONG *)&dword_140015000) )
    {
      if ( dword_140015000 )
      {
        v18 = v42[0];
        v6 = 1;
        ProviderId.Data1 = 488056742;
        v7 = 1;
        *(_DWORD *)&ProviderId.Data2 = 1311216328;
        v19 = 0;
        *(_DWORD *)ProviderId.Data4 = -1961924164;
        *(_DWORD *)&ProviderId.Data4[4] = -1655403451;
        if ( v42[0] )
        {
          v20 = 0LL;
          v21 = v42;
          do
          {
            *((_BYTE *)&ProviderId.Data1 + v20) += toupper(v18);
            ++v21;
            v22 = v19 + 1;
            v18 = *v21;
            v19 = v22 < 0x10 ? v22 : 0;
            v20 = (v20 + 1) & -(__int64)(v22 < 0x10);
          }
          while ( *v21 );
          v15 = ImageTuple;
        }
        if ( !EventRegister_0(&ProviderId, 0LL, 0LL, &RegHandle) )
        {
          if ( EventProviderEnabled(RegHandle, 0, 0LL) )
            v6 = 0;
          EventUnregister_0(RegHandle);
        }
        v8 = v30;
      }
      v23 = qword_140015020;
      qword_140015020 = 0LL;
      dword_140015000 = 0;
      EventUnregister(v23);
    }
    if ( !(unsigned int)TraceLoggingRegisterEx_EventRegister_EventSetInformation((ULONGLONG *)&dword_1400151F8) )
    {
      if ( (unsigned int)dword_1400151F8 > 5 && tlgKeywordOn((__int64)&dword_1400151F8, 0x400000000000LL) )
      {
        v24 = *((unsigned int *)v9 + 4);
        v25 = *((unsigned int *)v9 + 3);
        v26 = v42;
        ImageTuple = v6;
        v30 = v8;
        if ( !v15 )
          v26 = "<unknown>";
        v35 = v24;
        v36 = v25;
        *(_QWORD *)&ProviderId.Data1 = v26;
        v39 = v17;
        v27 = v15 != 0 ? v31 : 0;
        v31 = a5;
        v37 = v27;
        v40 = "dwm.exe";
        LODWORD(RegHandle) = 10;
        v28 = v33 & (unsigned int)-(v15 != 0);
        v33 = v7;
        v38 = v28;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v28,
          byte_14000FDF4,
          v24,
          v25,
          (__int64)&RegHandle,
          (__int64)&v39,
          (__int64)&v38,
          (__int64)&v37,
          (const unsigned __int16 **)&ProviderId,
          (__int64)&v36,
          (__int64)&v35,
          (const unsigned __int16 **)&v40,
          (__int64)&v30,
          (__int64)&v31,
          (__int64)&ImageTuple,
          (__int64)&v33);
      }
      v29 = qword_140015218;
      qword_140015218 = 0LL;
      dword_1400151F8 = 0;
      EventUnregister(v29);
    }
    if ( v7 && v6 )
      Sleep(0x3E8u);
    *((_DWORD *)v9 + 3) = 0;
  }
LABEL_38:
  ReleaseSRWLockExclusive(&g_MicrosoftTelemetryAssertLock);
}
