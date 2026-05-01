/*
 * XREFs of ?TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z @ 0x180033C60
 * Callers:
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x180136EDC (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000FBC0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x180033FF8 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005B120 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x1800626F0 (-lower_bound@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     ??$emplace@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@std@@@std@@@std@@_N@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@AEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@1@@Z @ 0x18006831C (--$emplace@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAV-$shared_ptr@UAp.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800684D8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007C9C8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??$make_shared@UAppUsageData@Discover@PenWorkspace@@$$V@std@@YA?AV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@XZ @ 0x18008528C (--$make_shared@UAppUsageData@Discover@PenWorkspace@@$$V@std@@YA-AV-$shared_ptr@UAppUsageData@Dis.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18008DA5C (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800EEEC7 (memcpy_0.c)
 *     memmove_0 @ 0x1800EEED3 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180139C44 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180147260 (--1-$unique_any_t@V-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180154AEC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::TrackProcess(
        PenWorkspace::Discover::RecentAppsCache *this,
        DWORD a2,
        const struct _FILETIME *a3)
{
  _QWORD *v6; // r15
  unsigned __int64 v7; // rsi
  wil::details *v8; // rcx
  HANDLE v9; // rbx
  unsigned __int16 **v10; // r8
  const void *v11; // rbx
  __int64 v12; // rdi
  unsigned __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  std::_Ref_count_base *v17; // rcx
  RTL_SRWLOCK *v18; // rbx
  const struct std::nothrow_t *v19; // rdx
  void *v20; // rcx
  int LastErrorFailHr; // edi
  _BYTE *v23; // rax
  size_t v24; // rcx
  void *v25; // rax
  __int64 v26; // [rsp+40h] [rbp-B8h] BYREF
  unsigned __int64 v27; // [rsp+48h] [rbp-B0h] BYREF
  void *v28; // [rsp+50h] [rbp-A8h] BYREF
  void *Src[3]; // [rsp+58h] [rbp-A0h] BYREF
  void *v30; // [rsp+70h] [rbp-88h] BYREF
  std::_Ref_count_base *v31; // [rsp+78h] [rbp-80h]
  HANDLE v32; // [rsp+80h] [rbp-78h] BYREF
  __int64 v33; // [rsp+88h] [rbp-70h] BYREF
  RTL_SRWLOCK *v34; // [rsp+90h] [rbp-68h] BYREF
  _BYTE v35[16]; // [rsp+98h] [rbp-60h] BYREF
  void *v36[2]; // [rsp+A8h] [rbp-50h] BYREF
  unsigned __int64 v37; // [rsp+B8h] [rbp-40h]
  unsigned __int64 v38; // [rsp+C0h] [rbp-38h]

  v6 = 0LL;
  Src[0] = 0LL;
  v7 = -1LL;
  Src[1] = (void *)-1LL;
  Src[2] = (void *)-1LL;
  v9 = OpenProcess(0x410u, 0, a2);
  v32 = v9;
  if ( (((unsigned __int64)v9 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    if ( (int)CallerIdentity::GetProcessAppId(v9, Src, v10) >= 0
      || (LastErrorFailHr = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void **, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 23) + 48LL))(
                              *((_QWORD *)this + 23),
                              a2,
                              Src,
                              0LL,
                              0LL,
                              0LL),
          LastErrorFailHr >= 0) )
    {
      CloseHandle(v9);
      goto LABEL_4;
    }
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v8);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&v32);
  if ( LastErrorFailHr < 0 )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(Src);
    return (unsigned int)LastErrorFailHr;
  }
LABEL_4:
  v11 = Src[0];
  v37 = 0LL;
  v38 = 7LL;
  LOWORD(v36[0]) = 0;
  do
    ++v7;
  while ( *((_WORD *)Src[0] + v7) );
  if ( v7 <= 7 )
  {
    v37 = v7;
    memmove_0(v36, Src[0], 2 * v7);
    *((_WORD *)v36 + v7) = 0;
LABEL_16:
    std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<PenWorkspace::Discover::AppUsageData>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>,0>>::lower_bound(
      (char *)this + 16,
      &v26,
      v36);
    v14 = v26;
    if ( v26 == *((_QWORD *)this + 3) )
    {
      std::make_shared<PenWorkspace::Discover::AppUsageData,>(&v30);
      v23 = v30;
      if ( v30 != v36 )
      {
        std::wstring::assign(v30);
        v23 = v30;
      }
      v23[44] = 0;
      AcquireSRWLockExclusive((PSRWLOCK)this + 21);
      v34 = (RTL_SRWLOCK *)((char *)this + 168);
      std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<PenWorkspace::Discover::AppUsageData>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>,0>>::emplace<std::wstring &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &>(
        (char *)this + 16,
        v35,
        v36,
        &v30);
      std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<PenWorkspace::Discover::AppUsageData>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>,0>>::lower_bound(
        (char *)this + 16,
        &v33,
        v36);
      v14 = v33;
      v26 = v33;
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v34);
      if ( v31 )
        std::_Ref_count_base::_Decref(v31);
    }
    *((_DWORD *)this + 20) = a2;
    v15 = *(_QWORD *)(v14 + 56);
    if ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
      v15 = *(_QWORD *)(v14 + 56);
    }
    v16 = *(_QWORD *)(v14 + 48);
    *((_QWORD *)this + 11) = v16;
    v17 = (std::_Ref_count_base *)*((_QWORD *)this + 12);
    *((_QWORD *)this + 12) = v15;
    if ( !v17 )
      goto LABEL_20;
    goto LABEL_47;
  }
  v12 = 0x7FFFFFFFFFFFFFFELL;
  if ( v7 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlength_error("string too long");
  if ( (v7 | 7) <= 0x7FFFFFFFFFFFFFFELL )
  {
    if ( (v7 | 7) < 0xA )
      v12 = 10LL;
    else
      v12 = v7 | 7;
  }
  v13 = 2 * (v12 + 1);
  if ( (unsigned __int64)(v12 + 1) > 0x7FFFFFFFFFFFFFFFLL )
  {
    v13 = -1LL;
  }
  else if ( v13 < 0x1000 )
  {
    if ( v13 )
      v6 = operator new(2 * (v12 + 1));
    goto LABEL_15;
  }
  v24 = v13 + 39;
  if ( v13 + 39 < v13 )
    v24 = -1LL;
  v25 = operator new(v24);
  if ( v25 )
  {
    v6 = (_QWORD *)(((unsigned __int64)v25 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v6 - 1) = v25;
LABEL_15:
    v37 = v7;
    v38 = v12;
    memcpy_0(v6, v11, 2 * v7);
    *((_WORD *)v6 + v7) = 0;
    v36[0] = v6;
    goto LABEL_16;
  }
  _o__invalid_parameter_noinfo_noreturn();
LABEL_47:
  std::_Ref_count_base::_Decref(v17);
  v16 = *((_QWORD *)this + 11);
LABEL_20:
  *(_BYTE *)(v16 + 44) = 0;
  v18 = (RTL_SRWLOCK *)(*((_QWORD *)this + 11) + 48LL);
  AcquireSRWLockExclusive(v18);
  *(struct _FILETIME *)(*((_QWORD *)this + 11) + 36LL) = *a3;
  if ( v18 )
    ReleaseSRWLockExclusive(v18);
  if ( v38 >= 8 )
  {
    v19 = (const struct std::nothrow_t *)(2 * v38 + 2);
    v27 = (unsigned __int64)v19;
    v20 = v36[0];
    v28 = v36[0];
    if ( (unsigned __int64)v19 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v28, &v27);
      v19 = (const struct std::nothrow_t *)v27;
      v20 = v28;
    }
    operator delete(v20, v19);
  }
  if ( Src[0] )
    CoTaskMemFree(Src[0]);
  return 0LL;
}
