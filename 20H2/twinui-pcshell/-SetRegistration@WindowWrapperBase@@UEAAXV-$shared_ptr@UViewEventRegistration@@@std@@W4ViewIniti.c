/*
 * XREFs of ?SetRegistration@WindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x18004C290
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetExperienceIdPersistenceIndex@@YA_KPEBG@Z @ 0x18004BDCC (-GetExperienceIdPersistenceIndex@@YA_KPEBG@Z.c)
 *     ?SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z @ 0x18004BEC4 (-SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004D370 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ @ 0x18004F4A8 (-PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x1802DB8B8 (-VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 */

void __fastcall WindowWrapperBase::SetRegistration(__int64 a1, __int64 *a2, int a3)
{
  char v6; // bl
  __int64 v7; // rax
  __int64 v8; // rdx
  std::_Ref_count_base *v9; // rcx
  char v10; // si
  int v11; // edx
  __int16 v12; // cx
  const WCHAR *StringRawBuffer; // rax
  unsigned __int64 ExperienceIdPersistenceIndex; // rax
  std::_Ref_count_base *v15; // rcx
  _QWORD *v16; // rax
  int v17; // eax
  int v18; // esi
  int v19; // ebx
  int v20; // eax
  _QWORD *v21; // rax
  int v22; // eax
  int v23; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v25; // [rsp+50h] [rbp+8h] BYREF
  __int64 v26; // [rsp+58h] [rbp+10h] BYREF
  __int64 v27; // [rsp+68h] [rbp+20h] BYREF

  v6 = 0;
  v25 = 0;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 272) + 216LL))(*(_QWORD *)(a1 + 272));
  v7 = a2[1];
  if ( v7 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v7 + 8), 1u);
    v7 = a2[1];
  }
  v8 = *a2;
  *(_QWORD *)(a1 + 328) = *a2;
  v9 = *(std::_Ref_count_base **)(a1 + 336);
  *(_QWORD *)(a1 + 336) = v7;
  if ( v9 )
  {
    std::_Ref_count_base::_Decref(v9);
    v8 = *(_QWORD *)(a1 + 328);
  }
  *(_DWORD *)(a1 + 348) = *(_DWORD *)(v8 + 16);
  if ( *(_QWORD *)(a1 + 88) )
  {
    v25 = 0;
    if ( a3 != 1 )
      goto LABEL_7;
    v16 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 272) + 144LL))(
                      *(_QWORD *)(a1 + 272),
                      &v26);
    v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)*v16 + 64LL))(*v16, *(_QWORD *)(a1 + 88), &v25);
    v18 = v17;
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x747,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v17,
        v23);
    v6 = 1;
    if ( v18 >= 0 && v25 )
      v10 = 1;
    else
LABEL_7:
      v10 = 0;
    if ( (v6 & 1) != 0 )
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v26);
    if ( v10 )
    {
      v19 = *(_DWORD *)(a1 + 476);
      v20 = v19;
      if ( v25 != *(_DWORD *)(a1 + 472) )
      {
        *(_DWORD *)(a1 + 472) = v25;
        WindowWrapperBase::PushDesiredNavigationLevelToDerivedClass((WindowWrapperBase *)(a1 - 16));
        v20 = *(_DWORD *)(a1 + 476);
      }
      if ( v19 == v20 )
      {
        v21 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 272) + 144LL))(
                          *(_QWORD *)(a1 + 272),
                          &v27);
        v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v21 + 56LL))(
                *v21,
                *(unsigned int *)(a1 + 344),
                *(unsigned int *)(a1 + 476));
        if ( v22 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x75C,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
            (const char *)(unsigned int)v22,
            v23);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v27);
      }
      if ( (unsigned int)(v25 - 4) <= 1 )
      {
        WindowReadyState::VisibilityChanged(a1 + 352, 0LL, 1LL);
        WindowReadyState::VisibilityChanged(a1 + 352, 1LL, 1LL);
      }
    }
  }
  v11 = *(_DWORD *)(a1 + 348);
  v12 = 4;
  if ( (v11 & 4) == 0 )
  {
    if ( (unsigned int)(*(_DWORD *)(a1 + 472) - 4) <= 1 )
      v12 = 8;
    *(_WORD *)(a1 + 244) &= 0xFFF1u;
    *(_WORD *)(a1 + 244) |= v12 | 1;
  }
  if ( (v11 & 8) == 0 )
  {
    *(_WORD *)(a1 + 244) &= ~0x10u;
    *(_WORD *)(a1 + 244) |= 0x21u;
  }
  if ( WindowsIsStringEmpty(**(HSTRING **)(a1 + 328)) )
  {
    if ( !WindowsIsStringEmpty(*(HSTRING *)(*(_QWORD *)(a1 + 328) + 8LL)) )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(a1 + 328) + 8LL), 0LL);
      ExperienceIdPersistenceIndex = GetExperienceIdPersistenceIndex(StringRawBuffer);
      if ( ExperienceIdPersistenceIndex )
        LightweightPropertySet::SetProperty(
          (LightweightPropertySet *)(a1 + 192),
          L"ExperienceId",
          ExperienceIdPersistenceIndex,
          (HWND)*(int *)(a1 + 288));
    }
  }
  v15 = (std::_Ref_count_base *)a2[1];
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
}
