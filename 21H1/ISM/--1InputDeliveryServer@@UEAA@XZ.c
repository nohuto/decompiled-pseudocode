/*
 * XREFs of ??1InputDeliveryServer@@UEAA@XZ @ 0x180102FE8
 * Callers:
 *     ??_GInputDeliveryServer@@UEAAPEAXI@Z @ 0x1801030E0 (--_GInputDeliveryServer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18000DCA0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180036A04 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x180036A3C (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180037590 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall InputDeliveryServer::~InputDeliveryServer(InputDeliveryServer *this, __int64 a2)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // r8
  __int64 *v5; // rsi
  __int64 *v6; // rbp
  __int64 *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  const char *v11; // r9
  Microsoft::BamoImpl::BamoImplObject *v12; // rcx

  v3 = *((_QWORD *)this + 30);
  if ( v3 )
  {
    *((_QWORD *)this + 30) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)this + 168, a2);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)this + 14,
    0LL,
    v4);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 13);
  v5 = (__int64 *)*((_QWORD *)this + 10);
  if ( v5 )
  {
    v6 = (__int64 *)*((_QWORD *)this + 11);
    v7 = (__int64 *)*((_QWORD *)this + 10);
    if ( v5 != v6 )
    {
      do
      {
        v8 = *v7;
        if ( *v7 )
        {
          *v7 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
        }
        ++v7;
      }
      while ( v7 != v6 );
    }
    std::_Deallocate<16,0>(
      v5,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 12) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
  }
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 7);
  v12 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 4);
  if ( v12 )
    Microsoft::BamoImpl::BamoImplObject::Release(v12, v9, v10, v11);
}
