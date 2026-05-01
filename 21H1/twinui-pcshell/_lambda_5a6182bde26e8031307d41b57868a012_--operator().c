/*
 * XREFs of _lambda_5a6182bde26e8031307d41b57868a012_::operator() @ 0x18026067C
 * Callers:
 *     _lambda_221251db4cf3622556bc46ff7d89c93b_::operator() @ 0x18026050C (_lambda_221251db4cf3622556bc46ff7d89c93b_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJU_GUID@@PEAPEAUIInspectable@@@Z1@Z @ 0x18006E3A0 (--$SetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPro.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008887C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAU_GUID@@@Z1@Z @ 0x180141CB4 (--$GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPro.c)
 */

__int64 __fastcall lambda_5a6182bde26e8031307d41b57868a012_::operator()(
        Windows::Internal::ShellHelpers::PropertySetHelper **a1)
{
  Windows::Internal::ShellHelpers::PropertySetHelper *v2; // rax
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, void *, GUID *, __int128 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // rax
  Windows::Internal::ShellHelpers::PropertySetHelper *v14; // rcx
  int v15; // eax
  _BYTE v16[16]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v17; // [rsp+40h] [rbp-30h] BYREF
  __int128 v18; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v2 = *a1;
  if ( *((_QWORD *)*a1 + 4) )
  {
    *(_QWORD *)&v18 = 0LL;
    v3 = *((_QWORD *)v2 + 1);
    v4 = *(__int64 (__fastcall **)(__int64, void *, GUID *, __int128 *))(*(_QWORD *)v3 + 24LL);
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)&v18);
    v5 = v4(v3, &unk_18050EAD8, &GUID_d1710073_c814_4a0c_9685_00e44547418f, &v18);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x139,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabgroupingpolicy.cpp",
        (const char *)(unsigned int)v5);
LABEL_13:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v18);
      return v6;
    }
    v7 = *(_QWORD *)v18;
    *(_QWORD *)&v17 = 0LL;
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, __int128 *))(v7 + 64))(
           v18,
           *((_QWORD *)*a1 + 4),
           &GUID_f264283f_b510_4555_80ed_4c7216018854,
           &v17);
    v6 = v8;
    if ( v8 < 0 )
    {
      v9 = 316LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabgroupingpolicy.cpp",
        (const char *)(unsigned int)v8);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v17);
      goto LABEL_13;
    }
    if ( (_QWORD)v17 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)v17 + 160LL))(v17, v16);
      v6 = v8;
      if ( v8 < 0 )
      {
        v9 = 324LL;
        goto LABEL_12;
      }
      if ( !v16[0] )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v17 + 48LL))(v17, (__int64)*a1 + 40);
        v6 = v8;
        if ( v8 < 0 )
        {
          v9 = 327LL;
          goto LABEL_12;
        }
      }
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v17);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v18);
    v2 = *a1;
  }
  if ( *(_QWORD *)v2 )
  {
    AcquireSRWLockExclusive(&TabGroupingPolicy::TabGroupPolicyEvaluator::s_chooseLock);
    v18 = 0LL;
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<_GUID>(
                *a1,
                *((HSTRING *)*a1 + 12),
                v11,
                &v18) < 0 )
      goto LABEL_25;
    v13 = v18 - 0x4B4911C56E81C7D0LL;
    if ( (_QWORD)v18 == 0x4B4911C56E81C7D0LL )
      v13 = *((_QWORD *)&v18 + 1) + 0x1F10BF2D8BF9B671LL;
    if ( v13 )
    {
      *(_OWORD *)((char *)*a1 + 40) = v18;
    }
    else
    {
LABEL_25:
      v14 = *a1;
      v17 = *(_OWORD *)((char *)*a1 + 40);
      v15 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<_GUID>(v14, *((HSTRING *)v14 + 12), v12, &v17);
      v6 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x15B,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabgroupingpolicy.cpp",
          (const char *)(unsigned int)v15);
        ReleaseSRWLockExclusive(&TabGroupingPolicy::TabGroupPolicyEvaluator::s_chooseLock);
        return v6;
      }
    }
    ReleaseSRWLockExclusive(&TabGroupingPolicy::TabGroupPolicyEvaluator::s_chooseLock);
  }
  return 0LL;
}
