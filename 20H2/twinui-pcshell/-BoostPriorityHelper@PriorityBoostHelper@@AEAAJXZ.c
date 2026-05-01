/*
 * XREFs of ?BoostPriorityHelper@PriorityBoostHelper@@AEAAJXZ @ 0x180052D4C
 * Callers:
 *     ?BoostPriority@PriorityBoostHelper@@UEAAJXZ @ 0x180053330 (-BoostPriority@PriorityBoostHelper@@UEAAJXZ.c)
 *     ?OnViewCreated@PriorityBoostHelper@@QEAAJXZ @ 0x1801F90C0 (-OnViewCreated@PriorityBoostHelper@@QEAAJXZ.c)
 * Callees:
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180016480 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     ??$OnPriorityBoostProcessed@AEAJAEAI@ExperienceHostLoggingTelemetry@@SAXAEAJAEAI@Z @ 0x180052A94 (--$OnPriorityBoostProcessed@AEAJAEAI@ExperienceHostLoggingTelemetry@@SAXAEAJAEAI@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PriorityBoostHelper::BoostPriorityHelper(PriorityBoostHelper *this)
{
  int *v1; // rdi
  __int64 (__fastcall ****v2)(_QWORD, GUID *, __int64); // rcx
  int v3; // eax
  int v4; // ebx
  int v5; // eax
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v1 = (int *)((char *)this + 108);
  if ( *((_DWORD *)this + 27) )
  {
    v10 = 0;
    v2 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64))(*((_QWORD *)this + 8) + 24LL);
    if ( *v2 )
    {
      v11 = 0LL;
      v3 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
             v2,
             (__int64)&v11);
      v4 = v3;
      if ( v3 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x52,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
          (const char *)(unsigned int)v3,
          v8);
      v10 = v4;
      if ( v4 >= 0 )
      {
        v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 48LL))(v11);
        v4 = v5;
        if ( v5 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x55,
            (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
            (const char *)(unsigned int)v5,
            v8);
        v10 = v4;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    }
    else
    {
      v4 = 0;
    }
    ExperienceHostLoggingTelemetry::OnPriorityBoostProcessed<long &,unsigned int &>(&v10, v1);
    if ( v4 >= 0 )
      return 0LL;
    v7 = 90LL;
  }
  else
  {
    v4 = -2147024875;
    v7 = 76LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
    (const char *)(unsigned int)v4,
    v8);
  return (unsigned int)v4;
}
