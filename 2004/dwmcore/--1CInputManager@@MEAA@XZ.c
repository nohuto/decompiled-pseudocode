/*
 * XREFs of ??1CInputManager@@MEAA@XZ @ 0x180220AB8
 * Callers:
 *     ??_ECGlobalInputManager@@UEAAPEAXI@Z @ 0x1802205C0 (--_ECGlobalInputManager@@UEAAPEAXI@Z.c)
 *     ??_GCInputManager@@MEAAPEAXI@Z @ 0x180220BE0 (--_GCInputManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x1800DB620 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?Stop@CMit@@QEAAXXZ @ 0x18023168C (-Stop@CMit@@QEAAXXZ.c)
 */

void __fastcall CInputManager::~CInputManager(CInputManager *this)
{
  CMit *v2; // rcx
  void (__fastcall ***v3)(_QWORD, __int64); // rcx
  void *v4; // rcx
  void *v5; // rcx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rcx

  *(_QWORD *)this = &CInputManager::`vftable';
  v2 = (CMit *)*((_QWORD *)this + 3);
  if ( v2 )
  {
    CMit::Stop(v2);
    v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 3);
    if ( v3 )
      (**v3)(v3, 1LL);
  }
  if ( *((_QWORD *)this + 9) )
    (*(void (__fastcall **)(_QWORD, const wchar_t *, _QWORD))(**((_QWORD **)this + 5) + 48LL))(
      *((_QWORD *)this + 5),
      L"EdgyNotificationEndpoint",
      0LL);
  v4 = (void *)*((_QWORD *)this + 34);
  CInputManager::s_pInputManager = 0LL;
  operator delete(v4);
  operator delete(*((void **)this + 30));
  v5 = (void *)*((_QWORD *)this + 25);
  if ( v5 )
  {
    std::_Deallocate<16,0>(v5, (*((_QWORD *)this + 27) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
    *((_QWORD *)this + 27) = 0LL;
  }
  operator delete(*((void **)this + 17));
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)this + 8,
    0LL,
    v6);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)this + 6,
    0LL,
    v7);
  v8 = *((_QWORD *)this + 5);
  if ( v8 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)this + 4);
  if ( v9 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
