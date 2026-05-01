/*
 * XREFs of ?_Show@RetailDemoExperienceManager@@AEAAXXZ @ 0x1801EF0D4
 * Callers:
 *     ?LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z @ 0x1801ED030 (-LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z.c)
 *     ?OnViewEvent@RetailDemoExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1801ED680 (-OnViewEvent@RetailDemoExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?Show@RetailDemoExperienceManager@@UEAAJXZ @ 0x1801EDFC0 (-Show@RetailDemoExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_SetTopmost@RetailDemoExperienceManager@@AEAAXXZ @ 0x1801EEF74 (-_SetTopmost@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ?_SetWindowBand@RetailDemoExperienceManager@@AEAAXXZ @ 0x1801EF084 (-_SetWindowBand@RetailDemoExperienceManager@@AEAAXXZ.c)
 */

void __fastcall RetailDemoExperienceManager::_Show(RetailDemoExperienceManager *this)
{
  __int64 v2; // rcx
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 25);
  if ( !v2 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      179LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)0x8000FFFFLL);
    __debugbreak();
  }
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 40LL))(v2, 0LL);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      180LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  RetailDemoExperienceManager::_SetTopmost(this);
  RetailDemoExperienceManager::_SetWindowBand(this);
  if ( *((_BYTE *)this + 380) )
    RetailDemoExperienceManager::_Dock(this);
  else
    RetailDemoExperienceManager::_Float(this);
}
