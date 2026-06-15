/*
 * XREFs of asm_AudioServerInitializeStream @ 0x1800F1940
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800085C0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000F660 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18000F900 (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 *     ??3@YAXPEAX@Z @ 0x180033A40 (--3@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@AudioSrvTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x180054398 (-Provider@AudioSrvTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     _tlgKeywordOn @ 0x1800B6E6C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800BD8EC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x1800C4EC8 (--1TraceLoggingThreadActivityIdSetter@@QEAA@XZ.c)
 *     ??0TraceLoggingThreadActivityIdSetter@@QEAA@AEBU_GUID@@@Z @ 0x1800DA84C (--0TraceLoggingThreadActivityIdSetter@@QEAA@AEBU_GUID@@@Z.c)
 */

__int64 __fastcall asm_AudioServerInitializeStream(
        void *a1,
        struct IProcessSubmixProxy **a2,
        int a3,
        const struct tWAVEFORMATEX *a4,
        struct _GUID *a5,
        void **a6)
{
  __int64 v10; // rcx
  struct _TP_TIMER *v11; // rax
  __int64 v12; // r8
  __int64 v13; // rax
  void *v14; // rsi
  __int64 v15; // rcx
  const struct _tlgProvider_t *v16; // rax
  __int64 v17; // rbx
  struct IProcessSubmixProxy *v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  unsigned int v22; // ebx
  int v24; // [rsp+50h] [rbp-89h] BYREF
  unsigned __int16 *v25; // [rsp+58h] [rbp-81h] BYREF
  void *v26; // [rsp+60h] [rbp-79h] BYREF
  void **v27; // [rsp+68h] [rbp-71h]
  struct _TP_TIMER *pv[7]; // [rsp+70h] [rbp-69h] BYREF
  struct _GUID v29; // [rsp+A8h] [rbp-31h] BYREF
  _BYTE v30[32]; // [rsp+B8h] [rbp-21h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+4Fh]

  v27 = a6;
  TraceLoggingThreadActivityIdSetter::TraceLoggingThreadActivityIdSetter((TraceLoggingThreadActivityIdSetter *)v30, a5);
  v11 = AudioSrvTelemetryProvider::Provider(v10);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v11, v12, (struct _TP_TIMER *)L"asm_AudioServerInitializeStream");
  v13 = (*(__int64 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)*a2 + 160LL))(*a2);
  v25 = 0LL;
  v14 = (void *)v13;
  v29 = GUID_00000000_0000_0000_0000_000000000000;
  v16 = AudioSrvTelemetryProvider::Provider(v15);
  v17 = (__int64)v16;
  if ( *(_DWORD *)v16 > 4u && tlgKeywordOn((__int64)v16, 0LL) )
  {
    v18 = *a2;
    v26 = v14;
    v24 = (*(__int64 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v18 + 104LL))(v18);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v17,
      byte_180168C79,
      v19,
      v20,
      (__int64)&v24,
      &v26);
  }
  v21 = AudioServerInitialize_Internal(
          a1,
          (const unsigned __int16 *)v14,
          AUDCLNT_SHAREMODE_SHARED,
          a3,
          a4,
          &v29,
          (struct VadServerSettings *)a5,
          &v25,
          *a2,
          v27);
  v22 = v21;
  if ( v21 >= 0 )
  {
    operator delete(v25);
    v22 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x162,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
      (const char *)(unsigned int)v21);
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter((TraceLoggingThreadActivityIdSetter *)v30);
  return v22;
}
