/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x180217120
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x1802170C8 (MicrosoftTelemetryAssertTriggeredArgs.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1802170F8 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x1800DAE3C (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     EventUnregister_0 @ 0x1800E856E (EventUnregister_0.c)
 *     EventRegister_0 @ 0x1800E857A (EventRegister_0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapSz@D@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapSz@D@@3333@Z @ 0x180216D84 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapSz@D@@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapSz@D@@U1@U1@U2@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapSz@D@@3343333@Z @ 0x180216E98 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapSz@D@@U1@U1@U2@U1@U1@U1@U1@@-$_tlgWriteTem.c)
 *     GetImageTuple @ 0x18021701C (GetImageTuple.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(
        unsigned __int64 a1,
        int a2,
        const unsigned __int16 *a3,
        unsigned int a4,
        int a5)
{
  int v6; // esi
  int v7; // r15d
  int v9; // r13d
  struct MicrosoftTelemetryAssertTriggeredNode *v10; // rbx
  struct MicrosoftTelemetryAssertTriggeredNode *v11; // rax
  DWORD TickCount; // eax
  struct MicrosoftTelemetryAssertTriggeredNode *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  DWORD v16; // r14d
  char *v17; // rax
  DWORD v18; // edi
  CHAR *v19; // rax
  CHAR v20; // dl
  unsigned int v21; // r13d
  __int64 v22; // r15
  CHAR *v23; // r14
  unsigned int v24; // ecx
  REGHANDLE v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  const char *v28; // r10
  __int64 v29; // rcx
  __int64 v30; // r8
  const char *v31; // r9
  REGHANDLE v32; // rcx
  int v33; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v34; // [rsp+8Ch] [rbp-7Ch] BYREF
  DWORD ImageTuple; // [rsp+90h] [rbp-78h] BYREF
  int v36; // [rsp+94h] [rbp-74h] BYREF
  unsigned int v37; // [rsp+98h] [rbp-70h] BYREF
  int v38; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v39; // [rsp+A0h] [rbp-68h] BYREF
  int v40; // [rsp+A4h] [rbp-64h] BYREF
  int v41; // [rsp+A8h] [rbp-60h] BYREF
  ULONGLONG RegHandle; // [rsp+B0h] [rbp-58h] BYREF
  const unsigned __int16 *v43; // [rsp+B8h] [rbp-50h] BYREF
  GUID ProviderId; // [rsp+C0h] [rbp-48h] BYREF
  CHAR v45[272]; // [rsp+D8h] [rbp-30h] BYREF

  v37 = a4;
  v38 = a2;
  v6 = 0;
  v7 = 0;
  v9 = a2;
  AcquireSRWLockExclusive(&g_MicrosoftTelemetryAssertLock);
  v10 = g_MicrosoftTelemetryAssertsTriggeredList;
  if ( !g_MicrosoftTelemetryAssertsTriggeredList )
    goto LABEL_5;
  do
  {
    if ( *(_QWORD *)v10 == a1 )
      break;
    v10 = (struct MicrosoftTelemetryAssertTriggeredNode *)*((_QWORD *)v10 + 3);
  }
  while ( v10 );
  if ( !v10 )
  {
LABEL_5:
    v11 = (struct MicrosoftTelemetryAssertTriggeredNode *)LocalAlloc(0x40u, 0x20uLL);
    v10 = v11;
    if ( !v11 )
      goto LABEL_50;
    *(_QWORD *)v11 = a1;
    TickCount = GetTickCount();
    v13 = g_MicrosoftTelemetryAssertsTriggeredList;
    *((_DWORD *)v10 + 2) = TickCount - 60001;
    *(_QWORD *)((char *)v10 + 12) = 0LL;
    *((_QWORD *)v10 + 3) = v13;
    g_MicrosoftTelemetryAssertsTriggeredList = v10;
  }
  ++*((_DWORD *)v10 + 3);
  ++*((_DWORD *)v10 + 4);
  if ( GetTickCount() - *((_DWORD *)v10 + 2) > 0xEA60 )
  {
    *((_DWORD *)v10 + 2) = GetTickCount();
    ImageTuple = GetImageTuple(v14, v45, v15, &v33, &v34);
    v16 = ImageTuple;
    if ( ImageTuple
      && a1 >= (unsigned __int64)&_ImageBase
      && (v17 = (char *)&_ImageBase + v34, v17 > (char *)&_ImageBase)
      && a1 <= (unsigned __int64)v17 )
    {
      v18 = a1 - (unsigned int)&_ImageBase;
    }
    else
    {
      v18 = 0;
    }
    if ( !a3 )
    {
      v19 = v45;
      if ( !ImageTuple )
        v19 = 0LL;
      a3 = (const unsigned __int16 *)v19;
    }
    if ( *((_DWORD *)v10 + 4) == 1
      && !(unsigned int)TraceLoggingRegisterEx_EventRegister_EventSetInformation((ULONGLONG *)&dword_180345628) )
    {
      if ( dword_180345628 )
      {
        v20 = v45[0];
        v7 = 1;
        ProviderId.Data1 = 488056742;
        v6 = 1;
        *(_DWORD *)&ProviderId.Data2 = 1311216328;
        v21 = 0;
        *(_DWORD *)ProviderId.Data4 = -1961924164;
        *(_DWORD *)&ProviderId.Data4[4] = -1655403451;
        if ( v45[0] )
        {
          v22 = 0LL;
          v23 = v45;
          do
          {
            *((_BYTE *)&ProviderId.Data1 + v22) += toupper(v20);
            ++v23;
            v24 = v21 + 1;
            v20 = *v23;
            v21 = v24 < 0x10 ? v24 : 0;
            v22 = (v22 + 1) & -(__int64)(v24 < 0x10);
          }
          while ( *v23 );
          v16 = ImageTuple;
          v7 = 1;
        }
        if ( !EventRegister_0(&ProviderId, 0LL, 0LL, &RegHandle) )
        {
          if ( EventProviderEnabled(RegHandle, 0, 0LL) )
            v6 = 0;
          EventUnregister_0(RegHandle);
        }
        v9 = v38;
      }
      v25 = qword_180345648;
      dword_180345628 = 0;
      qword_180345648 = 0LL;
      EventUnregister(v25);
    }
    if ( !(unsigned int)TraceLoggingRegisterEx_EventRegister_EventSetInformation((ULONGLONG *)&dword_180345660) )
    {
      if ( v9 )
      {
        if ( (unsigned int)dword_180345660 > 5
          && (qword_180345670 & 0x400000000000LL) != 0
          && (qword_180345678 & 0x400000000000LL) == qword_180345678 )
        {
          v26 = *((unsigned int *)v10 + 4);
          v27 = *((unsigned int *)v10 + 3);
          v28 = v45;
          v36 = v7;
          ImageTuple = v6;
          if ( !v16 )
            v28 = "<unknown>";
          v43 = a3;
          v38 = v26;
          *(_QWORD *)&ProviderId.Data1 = v28;
          v41 = v18;
          v39 = v16 != 0 ? v34 : 0;
          v34 = v27;
          LODWORD(RegHandle) = 10;
          v29 = v33 & (unsigned int)-(v16 != 0);
          v33 = a5;
          v40 = v29;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v29,
            byte_1802EA1D3,
            v26,
            v27,
            (__int64)&RegHandle,
            (__int64)&v41,
            (__int64)&v40,
            (__int64)&v39,
            (const unsigned __int16 **)&ProviderId,
            (__int64)&v34,
            (__int64)&v38,
            &v43,
            (__int64)&v37,
            (__int64)&v33,
            (__int64)&ImageTuple,
            (__int64)&v36);
        }
      }
      else if ( (unsigned int)dword_180345660 > 5
             && (qword_180345670 & 0x400000000000LL) != 0
             && (qword_180345678 & 0x400000000000LL) == qword_180345678 )
      {
        v30 = *((unsigned int *)v10 + 3);
        v31 = v45;
        v40 = *((_DWORD *)v10 + 4);
        LODWORD(RegHandle) = v7;
        if ( !v16 )
          v31 = "<unknown>";
        v41 = v6;
        v39 = v30;
        *(_QWORD *)&ProviderId.Data1 = v31;
        ImageTuple = v18;
        v37 = v16 != 0 ? v34 : 0;
        v36 = v16 != 0 ? v33 : 0;
        v33 = 10;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v37,
          byte_1802EA291,
          v30,
          (__int64)v31,
          (__int64)&v33,
          (__int64)&ImageTuple,
          (__int64)&v36,
          (__int64)&v37,
          (const unsigned __int16 **)&ProviderId,
          (__int64)&v39,
          (__int64)&v40,
          (__int64)&v41,
          (__int64)&RegHandle);
      }
      v32 = qword_180345680;
      dword_180345660 = 0;
      qword_180345680 = 0LL;
      EventUnregister(v32);
    }
    if ( v7 && v6 )
      Sleep(0x3E8u);
    *((_DWORD *)v10 + 3) = 0;
  }
LABEL_50:
  ReleaseSRWLockExclusive(&g_MicrosoftTelemetryAssertLock);
}
