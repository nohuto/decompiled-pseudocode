/*
 * XREFs of ?OnViewShown@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801E4D90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?Uncloack@CVirtualTouchpadExperienceManager@@AEAAJAEAVTouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@@Z @ 0x1801E6138 (-Uncloack@CVirtualTouchpadExperienceManager@@AEAAJAEAVTouchpadLaunched@TouchpadControllerExperie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualTouchpadExperienceManager::OnViewShown(
        CVirtualTouchpadExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  CVirtualTouchpadExperienceManager *v3; // rbx
  char v4; // bp
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (CVirtualTouchpadExperienceManager *)((char *)this - 56);
  v4 = 1;
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 36) + 104LL))(
         *((_QWORD *)this + 36),
         *((_QWORD *)this + 4));
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 928LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_11;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 36) + 128LL))(*((_QWORD *)this + 36), 0LL);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 930LL;
    goto LABEL_9;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 36) + 112LL))(*((_QWORD *)this + 36));
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 931LL;
    goto LABEL_9;
  }
  v5 = CVirtualTouchpadExperienceManager::Uncloack(v3, (CVirtualTouchpadExperienceManager *)((char *)this + 320));
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 935LL;
    goto LABEL_9;
  }
  *((_DWORD *)this + 174) = 2;
  v4 = 0;
  v6 = 0;
LABEL_11:
  if ( v4 )
    *((_DWORD *)v3 + 188) = 0;
  return v6;
}
