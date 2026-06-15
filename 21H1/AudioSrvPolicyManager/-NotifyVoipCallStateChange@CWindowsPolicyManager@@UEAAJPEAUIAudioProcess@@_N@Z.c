/*
 * XREFs of ?NotifyVoipCallStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z @ 0x18000C750
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180001A98 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003F90 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000A1AC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180032A0C (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::NotifyVoipCallStateChange(
        CWindowsPolicyManager *this,
        struct IAudioProcess *a2,
        unsigned __int8 a3)
{
  int v4; // r15d
  unsigned __int64 v5; // rbx
  volatile signed __int32 *v6; // rdi
  _DWORD *v7; // r14
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  unsigned int v12; // esi
  __int64 v14; // [rsp+48h] [rbp-9h] BYREF
  __int64 v15; // [rsp+50h] [rbp-1h] BYREF
  _QWORD v16[2]; // [rsp+58h] [rbp+7h] BYREF
  char v17; // [rsp+68h] [rbp+17h]
  _QWORD *v18; // [rsp+90h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]
  __int64 v20; // [rsp+D0h] [rbp+7Fh] BYREF

  v4 = a3;
  if ( !g_ApplicationManager )
    return 0LL;
  v5 = ((unsigned __int64)a2 - 16) & -(__int64)(a2 != 0LL);
  v6 = (volatile signed __int32 *)(v5 + 8);
  if ( v5 )
    _InterlockedIncrement(v6);
  v7 = (_DWORD *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
  if ( *v7 > 4u )
  {
    v8 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2);
    LODWORD(v20) = v4;
    LODWORD(v14) = v8;
    v15 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 72LL))(a2);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v7,
      (unsigned __int8 *)dword_18004B1FD,
      v9,
      v10,
      (void **)&v15,
      (__int64)&v14,
      (__int64)&v20);
  }
  if ( v5 )
    _InterlockedIncrement(v6);
  v16[1] = v5;
  v16[0] = off_180043100;
  v17 = v4;
  v18 = v16;
  v11 = QueueGenericWorkItem(v16);
  v12 = v11;
  if ( v11 >= 0 )
  {
    if ( v5 && _InterlockedExchangeAdd(v6, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 32LL))(v5);
      (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2B5,
    (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
    (const char *)(unsigned int)v11);
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v6, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 32LL))(v5);
      (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
    }
  }
  return v12;
}
