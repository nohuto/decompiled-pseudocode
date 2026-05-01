/*
 * XREFs of ?VirtualDesktopCreated@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180375DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18000F678 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000FBC0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$InvokeAll@PEAVVirtualDesktopDataSource@@PEAUIVirtualDesktopCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAUIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopCollectionChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVVirtualDesktopDataSource@@PEAUIVirtualDesktopCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1803734E0 (--$InvokeAll@PEAVVirtualDesktopDataSource@@PEAUIVirtualDesktopCollectionChangedEventArgs@Multita.c)
 *     ??$MakeAndInitialize@VVirtualDesktopCollectionChangedEventArgs@@UIVirtualDesktopCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopCollectionChangedEventType@3456@PEAUIVirtualDesktop@3456@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@@012@$$QEAW4VirtualDesktopCollectionChangedEventType@Multitasking@ComposableShell@Internal@Windows@@$$QEAPEAUIVirtualDesktop@5678@@Z @ 0x1803738F0 (--$MakeAndInitialize@VVirtualDesktopCollectionChangedEventArgs@@UIVirtualDesktopCol_ea_1803738F0.c)
 *     ?GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopDataSource@@AEAAJPEAUIVirtualDesktop@@PEAPEAU2Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180375194 (-GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopDataSource@@AEAAJPEAUIVirtualDesktop@@P.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopDataSource::VirtualDesktopCreated(RTL_SRWLOCK *this, struct IVirtualDesktop *a2)
{
  unsigned int v4; // ebx
  int WinRTDesktopForInternalDesktopInternal; // eax
  __int64 v6; // rdx
  int v7; // eax
  RTL_SRWLOCK *v9; // [rsp+20h] [rbp-10h] BYREF
  struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *v10; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  int v12; // [rsp+50h] [rbp+20h] BYREF
  struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *v13; // [rsp+60h] [rbp+30h] BYREF
  __int64 v14; // [rsp+68h] [rbp+38h] BYREF

  v14 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v9, this + 37);
  if ( !this[10].Ptr )
  {
    v4 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x107,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
      (const char *)0x8007139FLL);
LABEL_8:
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v9);
    goto LABEL_11;
  }
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  WinRTDesktopForInternalDesktopInternal = VirtualDesktopDataSource::GetWinRTDesktopForInternalDesktopInternal(
                                             (struct IThumbnailDeviceSource **)&this[-4],
                                             a2,
                                             &v13);
  v4 = WinRTDesktopForInternalDesktopInternal;
  if ( WinRTDesktopForInternalDesktopInternal < 0 )
  {
    v6 = 266LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
      (const char *)(unsigned int)WinRTDesktopForInternalDesktopInternal);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    goto LABEL_8;
  }
  v10 = v13;
  v12 = 0;
  WinRTDesktopForInternalDesktopInternal = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopCollectionChangedEventArgs,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopCollectionChangedEventType,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>(
                                             &v14,
                                             &v12,
                                             (__int64 *)&v10);
  v4 = WinRTDesktopForInternalDesktopInternal;
  if ( WinRTDesktopForInternalDesktopInternal < 0 )
  {
    v6 = 267LL;
    goto LABEL_7;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v9);
  v7 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<VirtualDesktopDataSource *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs *>(
         this + 7,
         (__int64)&this[-4],
         v14);
  v4 = v7;
  if ( v7 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10E,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
      (const char *)(unsigned int)v7);
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  return v4;
}
