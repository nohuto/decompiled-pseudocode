/*
 * XREFs of ?HandleViewReady@PeoplePaneViewManager@@AEAAJHAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x18023E058
 * Callers:
 *     ?PeoplePaneViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z @ 0x18023F8C0 (-PeoplePaneViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z.c)
 *     ?PeopleShareViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z @ 0x18023F950 (-PeopleShareViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180014EB0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?FindPendingViewByHwnd@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x18023D1D0 (-FindPendingViewByHwnd@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 *     ?NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z @ 0x18023F6E8 (-NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z.c)
 *     ?RemovePendingView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18023FC04 (-RemovePendingView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PeoplePaneViewManager::HandleViewReady(RTL_SRWLOCK *this, int a2, __int64 ***a3)
{
  RTL_SRWLOCK *v6; // rdi
  HWND v7; // rbx
  int v8; // eax
  __int64 **v9; // rax
  __int64 *v10; // r8
  PVOID Ptr; // rbx
  int v12; // eax
  unsigned int v13; // ebx
  struct IApplicationView *v14; // rbx
  __int64 **v15; // rax
  __int64 *v16; // r8
  int v17; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  struct IApplicationView *v20; // [rsp+50h] [rbp+30h] BYREF
  struct IApplicationView *v21; // [rsp+60h] [rbp+40h] BYREF
  RTL_SRWLOCK *v22; // [rsp+68h] [rbp+48h]

  v6 = this + 16;
  AcquireSRWLockExclusive(this + 16);
  *((_BYTE *)*a3 + 56) = 1;
  *((_DWORD *)*a3 + 10) = a2;
  v7 = (HWND)~a2;
  (*a3)[6] = (__int64 *)v7;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)*a3 + 9);
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  v21 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  if ( (int)PeoplePaneViewManager::FindPendingViewByHwnd(this, v7, &v21) < 0 )
    goto LABEL_19;
  AcquireSRWLockExclusive(this + 20);
  v22 = this + 20;
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)*a3 + 4, (__int64 *)&v21);
  v8 = (*(__int64 (__fastcall **)(__int64 *))(*(*a3)[4] + 56))((*a3)[4]);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x368,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v8);
  v9 = *a3;
  v10 = (__int64 *)*a3;
  if ( (unsigned __int64)(*a3)[3] >= 8 )
    v10 = *v9;
  PeoplePaneViewManager::NotifyListeners(this, 0LL, v10, *((unsigned int *)v9 + 10));
  v20 = 0LL;
  Ptr = this[43].Ptr;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  v12 = (*(__int64 (__fastcall **)(PVOID, struct IApplicationView **))(*(_QWORD *)Ptr + 72LL))(Ptr, &v20);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v14 = v21;
    if ( v20 == v21 )
    {
      v15 = *a3;
      v16 = (__int64 *)*a3;
      if ( (unsigned __int64)(*a3)[3] >= 8 )
        v16 = *v15;
      PeoplePaneViewManager::NotifyListeners(this, 2LL, v16, *((unsigned int *)v15 + 10));
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    if ( this != (RTL_SRWLOCK *)-160LL )
      ReleaseSRWLockExclusive(this + 20);
    v17 = PeoplePaneViewManager::RemovePendingView((PeoplePaneViewManager *)this, v14);
    v13 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x377,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v17);
      goto LABEL_20;
    }
LABEL_19:
    v13 = 0;
    goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x370,
    (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
    (const char *)(unsigned int)v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  if ( this != (RTL_SRWLOCK *)-160LL )
    ReleaseSRWLockExclusive(this + 20);
LABEL_20:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  return v13;
}
