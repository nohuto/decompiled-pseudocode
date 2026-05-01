/*
 * XREFs of ?TryLaunchCustomShell@CustomShellManager@@UEAAJPEAH@Z @ 0x18019B790
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$ActivateInstance@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18019AC90 (--$ActivateInstance@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@wil@@.c)
 *     ?IsCurrentProcessCustomShellHost@CustomShellManager@@AEAA_NXZ @ 0x18019B4DC (-IsCurrentProcessCustomShellHost@CustomShellManager@@AEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CustomShellManager::TryLaunchCustomShell(CustomShellManager *this, int *a2)
{
  __int64 v3; // rdx
  unsigned int v4; // r8d
  const char *v5; // r9
  __int64 result; // rax
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  *a2 = 0;
  try
  {
    if ( CustomShellManager::IsCurrentProcessCustomShellHost(this) )
    {
      wil::ActivateInstance<Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>(
        (__int64)&v13,
        v3,
        v4);
      v12 = 0LL;
      v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 48LL))(v13, &v12);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          78LL,
          (__int64)"pcshell\\twinui\\customshellmanager\\lib\\customshellmanager.cpp",
          (const char *)(unsigned int)v7);
      v8 = v12;
      if ( v12 )
      {
        *a2 = 1;
        v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 48LL))(v8);
        if ( v10 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            87LL,
            (__int64)"pcshell\\twinui\\customshellmanager\\lib\\customshellmanager.cpp",
            (const char *)(unsigned int)v10);
      }
      else
      {
        v9 = RtlPublishWnfStateData(WNF_CSH_LAUNCH_EXPLORER_REQUESTED, 0LL, 0LL, 0LL) | 0x10000000;
        if ( v9 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            82LL,
            (__int64)"pcshell\\twinui\\customshellmanager\\lib\\customshellmanager.cpp",
            (const char *)(unsigned int)v9);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
      result = 0LL;
    }
    else
    {
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x5A,
                           (__int64)"pcshell\\twinui\\customshellmanager\\lib\\customshellmanager.cpp",
                           v5);
  }
  return result;
}
