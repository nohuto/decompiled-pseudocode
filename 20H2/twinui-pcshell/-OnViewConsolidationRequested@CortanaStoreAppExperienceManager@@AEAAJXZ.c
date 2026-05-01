/*
 * XREFs of ?OnViewConsolidationRequested@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801F3BAC
 * Callers:
 *     ?LaunchOrCloseAppAsync@CortanaStoreAppExperienceManager@@UEAAJXZ @ 0x1801F3970 (-LaunchOrCloseAppAsync@CortanaStoreAppExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?NotifyTrayOfCortanaVisibility@CortanaStoreAppExperienceManager@@AEAAJ_N@Z @ 0x1801F3B40 (-NotifyTrayOfCortanaVisibility@CortanaStoreAppExperienceManager@@AEAAJ_N@Z.c)
 *     ?ReportActiveExperienceAboveLock@CortanaStoreAppExperienceManager@@AEAAJ_N@Z @ 0x1801F408C (-ReportActiveExperienceAboveLock@CortanaStoreAppExperienceManager@@AEAAJ_N@Z.c)
 *     ?SetAltTabWindowVisibility@CortanaStoreAppExperienceManager@@AEAAX_N@Z @ 0x1801F42A8 (-SetAltTabWindowVisibility@CortanaStoreAppExperienceManager@@AEAAX_N@Z.c)
 */

__int64 __fastcall CortanaStoreAppExperienceManager::OnViewConsolidationRequested(
        CortanaStoreAppExperienceManager *this)
{
  __int64 v2; // rcx
  int v3; // edi
  __int64 v4; // rdx
  __int64 v6; // rcx
  CortanaStoreAppExperienceManager *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 30);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 40LL))(v2, 1LL);
    if ( v3 < 0 )
    {
      v4 = 871LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
      return (unsigned int)v3;
    }
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 30) + 88LL))(*((_QWORD *)this + 30));
    if ( v3 < 0 )
    {
      v4 = 873LL;
      goto LABEL_4;
    }
  }
  v6 = *((_QWORD *)this + 29);
  if ( v6 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 392LL))(v6, 1LL);
    if ( v3 < 0 )
    {
      v4 = 878LL;
      goto LABEL_4;
    }
  }
  CortanaStoreAppExperienceManager::SetAltTabWindowVisibility(this, 0);
  CortanaStoreAppExperienceManager::NotifyTrayOfCortanaVisibility((const RECT *)this, 0);
  if ( *((_BYTE *)this + 260) )
  {
    *((_BYTE *)this + 260) = 0;
    CortanaStoreAppExperienceManager::ReportActiveExperienceAboveLock(v7, 0);
  }
  return 0LL;
}
