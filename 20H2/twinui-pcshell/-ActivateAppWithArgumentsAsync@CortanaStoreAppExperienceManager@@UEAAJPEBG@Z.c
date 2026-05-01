/*
 * XREFs of ?ActivateAppWithArgumentsAsync@CortanaStoreAppExperienceManager@@UEAAJPEBG@Z @ 0x1801F1F30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ActivateAppAsync@CortanaStoreAppExperienceManager@@AEAAJ_NPEBG@Z @ 0x1801F1E30 (-ActivateAppAsync@CortanaStoreAppExperienceManager@@AEAAJ_NPEBG@Z.c)
 */

__int64 __fastcall CortanaStoreAppExperienceManager::ActivateAppWithArgumentsAsync(
        CortanaStoreAppExperienceManager *this,
        unsigned __int16 *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CortanaStoreAppExperienceManager::ActivateAppAsync(this, 0, a2);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x23C,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
