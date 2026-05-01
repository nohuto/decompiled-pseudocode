/*
 * XREFs of _lambda_e5434191a426e1e6c5461e9f90ae0298_::operator() @ 0x1802E62E0
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_e5434191a426e1e6c5461e9f90ae0298___::Run @ 0x1802E7580 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_e5434191a426e1e6c5461e9f_ea_1802E7580.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089674 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     memset_0 @ 0x18008DA68 (memset_0.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0$0ICE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0ICE@G@Z @ 0x1800E1784 (--$-0$0ICE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0ICE@G@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@@2@@Z @ 0x180280728 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@Q.c)
 *     ??$emplace@AEAKAEAUDisplayRegionInfo@@@?$_Tree@V?$_Tmap_traits@KUDisplayRegionInfo@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@@std@@_N@1@AEAKAEAUDisplayRegionInfo@@@Z @ 0x1802E5A54 (--$emplace@AEAKAEAUDisplayRegionInfo@@@-$_Tree@V-$_Tmap_traits@KUDisplayRegionInfo@@U-$less@K@st.c)
 *     ?GetTargetDeviceName@WindowingEnvironmentConfig@@AEAAJPEAUHMONITOR__@@PEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1802E7218 (-GetTargetDeviceName@WindowingEnvironmentConfig@@AEAAJPEAUHMONITOR__@@PEAUDISPLAYCONFIG_TARGET_D.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@KUDisplayRegionInfo@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1802E798C (-find@-$_Tree@V-$_Tmap_traits@KUDisplayRegionInfo@@U-$less@K@std@@V-$allocator@U-$pair@$$CBKUDis.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_e5434191a426e1e6c5461e9f90ae0298_::operator()(__int64 a1)
{
  __int64 v2; // rbx
  int v3; // eax
  int v4; // eax
  __int64 *v5; // rbx
  __int64 v6; // r11
  __int64 v7; // rcx
  __int64 v8; // rbx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rsi
  int v12; // eax
  __int64 *v13; // rax
  __int64 i; // rdx
  __int64 *v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  int v18; // eax
  int v19; // eax
  WindowingEnvironmentConfig *v20; // rcx
  unsigned int v21; // r8d
  __int64 v22; // rbx
  HSTRING_HEADER *v23; // rax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  const char *v27; // r9
  __int64 result; // rax
  __int64 v29; // [rsp+30h] [rbp-248h] BYREF
  unsigned int v30; // [rsp+38h] [rbp-240h] BYREF
  __int64 v31[2]; // [rsp+40h] [rbp-238h] BYREF
  __int128 v32; // [rsp+50h] [rbp-228h] BYREF
  HMONITOR v33; // [rsp+60h] [rbp-218h] BYREF
  __int128 v34; // [rsp+68h] [rbp-210h] BYREF
  __int64 v35; // [rsp+78h] [rbp-200h]
  int v36; // [rsp+80h] [rbp-1F8h]
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp-1F0h] BYREF
  int v38; // [rsp+A0h] [rbp-1D8h]
  DISPLAYCONFIG_TARGET_DEVICE_NAME v39; // [rsp+B0h] [rbp-1C8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  try
  {
    v29 = 0LL;
    v31[0] = 0LL;
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 80LL) + 32LL))(*(_QWORD *)(*(_QWORD *)a1 + 80LL));
    v31[0] = 0LL;
    v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 48LL))(v2, v31);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        169LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v3);
    v30 = 0;
    v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(***(_QWORD ***)(a1 + 8) + 24LL))(
           **(_QWORD **)(a1 + 8),
           &v30);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        172LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v4);
    std::_Tree<std::_Tmap_traits<unsigned long,DisplayRegionInfo,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,DisplayRegionInfo>>,0>>::find(
      *(_QWORD *)a1 + 104LL,
      &v32,
      &v30);
    v5 = (__int64 *)v32;
    v7 = *(_QWORD *)(v6 + 80);
    if ( (_QWORD)v32 == *(_QWORD *)(v6 + 104) )
    {
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 40LL))(v7);
      v29 = 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 48LL))(v8, &v29);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          177LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
          (const char *)(unsigned int)v9);
      v10 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v29 + 64LL))(v29, &v32);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          180LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
          (const char *)(unsigned int)v10);
      hstringHeader.Reserved.Reserved1 = (PVOID)__PAIR64__(v30, v32);
      *(_OWORD *)&hstringHeader.Reserved.Reserved2[8] = *(_OWORD *)*(_QWORD *)(a1 + 16);
      LOBYTE(v38) = **(_DWORD **)(a1 + 24) != 0;
      v34 = *(_OWORD *)&hstringHeader.Reserved.Reserved1;
      v35 = *(_OWORD *)&_mm_unpackhi_pd(
                          *(__m128d *)&hstringHeader.Reserved.Reserved2[8],
                          *(__m128d *)&hstringHeader.Reserved.Reserved2[8]);
      v36 = v38;
    }
    else
    {
      v34 = *(_OWORD *)(v32 + 32);
      v35 = *(_QWORD *)(v32 + 48);
      v36 = *(_DWORD *)(v32 + 56);
      v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 40LL))(v7);
      v29 = 0LL;
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v11 + 56LL))(
              v11,
              (unsigned int)v34,
              &v29);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          187LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
          (const char *)(unsigned int)v12);
      v13 = v5;
      if ( *(_BYTE *)(v5[2] + 25) )
      {
        for ( i = v5[1]; !*(_BYTE *)(i + 25) && v13 == *(__int64 **)(i + 16); i = *(_QWORD *)(i + 8) )
          v13 = (__int64 *)i;
      }
      v15 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,DisplayRegionInfo>>>::_Extract(
              (_QWORD *)(*(_QWORD *)a1 + 104LL),
              v5);
      std::_Deallocate<16,0>(v15, (const struct std::nothrow_t *)0x40);
    }
    v32 = *(_OWORD *)*(_QWORD *)(a1 + 32);
    v16 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v29 + 104LL))(v29, &v32);
    if ( v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        191LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v16);
    LOBYTE(v17) = **(_DWORD **)(a1 + 24) != 0;
    v18 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 112LL))(v29, v17);
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        192LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v18);
    v33 = 0LL;
    v19 = (*(__int64 (__fastcall **)(_QWORD, HMONITOR *))(***(_QWORD ***)(a1 + 8) + 40LL))(**(_QWORD **)(a1 + 8), &v33);
    if ( v19 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        195LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v19);
    memset_0(&v39, 0, sizeof(v39));
    if ( WindowingEnvironmentConfig::GetTargetDeviceName(v20, v33, &v39) >= 0 )
    {
      v22 = v29;
      v23 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, v39.monitorDevicePath, v21);
      v24 = (*(__int64 (__fastcall **)(__int64, PVOID, _QWORD, _QWORD))(*(_QWORD *)v22 + 168LL))(
              v22,
              v23[1].Reserved.Reserved1,
              0LL,
              0LL);
      if ( v24 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          201LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
          (const char *)(unsigned int)v24);
    }
    v25 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)a1 + 64LL) + 96LL))(
            *(_QWORD *)(*(_QWORD *)a1 + 64LL),
            v29);
    if ( v25 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        204LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v25);
    v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31[0] + 56LL))(v31[0]);
    if ( v26 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        206LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v26);
    std::_Tree<std::_Tmap_traits<unsigned long,DisplayRegionInfo,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,DisplayRegionInfo>>,0>>::emplace<unsigned long &,DisplayRegionInfo &>(
      (__int64 *)(*(_QWORD *)a1 + 104LL),
      (__int64)&v32,
      &v30,
      (__int64)&v34);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v31);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v29);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xD2,
                           (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
                           v27);
  }
  return result;
}
