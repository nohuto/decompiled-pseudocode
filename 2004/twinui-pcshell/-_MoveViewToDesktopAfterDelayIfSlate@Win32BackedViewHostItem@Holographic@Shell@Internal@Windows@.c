/*
 * XREFs of ?_MoveViewToDesktopAfterDelayIfSlate@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_N@Z @ 0x180254C20
 * Callers:
 *     ?RaisePresentationNotReady@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJXZ @ 0x180251630 (-RaisePresentationNotReady@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJXZ.c)
 *     ?TryClose@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z @ 0x180253B90 (-TryClose@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z.c)
 * Callees:
 *     ?IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ @ 0x18004E2F0 (-IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_0515d79353468786afaa47ac5fc4f5c5___ @ 0x1800A96E0 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_0515d79353468786afaa47ac5fc4f5c5___.c)
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x180136EC0 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_GetIsSlate@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA_NXZ @ 0x1802548F8 (-_GetIsSlate@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA_NXZ.c)
 */

__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_MoveViewToDesktopAfterDelayIfSlate(
        Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *this,
        __int64 a2)
{
  char v2; // si
  RTL_SRWLOCK *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  int v9[2]; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = a2;
  if ( !IsHolographicWin32SlatesFeatureEnabled((__int64)this, a2)
    || !Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_GetIsSlate(this) )
  {
    return 0LL;
  }
  v4 = (RTL_SRWLOCK *)((char *)this + 224);
  AcquireSRWLockShared((PSRWLOCK)this + 28);
  *(_QWORD *)v9 = *((_QWORD *)this + 72);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v9);
  v10 = v2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 79);
  v7 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_0515d79353468786afaa47ac5fc4f5c5___(
         v6,
         v5,
         (__int64)this + 632,
         v9);
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)v9);
  if ( v7 >= 0 )
  {
    if ( v4 )
      ReleaseSRWLockShared(v4);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x55B,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
    (const char *)(unsigned int)v7);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return (unsigned int)v7;
}
