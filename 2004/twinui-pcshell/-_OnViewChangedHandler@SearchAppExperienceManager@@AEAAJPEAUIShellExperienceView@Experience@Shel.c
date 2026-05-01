/*
 * XREFs of ?_OnViewChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x180051D90
 * Callers:
 *     <none>
 * Callees:
 *     ?_ApplyPriorityBoostIfNeeded@SearchAppExperienceManager@@AEAAJXZ @ 0x180051E48 (-_ApplyPriorityBoostIfNeeded@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_ApplyPriorityUnboostIfNeeded@SearchAppExperienceManager@@AEAAJXZ @ 0x180051EF8 (-_ApplyPriorityUnboostIfNeeded@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_OnViewCreated@SearchAppExperienceManager@@AEAAJXZ @ 0x1801F7284 (-_OnViewCreated@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_OnViewDestroyed@SearchAppExperienceManager@@AEAAJXZ @ 0x1801F7370 (-_OnViewDestroyed@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x180476F0C (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 */

int __fastcall SearchAppExperienceManager::_OnViewChangedHandler(
        ExperienceManagerUtils **this,
        struct Windows::Internal::Shell::Experience::IShellExperienceView *a2,
        struct Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *a3)
{
  int v5; // edi
  int v7; // eax
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r9
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v16; // [rsp+40h] [rbp+18h] BYREF
  int v17; // [rsp+48h] [rbp+20h] BYREF

  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *, int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v17);
  if ( v5 < 0 )
  {
    v10 = 899LL;
    goto LABEL_17;
  }
  switch ( v17 )
  {
    case 0:
      v12 = *(_QWORD *)a3;
      v16 = 0;
      v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *, int *))(v12 + 56))(
             a3,
             &v16);
      if ( v5 >= 0 )
      {
        v8 = ExperienceManagerUtils::PostToUIThread(this[51], (struct IUnknown *)this, (void *)v16, v13);
        v9 = v8;
        if ( v8 < 0 )
        {
          v11 = 937LL;
          goto LABEL_24;
        }
        return 0;
      }
      v10 = 905LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
        (const char *)(unsigned int)v5,
        v14);
      return v5;
    case 1:
      ++*((_DWORD *)this + 135);
      v8 = SearchAppExperienceManager::_ApplyPriorityBoostIfNeeded((SearchAppExperienceManager *)this);
      v9 = v8;
      if ( v8 < 0 )
      {
        v11 = 944LL;
        goto LABEL_24;
      }
      return 0;
    case 2:
      v7 = *((_DWORD *)this + 135);
      if ( v7 )
        *((_DWORD *)this + 135) = v7 - 1;
      v8 = SearchAppExperienceManager::_ApplyPriorityUnboostIfNeeded((SearchAppExperienceManager *)this);
      v9 = v8;
      if ( v8 >= 0 )
        return 0;
      v11 = 956LL;
LABEL_24:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
        (const char *)(unsigned int)v8,
        v14);
      return v9;
    case 5:
      return SearchAppExperienceManager::_OnViewCreated((SearchAppExperienceManager *)this);
    case 6:
      return SearchAppExperienceManager::_OnViewDestroyed((SearchAppExperienceManager *)this);
  }
  return 0;
}
