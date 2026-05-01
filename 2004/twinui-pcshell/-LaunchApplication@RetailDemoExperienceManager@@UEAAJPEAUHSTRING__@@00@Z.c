/*
 * XREFs of ?LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z @ 0x1801ED030
 * Callers:
 *     <none>
 * Callees:
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x180049AA0 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800684D8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180085BB8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008C5D8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x180140B7C (-Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ?_Close@RetailDemoExperienceManager@@AEAAXXZ @ 0x1801EE640 (-_Close@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ?_ParseExperienceArguments@RetailDemoExperienceManager@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801EE920 (-_ParseExperienceArguments@RetailDemoExperienceManager@@AEAAXAEBV-$basic_string@GU-$char_traits@.c)
 *     ?_Show@RetailDemoExperienceManager@@AEAAXXZ @ 0x1801EF0D4 (-_Show@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_CRITICAL_SECTION@@@Z @ 0x1801EF318 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCritic.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall RetailDemoExperienceManager::LaunchApplication(
        RetailDemoExperienceManager *this,
        HSTRING a2,
        HSTRING a3,
        HSTRING a4)
{
  RetailDemoExperienceManager *v7; // r14
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  PCWSTR StringRawBuffer; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // r8
  RetailDemoExperienceManager *v12; // r15
  WCHAR *v13; // rax
  _WORD *v14; // rbx
  PCWSTR v15; // rax
  _WORD *v16; // rdx
  __int128 v17; // xmm2
  __int128 v18; // xmm3
  const WCHAR *v19; // rdx
  const unsigned __int16 *v20; // rcx
  int v21; // eax
  WCHAR *v22; // rsi
  const WCHAR *v23; // r8
  const WCHAR *v24; // rcx
  void *v25; // rbx
  DWORD v26; // eax
  PCWSTR v27; // rax
  __int128 v28; // xmm2
  __int128 v29; // xmm3
  int v30; // eax
  const WCHAR *v31; // rax
  const WCHAR *v32; // rbx
  const WCHAR *v33; // rcx
  PCWSTR v34; // rax
  const unsigned __int16 *v35; // rcx
  int v36; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-A8h] BYREF
  LPCWCH lpString1[2]; // [rsp+38h] [rbp-A0h] BYREF
  __int128 v40; // [rsp+48h] [rbp-90h]
  _QWORD v41[4]; // [rsp+58h] [rbp-80h] BYREF
  _QWORD v42[4]; // [rsp+78h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v7 = this;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 336);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 336));
  lpCriticalSection = v8;
  StringRawBuffer = WindowsGetStringRawBuffer(a4, 0LL);
  v10 = -1LL;
  v11 = -1LL;
  do
    ++v11;
  while ( StringRawBuffer[v11] );
  std::wstring::assign((char *)v7 + 184, StringRawBuffer, v11);
  v12 = (RetailDemoExperienceManager *)((char *)v7 - 128);
  RetailDemoExperienceManager::_ParseExperienceArguments((char *)v7 - 128, (char *)v7 + 184);
  v13 = (WCHAR *)WindowsGetStringRawBuffer(a2, 0LL);
  std::wstring::wstring((__int64)lpString1, v13);
  if ( !*((_QWORD *)v7 + 9) )
  {
    v14 = (_WORD *)((char *)v7 + 152);
    v15 = WindowsGetStringRawBuffer(a3, 0LL);
    do
      ++v10;
    while ( v15[v10] );
    std::wstring::assign((char *)v7 + 152, v15, v10);
    v16 = (_WORD *)((char *)v7 + 120);
    v17 = *(_OWORD *)((char *)v7 + 120);
    v18 = *(_OWORD *)((char *)v7 + 136);
    *(_OWORD *)((char *)v7 + 120) = *(_OWORD *)lpString1;
    *(_OWORD *)((char *)v7 + 136) = v40;
    *(_OWORD *)lpString1 = v17;
    v40 = v18;
    if ( *((_QWORD *)v7 + 18) >= 8uLL )
      v16 = *(_WORD **)v16;
    std::wstring::wstring((__int64)v42, v16);
    if ( *((_QWORD *)v7 + 22) >= 8uLL )
      v14 = *(_WORD **)v14;
    std::wstring::wstring((__int64)v41, v14);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::reset(
      &lpCriticalSection,
      0LL);
    v19 = (const WCHAR *)v41;
    if ( v41[3] >= 8uLL )
      v19 = (const WCHAR *)v41[0];
    v20 = (const unsigned __int16 *)v42;
    if ( v42[3] >= 8uLL )
      v20 = (const unsigned __int16 *)v42[0];
    v21 = ActivateApplicationForExperienceWithPropertySet(
            v20,
            v19,
            (__int64)L"Windows.Internal.ShellExperience.RetailDemo",
            0LL,
            1u,
            0LL);
    if ( v21 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        426LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v21);
    std::wstring::_Tidy_deallocate(v41);
    std::wstring::_Tidy_deallocate(v42);
    goto LABEL_43;
  }
  if ( !*((_QWORD *)v7 + 17) )
    goto LABEL_31;
  v22 = (WCHAR *)((char *)v7 + 120);
  v23 = (const WCHAR *)((char *)v7 + 120);
  if ( *((_QWORD *)v7 + 18) >= 8uLL )
    v23 = *(const WCHAR **)v22;
  v24 = (const WCHAR *)lpString1;
  if ( *((_QWORD *)&v40 + 1) >= 8uLL )
    v24 = lpString1[0];
  if ( CompareStringOrdinal(v24, -1, v23, -1, 1) == 2 )
    goto LABEL_31;
  RetailDemoExperienceManager::_Close((RetailDemoExperienceManager *)((char *)v7 - 128));
  v25 = (void *)*((_QWORD *)v7 + 41);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::reset(
    &lpCriticalSection,
    0LL);
  v26 = WaitForSingleObject(v25, 0x1388u);
  wil::details::in1diag3::Log_HrIfMsg(
    retaddr,
    (void *)0x1BA,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
    (const char *)0x8000FFFFLL,
    v26 == 258,
    (bool)"RDX Experience Manager timeout waiting for close",
    (const char *)lpCriticalSection);
  v7 = (RetailDemoExperienceManager *)((char *)v7 + 152);
  v27 = WindowsGetStringRawBuffer(a3, 0LL);
  do
    ++v10;
  while ( v27[v10] );
  std::wstring::assign((char *)v7, v27, v10);
  v28 = *(_OWORD *)v22;
  v29 = *((_OWORD *)v22 + 1);
  *(_OWORD *)v22 = *(_OWORD *)lpString1;
  *((_OWORD *)v22 + 1) = v40;
  *(_OWORD *)lpString1 = v28;
  v40 = v29;
  if ( *((_QWORD *)v7 + 3) >= 8uLL )
    v7 = *(RetailDemoExperienceManager **)v7;
  if ( *((_QWORD *)v22 + 3) >= 8uLL )
    v22 = *(WCHAR **)v22;
  v30 = ActivateApplicationForExperienceWithPropertySet(
          v22,
          (const WCHAR *)v7,
          (__int64)L"Windows.Internal.ShellExperience.RetailDemo",
          0LL,
          1u,
          0LL);
  if ( v30 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      446LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)(unsigned int)v30);
LABEL_31:
    v31 = WindowsGetStringRawBuffer(a3, 0LL);
    v32 = (const WCHAR *)((char *)v7 + 152);
    v33 = (const WCHAR *)((char *)v7 + 152);
    if ( *((_QWORD *)v7 + 22) >= 8uLL )
      v33 = *(const WCHAR **)v32;
    if ( CompareStringOrdinal(v33, v10, v31, v10, 1) != 2 )
    {
      v34 = WindowsGetStringRawBuffer(a3, 0LL);
      do
        ++v10;
      while ( v34[v10] );
      std::wstring::assign((char *)v7 + 152, v34, v10);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::reset(
        &lpCriticalSection,
        0LL);
      if ( *((_QWORD *)v7 + 22) >= 8uLL )
        v32 = *(const WCHAR **)v32;
      v35 = (const unsigned __int16 *)((char *)v7 + 120);
      if ( *((_QWORD *)v7 + 18) >= 8uLL )
        v35 = *(const unsigned __int16 **)v35;
      v36 = ActivateApplicationForExperienceWithPropertySet(
              v35,
              v32,
              (__int64)L"Windows.Internal.ShellExperience.RetailDemo",
              0LL,
              1u,
              0LL);
      if ( v36 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          455LL,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v36);
    }
    RetailDemoExperienceManager::_Show(v12);
  }
LABEL_43:
  std::wstring::_Tidy_deallocate(lpString1);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
