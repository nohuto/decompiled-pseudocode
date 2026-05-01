/*
 * XREFs of ?ActivateAppAsync@CortanaStoreAppExperienceManager@@AEAAJ_NPEBG@Z @ 0x1801F2A08
 * Callers:
 *     ?ActivateAppWithArgumentsAsync@CortanaStoreAppExperienceManager@@UEAAJPEBG@Z @ 0x1801F2B10 (-ActivateAppWithArgumentsAsync@CortanaStoreAppExperienceManager@@UEAAJPEBG@Z.c)
 *     ?LaunchOrCloseAppAsync@CortanaStoreAppExperienceManager@@UEAAJXZ @ 0x1801F44B0 (-LaunchOrCloseAppAsync@CortanaStoreAppExperienceManager@@UEAAJXZ.c)
 *     ?PerformDelayedInitialization@CortanaStoreAppExperienceManager@@UEAAJXZ @ 0x1801F4870 (-PerformDelayedInitialization@CortanaStoreAppExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180085BB8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008C5D8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5714c418893fc4a70a6a077a7390b140___ @ 0x180096C00 (Windows--Internal--ComTaskPool--QueueTask__lambda_5714c418893fc4a70a6a077a7390b140___.c)
 *     _lambda_5714c418893fc4a70a6a077a7390b140_::__lambda_5714c418893fc4a70a6a077a7390b140_ @ 0x180096FDC (_lambda_5714c418893fc4a70a6a077a7390b140_--__lambda_5714c418893fc4a70a6a077a7390b140_.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall CortanaStoreAppExperienceManager::ActivateAppAsync(
        CortanaStoreAppExperienceManager *this,
        char a2,
        unsigned __int16 *a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v8; // rdx
  const char *v9; // r9
  unsigned int v10; // [rsp+20h] [rbp-68h]
  _BYTE v11[8]; // [rsp+28h] [rbp-60h] BYREF
  __int128 v12; // [rsp+30h] [rbp-58h]
  __int128 v13; // [rsp+40h] [rbp-48h]
  _QWORD v14[4]; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v4 = std::wstring::wstring((__int64)v14, a3);
  v11[0] = a2;
  v12 = *(_OWORD *)v4;
  v13 = *(_OWORD *)(v4 + 16);
  *(_QWORD *)(v4 + 16) = 0LL;
  *(_QWORD *)(v4 + 24) = 7LL;
  *(_WORD *)v4 = 0;
  v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_5714c418893fc4a70a6a077a7390b140___(v5, (__int64)v11);
  lambda_5714c418893fc4a70a6a077a7390b140_::__lambda_5714c418893fc4a70a6a077a7390b140_((__int64)v11);
  std::wstring::_Tidy_deallocate(v14);
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Throw_Hr(
    retaddr,
    604LL,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
  __debugbreak();
  *(_DWORD *)(v8 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(v8 + 136),
                           (void *)0x25F,
                           (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
                           v9);
  return v10;
}
