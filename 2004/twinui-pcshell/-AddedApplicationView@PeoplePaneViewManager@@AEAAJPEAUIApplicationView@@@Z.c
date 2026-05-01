/*
 * XREFs of ?AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18025E490
 * Callers:
 *     ?OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800487E0 (-OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x1800259B4 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005B120 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1801457A4 (--$_Emplace_reallocate@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIApplic.c)
 *     ?AddPeoplePaneToTabletModeLayout@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18025E358 (-AddPeoplePaneToTabletModeLayout@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x18025F000 (-FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV-$shared_pt.c)
 *     ?GetTabletModePositioner@PeoplePaneViewManager@@AEAAJPEAPEAUITabletModePositioner@@@Z @ 0x18025FAF8 (-GetTabletModePositioner@PeoplePaneViewManager@@AEAAJPEAPEAUITabletModePositioner@@@Z.c)
 *     ?IsApplicationViewAlreadyStashed@PeoplePaneViewManager@@AEAA_NPEAUIApplicationView@@@Z @ 0x18025FF20 (-IsApplicationViewAlreadyStashed@PeoplePaneViewManager@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?IsPlaceModeEnabled@@YA_NXZ @ 0x180260164 (-IsPlaceModeEnabled@@YA_NXZ.c)
 *     ?NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z @ 0x180261388 (-NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall PeoplePaneViewManager::AddedApplicationView(
        PeoplePaneViewManager *this,
        struct IApplicationView *a2)
{
  std::_Ref_count_base *v4; // rbx
  std::_Ref_count_base *v5; // r8
  struct IApplicationView **v6; // r15
  int v7; // eax
  int TabletModePositioner; // eax
  unsigned int v9; // ebx
  struct ITabletModePositioner *v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rdx
  RTL_SRWLOCK *v16; // rcx
  __int64 *v17; // rdx
  struct ITabletModePositioner *v19[2]; // [rsp+30h] [rbp-20h] BYREF
  std::_Ref_count_base *v20[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct IApplicationView *v22; // [rsp+90h] [rbp+40h] BYREF
  __int64 v23; // [rsp+98h] [rbp+48h] BYREF

  *(_OWORD *)v20 = 0LL;
  if ( (int)PeoplePaneViewManager::FindViewInfoByApplicationView(this, a2, v20) < 0
    || (v4 = v20[0], *((_BYTE *)v20[0] + 56) != 1) )
  {
    if ( PeoplePaneViewManager::IsApplicationViewAlreadyStashed(this, a2) )
      goto LABEL_41;
    AcquireSRWLockExclusive((PSRWLOCK)this + 20);
    v23 = (__int64)this + 160;
    v22 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v22);
    v17 = (__int64 *)*((_QWORD *)this + 22);
    if ( *((__int64 **)this + 23) == v17 )
    {
      std::vector<Microsoft::WRL::ComPtr<IApplicationView>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IApplicationView>>(
        (__int64 *)this + 21,
        (__int64)v17,
        (__int64 *)&v22);
    }
    else
    {
      *v17 = 0LL;
      if ( v17 != (__int64 *)&v22 )
      {
        *v17 = (__int64)a2;
        v22 = 0LL;
      }
      *((_QWORD *)this + 22) += 8LL;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
    if ( this == (PeoplePaneViewManager *)-160LL )
      goto LABEL_41;
    v16 = (RTL_SRWLOCK *)((char *)this + 160);
    goto LABEL_40;
  }
  AcquireSRWLockExclusive((PSRWLOCK)this + 16);
  v19[1] = (PeoplePaneViewManager *)((char *)this + 128);
  v5 = v4;
  if ( *((_QWORD *)v4 + 3) >= 8uLL )
    v5 = *(std::_Ref_count_base **)v4;
  PeoplePaneViewManager::NotifyListeners(this, 0LL, v5, *((unsigned int *)v4 + 10));
  v6 = (struct IApplicationView **)((char *)v4 + 32);
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)v4 + 4, (__int64)a2);
  if ( !*((_DWORD *)this + 52) )
  {
    v7 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)*v6 + 56LL))(*v6);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x24E,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v7);
    goto LABEL_22;
  }
  v19[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v19);
  TabletModePositioner = PeoplePaneViewManager::GetTabletModePositioner(this, v19);
  v9 = TabletModePositioner;
  if ( TabletModePositioner < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x253,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)TabletModePositioner);
    goto LABEL_30;
  }
  v22 = 0LL;
  v10 = v19[0];
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
  v11 = (*(__int64 (__fastcall **)(struct ITabletModePositioner *, struct IApplicationView **))(*(_QWORD *)v10 + 72LL))(
          v10,
          &v22);
  v9 = v11;
  if ( v11 < 0 )
  {
    v12 = 598LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_29;
  }
  if ( (*(unsigned int (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)v22 + 80LL))(v22, 1LL) != 2
    || (*(unsigned int (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v22 + 88LL))(v22)
    || !IsPlaceModeEnabled() )
  {
    v11 = PeoplePaneViewManager::AddPeoplePaneToTabletModeLayout(this, *v6);
    v9 = v11;
    if ( v11 < 0 )
    {
      v12 = 610LL;
      goto LABEL_28;
    }
    v11 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)*v6 + 56LL))(*v6);
    v9 = v11;
    if ( v11 < 0 )
    {
      v12 = 611LL;
      goto LABEL_28;
    }
    goto LABEL_21;
  }
  v23 = 0LL;
  v13 = *((_QWORD *)this + 24);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, __int64 *))(*(_QWORD *)v13 + 72LL))(
          v13,
          0LL,
          &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
          &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
          &v23);
  v9 = v14;
  if ( v14 >= 0 )
  {
    v14 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView *, struct IApplicationView *, _QWORD))(*(_QWORD *)v23 + 56LL))(
            v23,
            a2,
            v22,
            0LL);
    v9 = v14;
    if ( v14 < 0 )
    {
      v15 = 606LL;
      goto LABEL_19;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
LABEL_21:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v19);
LABEL_22:
    if ( this == (PeoplePaneViewManager *)-128LL )
    {
LABEL_41:
      v9 = 0;
      goto LABEL_42;
    }
    v16 = (RTL_SRWLOCK *)((char *)this + 128);
LABEL_40:
    ReleaseSRWLockExclusive(v16);
    goto LABEL_41;
  }
  v15 = 605LL;
LABEL_19:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
    (const char *)(unsigned int)v14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
LABEL_29:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
LABEL_30:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v19);
  if ( this != (PeoplePaneViewManager *)-128LL )
    ReleaseSRWLockExclusive((PSRWLOCK)this + 16);
LABEL_42:
  if ( v20[1] )
    std::_Ref_count_base::_Decref(v20[1]);
  return v9;
}
