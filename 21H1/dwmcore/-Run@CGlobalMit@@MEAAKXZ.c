/*
 * XREFs of ?Run@CGlobalMit@@MEAAKXZ @ 0x1800CD740
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180037B1C (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180088B50 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x1800CD8E4 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?InitializeCoreMessagingIocp@CGlobalMit@@CAXPEAX@Z @ 0x1800CD934 (-InitializeCoreMessagingIocp@CGlobalMit@@CAXPEAX@Z.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x1800CD994 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGlobalMit::Run(CGlobalMit *this)
{
  _QWORD *v2; // rax
  void **v3; // rcx
  int SystemInputHost; // eax
  unsigned int v5; // ebx
  wil::details *updated; // rax
  CMmcssTask *v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // r9d
  void *v11; // rcx
  __int64 result; // rax
  unsigned int v13; // [rsp+20h] [rbp-18h]
  void *v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0LL;
  GetCurrentThreadId();
  v2 = operator new(8uLL);
  if ( v2 )
  {
    v3 = &CInputProxy::`vftable';
    *v2 = &CInputProxy::`vftable';
  }
  else
  {
    v2 = 0LL;
  }
  *((_QWORD *)this + 5) = v2;
  if ( !v2 )
  {
    v5 = -2147024882;
    v13 = 133;
LABEL_21:
    v10 = v5;
LABEL_28:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v3, &dword_1803072D8, 2u, v10, v13, 0LL);
    goto LABEL_29;
  }
  SystemInputHost = CoreUICreateEx(1LL, &CMit::s_pMessageSession);
  v5 = SystemInputHost;
  if ( SystemInputHost < 0 )
  {
    v13 = 139;
    goto LABEL_27;
  }
  SystemInputHost = (*(__int64 (__fastcall **)(struct IMessageSession *, _QWORD, __int64 (__fastcall *)(void *, unsigned int, void *), CGlobalMit *))(*(_QWORD *)CMit::s_pMessageSession + 256LL))(
                      CMit::s_pMessageSession,
                      *((_QWORD *)this + 3),
                      CMit::OnResetEvent,
                      this);
  v5 = SystemInputHost;
  if ( SystemInputHost < 0 )
  {
    v13 = 141;
    goto LABEL_27;
  }
  SystemInputHost = (*(__int64 (__fastcall **)(struct IMessageSession *, _QWORD, __int64 (__fastcall *)(void *, unsigned int, void *), CGlobalMit *))(*(_QWORD *)CMit::s_pMessageSession + 256LL))(
                      CMit::s_pMessageSession,
                      *((_QWORD *)this + 17),
                      CMit::OnResetEvent,
                      this);
  v5 = SystemInputHost;
  if ( SystemInputHost < 0 )
  {
    v13 = 142;
    goto LABEL_27;
  }
  SystemInputHost = CreateSystemInputHost(*((_QWORD *)this + 5), &CMit::s_pSystemInputHost);
  v5 = SystemInputHost;
  if ( SystemInputHost < 0 )
  {
    v13 = 146;
LABEL_27:
    v10 = SystemInputHost;
    goto LABEL_28;
  }
  updated = (wil::details *)MITGetCursorUpdateHandle();
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    (wil::details **)this + 18,
    updated);
  if ( !(unsigned int)NtMITActivateInputProcessing(CGlobalMit::s_HitTestRequest, &v14) )
  {
    v5 = -2147467259;
    v13 = 153;
    goto LABEL_21;
  }
  v5 = 0;
  CGlobalMit::InitializeCoreMessagingIocp(v14);
  while ( !*((_BYTE *)this + 32) )
  {
    ResetEvent(*((HANDLE *)this + 3));
    if ( *((_BYTE *)this + 32) )
      break;
    v7 = (CGlobalMit *)((char *)this + 48);
    if ( *(_BYTE *)(*((_QWORD *)this + 1) + 264LL) )
    {
      v8 = CMmcssTask::Apply(v7, 1);
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xEFu, 0LL);
    }
    else
    {
      CMmcssTask::Revert(v7);
    }
    (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)CMit::s_pMessageSession + 216LL))(CMit::s_pMessageSession);
  }
  NtMITDeactivateInputProcessing();
LABEL_29:
  if ( CMit::s_pSystemInputHost )
  {
    (*(void (__fastcall **)(struct ISystemInputHost *))(*(_QWORD *)CMit::s_pSystemInputHost + 16LL))(CMit::s_pSystemInputHost);
    CMit::s_pSystemInputHost = 0LL;
  }
  v11 = (void *)*((_QWORD *)this + 5);
  if ( v11 )
  {
    operator delete(v11);
    *((_QWORD *)this + 5) = 0LL;
  }
  if ( CMit::s_pMessageCallSendHost )
  {
    (*(void (__fastcall **)(struct IMessageCallSendHost *))(*(_QWORD *)CMit::s_pMessageCallSendHost + 16LL))(CMit::s_pMessageCallSendHost);
    CMit::s_pMessageCallSendHost = 0LL;
  }
  if ( CMit::s_pMessageSession )
  {
    (*(void (__fastcall **)(struct IMessageSession *, _QWORD))(*(_QWORD *)CMit::s_pMessageSession + 264LL))(
      CMit::s_pMessageSession,
      *((_QWORD *)this + 17));
    (*(void (__fastcall **)(struct IMessageSession *, _QWORD))(*(_QWORD *)CMit::s_pMessageSession + 264LL))(
      CMit::s_pMessageSession,
      *((_QWORD *)this + 3));
    (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)CMit::s_pMessageSession + 16LL))(CMit::s_pMessageSession);
    CMit::s_pMessageSession = 0LL;
  }
  result = (unsigned __int16)v5;
  if ( (v5 & 0x1FFF0000) != 0x70000 )
    return v5;
  return result;
}
