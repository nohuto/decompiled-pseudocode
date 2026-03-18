/*
 * XREFs of ?SetRailsEnabled_RenderThread@CInteraction@@AEAAJ_NW4RailsAxis@@@Z @ 0x1800E83EC
 * Callers:
 *     ?ProcessUpdateRails@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_UPDATERAILS@@@Z @ 0x1800E8384 (-ProcessUpdateRails@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_UPDATERAILS.c)
 *     ?SetProperty@CInteraction@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801F2F50 (-SetProperty@CInteraction@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18006D8F4 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyUpdateRails@CManipulationManager@@QEAAJPEAVCInteraction@@_NW4RailsAxis@@@Z @ 0x1800E8484 (-NotifyUpdateRails@CManipulationManager@@QEAAJPEAVCInteraction@@_NW4RailsAxis@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1801000AC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CInteraction::SetRailsEnabled_RenderThread(__int64 a1, char a2, unsigned int a3)
{
  CComposition *v3; // rbx
  int ManipulationManager; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // ebx
  int updated; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  struct CManipulationManager *v16; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(CComposition **)(a1 + 16);
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  ManipulationManager = CComposition::GetManipulationManager(v3, &v16);
  v10 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, ManipulationManager, 0x3CEu);
  }
  else
  {
    LOBYTE(v9) = a2;
    updated = CManipulationManager::NotifyUpdateRails(v8, a1, v9, a3);
    v10 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, updated, 0x3D0u);
    }
    else
    {
      v14 = *(_QWORD *)(a1 + 272);
      if ( v14 )
      {
        LOBYTE(v12) = a2;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(v14 + 72) + 72LL))(v14 + 72, v12, a3);
      }
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  return v10;
}
