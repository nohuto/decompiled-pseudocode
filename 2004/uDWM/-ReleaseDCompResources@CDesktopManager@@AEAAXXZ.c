/*
 * XREFs of ?ReleaseDCompResources@CDesktopManager@@AEAAXXZ @ 0x180086FF0
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x180085670 (--1CDesktopManager@@EEAA@XZ.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x180086C78 (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180015018 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x18002CC38 (-GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ?SetDcompTarget@CDWMDisplay@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z @ 0x18002CCDC (-SetDcompTarget@CDWMDisplay@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z.c)
 *     ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x18003FD2C (-Release@CDWMDisplaySet@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDesktopManager::ReleaseDCompResources(CDesktopManager *this, unsigned int a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  CDWMDisplay **v6; // rdi
  __int64 v7; // rsi
  CBaseObject *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  CDWMDisplaySet *v12; // rcx
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  int v14; // [rsp+30h] [rbp-18h]
  int v15; // [rsp+34h] [rbp-14h]
  unsigned int v16; // [rsp+38h] [rbp-10h]

  v14 = 0;
  v3 = *((_QWORD *)this + 9);
  v15 = 0;
  v16 = 0;
  v13 = 0LL;
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 24LL))(v3, 0LL);
    v4 = *((_QWORD *)this + 9);
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      *((_QWORD *)this + 9) = 0LL;
    }
  }
  v5 = *((_QWORD *)this + 21);
  if ( v5 && (int)CDWMDisplaySet::GetAllDisplaysNoRef(v5, (__int64)&v13) >= 0 && v16 )
  {
    v6 = (CDWMDisplay **)v13;
    v7 = v16;
    do
    {
      CDWMDisplay::SetDcompTarget(*v6++, 0LL);
      --v7;
    }
    while ( v7 );
  }
  v8 = (CBaseObject *)*((_QWORD *)this + 11);
  if ( v8 )
  {
    CBaseObject::Release(v8);
    *((_QWORD *)this + 11) = 0LL;
  }
  v9 = *((_QWORD *)this + 10);
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    *((_QWORD *)this + 10) = 0LL;
  }
  v10 = *(_QWORD *)(*((_QWORD *)this + 5) + 24LL);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10);
  v11 = *((_QWORD *)this + 20);
  if ( v11 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    *((_QWORD *)this + 20) = 0LL;
  }
  v12 = (CDWMDisplaySet *)*((_QWORD *)this + 21);
  if ( v12 )
  {
    CDWMDisplaySet::Release(v12, a2);
    *((_QWORD *)this + 21) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>(&v13);
}
