/*
 * XREFs of ?ReportStopActivity@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x18003637C
 * Callers:
 *     ??1CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x18002B77C (--1CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ.c)
 *     ?ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@W4EventNotificationType@2@@Z @ 0x18002FF00 (-ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEA.c)
 *     ?Stop@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180034A0C (-Stop@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflec.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456@Z @ 0x18000128C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@_W@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@_W@@@Z @ 0x180002328 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@_W@.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_tlgProvider_t@@XZ @ 0x18002B368 (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity *this,
        int a2)
{
  int *v4; // rbx
  int v5; // eax
  int *v6; // rbx
  const struct _tlgProvider_t *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // [rsp+A0h] [rbp-19h] BYREF
  int v15; // [rsp+A4h] [rbp-15h] BYREF
  __int64 v16; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v17; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v18; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v19; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v20; // [rsp+C8h] [rbp+Fh] BYREF
  __int64 v21; // [rsp+D0h] [rbp+17h] BYREF
  __int64 v22; // [rsp+D8h] [rbp+1Fh] BYREF
  __int64 v23; // [rsp+E0h] [rbp+27h] BYREF
  __int64 v24; // [rsp+E8h] [rbp+2Fh] BYREF
  __int64 v25; // [rsp+F0h] [rbp+37h] BYREF
  __int64 v26; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v27; // [rsp+130h] [rbp+77h] BYREF
  __int64 v28; // [rsp+138h] [rbp+7Fh] BYREF

  if ( a2 < 0 )
  {
    v4 = (int *)*((_QWORD *)this + 6);
    v5 = v4[19];
    if ( v5 < 0 && v5 == v4[21] )
      v6 = v4 + 20;
    else
      v6 = 0LL;
    v7 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
    if ( v6 )
    {
      if ( *(_DWORD *)v7 > 2u
        && (*((_QWORD *)v7 + 2) & 0x200000000000LL) != 0
        && (*((_QWORD *)v7 + 3) & 0x200000000000LL) == *((_QWORD *)v7 + 3) )
      {
        v8 = *((_QWORD *)this + 6);
        v19 = *((_QWORD *)v6 + 14);
        v20 = *((_QWORD *)v6 + 13);
        LODWORD(v26) = v6[24];
        v21 = *((_QWORD *)v6 + 11);
        v22 = *((_QWORD *)v6 + 10);
        LODWORD(v27) = v6[18];
        v23 = *((_QWORD *)v6 + 8);
        LODWORD(v28) = v6[6];
        v24 = *((_QWORD *)v6 + 2);
        v14 = *v6;
        v25 = *((_QWORD *)v6 + 15);
        v15 = v6[14];
        v17 = *((_QWORD *)v6 + 6);
        LODWORD(v16) = v6[1];
        v18 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
          (__int64)v7,
          (unsigned __int8 *)dword_1801794CB,
          (const GUID *)(v8 + 8),
          (__int64)v7,
          (__int64)&v18,
          (__int64)&v16,
          (const unsigned __int16 **)&v17,
          (__int64)&v15,
          (const unsigned __int16 **)&v25,
          (__int64)&v14,
          (const WCHAR **)&v24,
          (__int64)&v28,
          (const unsigned __int16 **)&v23,
          (__int64)&v27,
          (const unsigned __int16 **)&v22,
          (const WCHAR **)&v21,
          (__int64)&v26,
          (const unsigned __int16 **)&v20,
          (const WCHAR **)&v19);
      }
    }
    else
    {
      v9 = (__int64)v7;
      if ( *(_DWORD *)v7 > 2u
        && (*((_QWORD *)v7 + 2) & 0x200000000000LL) != 0
        && (*((_QWORD *)v7 + 3) & 0x200000000000LL) == *((_QWORD *)v7 + 3) )
      {
        v10 = *((_QWORD *)this + 6);
        v28 = *(_QWORD *)(v10 + 56);
        v18 = *(_QWORD *)(v10 + 48);
        CurrentThreadId = GetCurrentThreadId();
        v12 = *((_QWORD *)this + 6);
        LODWORD(v26) = CurrentThreadId;
        LODWORD(v27) = a2;
        v17 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
          v9,
          (unsigned __int8 *)dword_180179700,
          (const GUID *)(v12 + 8),
          v13,
          (__int64)&v17,
          (__int64)&v27,
          (__int64)&v26,
          (const unsigned __int16 **)&v18,
          (const WCHAR **)&v28);
      }
    }
  }
  CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::StopActivity(this);
}
