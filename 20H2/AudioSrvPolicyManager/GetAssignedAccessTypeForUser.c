/*
 * XREFs of GetAssignedAccessTypeForUser @ 0x180037338
 * Callers:
 *     GetAssignedAccessTypeForUser_0 @ 0x180037620 (GetAssignedAccessTypeForUser_0.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003AB0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAA_NXZ @ 0x180037A30 (-Initialize@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAA_NXZ.c)
 *     ?DoesTargetProfileExist@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@QEAA_NPEBG@Z @ 0x180037AE0 (-DoesTargetProfileExist@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@QEAA_NP.c)
 *     ?DoesGroupConfigExist@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@QEAA_NXZ @ 0x180037CF8 (-DoesGroupConfigExist@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@QEAA_NXZ.c)
 *     ?IsGlobalProfileConfigured@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@QEAA_NXZ @ 0x180037F08 (-IsGlobalProfileConfigured@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@QEAA.c)
 *     ??0AAManagerHelper@AssignedAccess@Internal@Windows@@QEAA@XZ @ 0x1800383AC (--0AAManagerHelper@AssignedAccess@Internal@Windows@@QEAA@XZ.c)
 *     ?GetAssignedAccessConfiguration@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEAPEAUIAssignedAccessConfiguration@234@@Z @ 0x1800384A4 (-GetAssignedAccessConfiguration@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEAPEAUIAs.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigurationHelper::FindUserInfoIf__lambda_661bc23c674c805837064d315685ee67___ @ 0x18003850C (Windows--Internal--AssignedAccess--AssignedAccessConfigurationHelper--FindUserInfoIf__lambda_661.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetAssignedAccessTypeForUser(unsigned __int16 *a1, __int64 a2, _DWORD *a3)
{
  HANDLE ProcessHeap; // rax
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper *v6; // rax
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper *v7; // rdi
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper *v8; // rbx
  HANDLE v9; // rax
  int v10; // esi
  int AssignedAccessConfiguration; // eax
  int UserInfoIf__lambda_661bc23c674c805837064d315685ee67; // eax
  __int64 v13; // rax
  __int64 *v14; // rdi
  int v15; // eax
  HANDLE v16; // rax
  struct Windows::Internal::AssignedAccess::IAssignedAccessConfiguration *v18; // [rsp+20h] [rbp-30h] BYREF
  __int64 *v19; // [rsp+28h] [rbp-28h] BYREF
  unsigned __int16 *v20; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v21[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  ProcessHeap = GetProcessHeap();
  v6 = (Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper *)HeapAlloc(ProcessHeap, 0, 0x20uLL);
  v7 = v6;
  if ( v6 )
  {
    *((_QWORD *)v6 + 3) = 0LL;
    *(_QWORD *)v6 = 0LL;
    *((_QWORD *)v6 + 1) = 0LL;
    *((_QWORD *)v6 + 2) = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  v8 = v7;
  if ( !v7 || !Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::Initialize(v7) )
  {
    v8 = 0LL;
    if ( !v7 )
    {
LABEL_36:
      v10 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2B,
        (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\assignedaccessconfig.cpp",
        (const char *)0x8000FFFFLL);
      goto LABEL_37;
    }
    if ( *(_QWORD *)v7 )
    {
      CoTaskMemFree(*(LPVOID *)v7);
      *(_QWORD *)v7 = 0LL;
    }
    *((_QWORD *)v7 + 1) = 0LL;
    *((_QWORD *)v7 + 2) = 0LL;
    v9 = GetProcessHeap();
    HeapFree(v9, 0, v7);
    v7 = 0LL;
  }
  if ( !v7 )
    goto LABEL_36;
  if ( !Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::DoesTargetProfileExist(v8, a1)
    && !Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::DoesGroupConfigExist(v8)
    && !Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::IsGlobalProfileConfigured(v8) )
  {
    *a3 = 0;
    v10 = 0;
    goto LABEL_37;
  }
  Windows::Internal::AssignedAccess::AAManagerHelper::AAManagerHelper((Windows::Internal::AssignedAccess::AAManagerHelper *)v21);
  *a3 = 0;
  v20 = a1;
  v18 = 0LL;
  AssignedAccessConfiguration = Windows::Internal::AssignedAccess::AAManagerHelper::GetAssignedAccessConfiguration(
                                  (Windows::Internal::AssignedAccess::AAManagerHelper *)v21,
                                  &v18);
  v10 = AssignedAccessConfiguration;
  if ( AssignedAccessConfiguration < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBF,
      (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\aamanagerhelper.cpp",
      (const char *)(unsigned int)AssignedAccessConfiguration);
    goto LABEL_17;
  }
  v19 = 0LL;
  UserInfoIf__lambda_661bc23c674c805837064d315685ee67 = Windows::Internal::AssignedAccess::AssignedAccessConfigurationHelper::FindUserInfoIf__lambda_661bc23c674c805837064d315685ee67___(
                                                          &v20,
                                                          v18,
                                                          &v19);
  v10 = UserInfoIf__lambda_661bc23c674c805837064d315685ee67;
  if ( UserInfoIf__lambda_661bc23c674c805837064d315685ee67 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCB,
      (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\aamanagerhelper.cpp",
      (const char *)(unsigned int)UserInfoIf__lambda_661bc23c674c805837064d315685ee67);
    if ( !v19 )
      goto LABEL_17;
    v13 = *v19;
LABEL_22:
    (*(void (**)(void))(v13 + 16))();
LABEL_17:
    if ( v18 )
      (*(void (__fastcall **)(struct Windows::Internal::AssignedAccess::IAssignedAccessConfiguration *))(*(_QWORD *)v18 + 16LL))(v18);
    goto LABEL_34;
  }
  v14 = v19;
  if ( !v19 )
  {
    if ( v18 )
      (*(void (__fastcall **)(struct Windows::Internal::AssignedAccess::IAssignedAccessConfiguration *))(*(_QWORD *)v18 + 16LL))(v18);
    goto LABEL_26;
  }
  v15 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *))(*v19 + 80))(v19, a3);
  v10 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCE,
      (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\aamanagerhelper.cpp",
      (const char *)(unsigned int)v15);
    v13 = *v14;
    goto LABEL_22;
  }
  (*(void (__fastcall **)(__int64 *))(*v14 + 16))(v14);
  if ( v18 )
    (*(void (__fastcall **)(struct Windows::Internal::AssignedAccess::IAssignedAccessConfiguration *))(*(_QWORD *)v18 + 16LL))(v18);
  v10 = 0;
LABEL_34:
  if ( v10 >= 0 )
  {
LABEL_26:
    v10 = 0;
    goto LABEL_27;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x33,
    (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\assignedaccessconfig.cpp",
    (const char *)(unsigned int)v10);
LABEL_27:
  if ( v21[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v21[0] + 16LL))(v21[0]);
LABEL_37:
  if ( v8 )
  {
    if ( *(_QWORD *)v8 )
    {
      CoTaskMemFree(*(LPVOID *)v8);
      *(_QWORD *)v8 = 0LL;
    }
    *((_QWORD *)v8 + 1) = 0LL;
    *((_QWORD *)v8 + 2) = 0LL;
    v16 = GetProcessHeap();
    HeapFree(v16, 0, v8);
  }
  return (unsigned int)v10;
}
