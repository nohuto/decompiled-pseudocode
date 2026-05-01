/*
 * XREFs of ?WorkAreaChanged@CortanaStoreAppExperienceManager@@EEAAJKPEBUtagRECT@@@Z @ 0x1801F56D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckThread@CortanaStoreAppExperienceManager@@AEAAXXZ @ 0x1801F2D04 (-CheckThread@CortanaStoreAppExperienceManager@@AEAAXXZ.c)
 *     ?PositionCortanaWindow@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801F48C0 (-PositionCortanaWindow@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CortanaStoreAppExperienceManager::WorkAreaChanged(
        CortanaStoreAppExperienceManager *this,
        __int64 a2,
        const struct tagRECT *a3)
{
  CortanaStoreAppExperienceManager *v3; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (CortanaStoreAppExperienceManager *)((char *)this - 128);
  CortanaStoreAppExperienceManager::CheckThread((CortanaStoreAppExperienceManager *)((char *)this - 128));
  v4 = CortanaStoreAppExperienceManager::PositionCortanaWindow(v3);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x54E,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
