/*
 * XREFs of ?add_PresentationReadyChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x180255C80
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18000F678 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000FBC0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180014030 (-AddInternal@-$EventSource@U-$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Int.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_EnableControlOfShowWindowBehavior@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180150208 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_EnableControlOfShowWindowBehavior@@@detai.c)
 *     ??$CreateGitHelper@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@@Internal@3@@Details@Internal@Windows@@YAJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@2@PEAPEAU342@@Z @ 0x180249CDC (--$CreateGitHelper@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Intern_ea_180249CDC.c)
 *     ?_FirePresentationReadinessOrRetryAfterDelay@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_KV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@Z @ 0x1802543CC (-_FirePresentationReadinessOrRetryAfterDelay@Win32BackedViewHostItem@Holographic@Shell@Internal@.c)
 *     ?get_FrameworkViewType@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAH@Z @ 0x180256470 (-get_FrameworkViewType@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAH@Z.c)
 */

__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::add_PresentationReadyChanged(
        RTL_SRWLOCK *this,
        __int64 a2,
        struct IUnknown **a3)
{
  RTL_SRWLOCK *v3; // rsi
  int ready; // ebx
  __int64 v8; // r8
  __int64 v10; // rbx
  _QWORD *Ptr; // rax
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v14; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  v3 = this + 28;
  AcquireSRWLockExclusive(this + 28);
  if ( !a2 )
  {
    ready = -2147024809;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1ED,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      (const char *)(unsigned int)ready);
    if ( v3 )
      ReleaseSRWLockExclusive(v3);
    return (unsigned int)ready;
  }
  v14 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  ready = Windows::Internal::Details::CreateGitHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *>>>(
            a2,
            &v14);
  if ( ready >= 0 )
  {
    if ( v14 )
      ready = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<2>>::AddInternal(
                (__int64)&this[80],
                (struct IUnknown *)v14,
                *(void **)(*(_QWORD *)a2 + 24LL),
                a3);
    else
      ready = -2147024809;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  if ( ready < 0 )
    goto LABEL_8;
  if ( this[80].Ptr )
  {
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v14, this + 81);
    Ptr = this[80].Ptr;
    if ( Ptr )
      v10 = (__int64)(Ptr[3] - Ptr[2]) >> 3;
    else
      v10 = 0LL;
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v14);
  }
  else
  {
    v10 = 0LL;
  }
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_EnableControlOfShowWindowBehavior>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_EnableControlOfShowWindowBehavior>::GetImpl'::`2'::impl,
    1u,
    v8);
  if ( v10 == 1 )
  {
    LODWORD(v14) = 0;
    if ( (int)Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::get_FrameworkViewType(
                (Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *)this,
                (int *)&v14) >= 0
      && (_DWORD)v14 == 1 )
    {
      v12 = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_FirePresentationReadinessOrRetryAfterDelay(
              (Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *)this,
              10LL,
              2000LL);
      ready = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1FD,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
          (const char *)(unsigned int)v12);
        return (unsigned int)ready;
      }
    }
  }
  return 0LL;
}
