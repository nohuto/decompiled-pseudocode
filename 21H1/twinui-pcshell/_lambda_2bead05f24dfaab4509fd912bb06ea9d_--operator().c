/*
 * XREFs of _lambda_2bead05f24dfaab4509fd912bb06ea9d_::operator() @ 0x1801A7424
 * Callers:
 *     ?UpdateFocusOnDismiss@CPeopleBarFlyoutExperienceManager@@AEAAJXZ @ 0x1801A9EF8 (-UpdateFocusOnDismiss@CPeopleBarFlyoutExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007AEDC (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_2bead05f24dfaab4509fd912bb06ea9d_::operator()(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, SID *, GUID *, __int64 *); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  HMONITOR v9; // r14
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, HMONITOR, GUID *, GUID *, int *); // rdi
  int v12; // eax
  __int64 v13; // rdx
  int v15[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+38h] [rbp-28h] BYREF
  RECT rc; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v16 = 0LL;
  v2 = *(_QWORD *)(*a1 + 328LL);
  v3 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v16);
  v4 = v3(v2, &SID_IImmersiveMonitorService, &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2, &v16);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v8 = *a1;
    rc.left = (int)*(float *)(*a1 + 320LL);
    rc.top = (int)*(float *)(v8 + 324);
    rc.right = (int)*(float *)(v8 + 320);
    rc.bottom = (int)*(float *)(v8 + 324);
    v9 = MonitorFromRect(&rc, 0);
    if ( !v9 )
    {
      v5 = -2147418113;
      v6 = 2147549183LL;
      v7 = 769LL;
      goto LABEL_5;
    }
    *(_QWORD *)v15 = 0LL;
    v10 = v16;
    v11 = *(__int64 (__fastcall **)(__int64, HMONITOR, GUID *, GUID *, int *))(*(_QWORD *)v16 + 72LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v15);
    v12 = v11(v10, v9, &GUID_88ed940d_d632_4b84_9529_a3110b5af527, &GUID_88ed940d_d632_4b84_9529_a3110b5af527, v15);
    v5 = v12;
    if ( v12 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v15 + 72LL))(*(_QWORD *)v15, a1[1]);
      v5 = v12;
      if ( v12 >= 0 )
      {
        v5 = 0;
        goto LABEL_12;
      }
      v13 = 773LL;
    }
    else
    {
      v13 = 772LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)(unsigned int)v12);
LABEL_12:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v15);
    goto LABEL_13;
  }
  v6 = (unsigned int)v4;
  v7 = 763LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
    (const char *)v6);
LABEL_13:
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v16);
  return v5;
}
