/*
 * XREFs of ?ReleaseMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180086B08
 * Callers:
 *     ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x180051AB4 (-EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800270B8 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x180036C90 (-GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ?SetDcompTarget@CDWMDisplay@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z @ 0x180036D34 (-SetDcompTarget@CDWMDisplay@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::ReleaseMonitorRenderTargets(CDesktopManager *this)
{
  __int64 v2; // rcx
  int AllDisplaysNoRef; // eax
  unsigned int v4; // ebx
  CDWMDisplay **v5; // rbx
  __int64 v6; // rdi
  int v7; // eax
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  int v10; // [rsp+40h] [rbp-18h]
  int v11; // [rsp+44h] [rbp-14h]
  unsigned int v12; // [rsp+48h] [rbp-10h]

  v10 = 0;
  v11 = 0;
  v2 = *((_QWORD *)this + 21);
  v12 = 0;
  v9 = 0LL;
  AllDisplaysNoRef = CDWMDisplaySet::GetAllDisplaysNoRef(v2, (__int64)&v9);
  v4 = AllDisplaysNoRef;
  if ( AllDisplaysNoRef >= 0 )
  {
    if ( v12 )
    {
      v5 = (CDWMDisplay **)v9;
      v6 = v12;
      do
      {
        CDWMDisplay::SetDcompTarget(*v5++, 0LL);
        --v6;
      }
      while ( v6 );
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 5) + 24LL) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL));
    v4 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x5CCu);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, AllDisplaysNoRef, 0x5C5u);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>(&v9);
  return v4;
}
