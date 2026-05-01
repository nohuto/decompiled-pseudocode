/*
 * XREFs of ?Unregister@CGITRegistrationList@@QEAAJK@Z @ 0x1804774C4
 * Callers:
 *     ?Unregister@FullScreenPositioner@@UEAAJK@Z @ 0x1801A7F70 (-Unregister@FullScreenPositioner@@UEAAJK@Z.c)
 *     ?Unregister@CFullScreenManager@@UEAAJK@Z @ 0x1801AC9F0 (-Unregister@CFullScreenManager@@UEAAJK@Z.c)
 *     ?UnregisterForShowMoveSizeEvents@ViewPresentationMediator@@UEAAJK@Z @ 0x1802E2B60 (-UnregisterForShowMoveSizeEvents@ViewPresentationMediator@@UEAAJK@Z.c)
 *     ?UnregisterForWindowGroupingEvents@ViewPresentationMediator@@UEAAJK@Z @ 0x1802E2BA0 (-UnregisterForWindowGroupingEvents@ViewPresentationMediator@@UEAAJK@Z.c)
 *     ?Unregister@MultitaskingViewVisibilityService@@UEAAJK@Z @ 0x180382220 (-Unregister@MultitaskingViewVisibilityService@@UEAAJK@Z.c)
 *     ?UnregisterBeginEndListener@ObservableObjectArray@@UEAAJK@Z @ 0x18039E9E0 (-UnregisterBeginEndListener@ObservableObjectArray@@UEAAJK@Z.c)
 *     ?UnregisterListener@ObservableObjectArray@@UEAAJK@Z @ 0x18039EA20 (-UnregisterListener@ObservableObjectArray@@UEAAJK@Z.c)
 *     ?UnregisterForDesktopVisibilityChanges@CPerMonitorDesktopVisibilityService@@UEAAJK@Z @ 0x1803CD5E0 (-UnregisterForDesktopVisibilityChanges@CPerMonitorDesktopVisibilityService@@UEAAJK@Z.c)
 *     ?UnregisterForAppLayoutChanges@TabletModePositionerManager@@UEAAJK@Z @ 0x1803F23B0 (-UnregisterForAppLayoutChanges@TabletModePositionerManager@@UEAAJK@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ReleaseSRWLockExclusive_0 @ 0x18008DCEA (ReleaseSRWLockExclusive_0.c)
 *     WINRT_AcquireSRWLockExclusive @ 0x18008DD0E (WINRT_AcquireSRWLockExclusive.c)
 *     memmove_0 @ 0x1800F03F3 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGITRegistrationList::Unregister(RTL_SRWLOCK *this, int a2)
{
  unsigned int v4; // ebx
  PVOID Ptr; // rbp
  void *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rbx
  _BYTE *v9; // rdx
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0LL;
  v4 = -2147024809;
  WINRT_AcquireSRWLockExclusive(this + 1);
  Ptr = this[3].Ptr;
  v6 = 0LL;
  if ( Ptr )
  {
    while ( 1 )
    {
      v7 = *((_QWORD *)this[2].Ptr + (_QWORD)v6);
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7) == a2 )
        break;
      v6 = (char *)v6 + 1;
      if ( v6 >= Ptr )
        goto LABEL_12;
    }
    v8 = *((_QWORD *)this[2].Ptr + (_QWORD)v6);
    if ( v8 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*((_QWORD *)this[2].Ptr + (_QWORD)v6));
      v12 = 0LL;
      v11 = v8;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    }
    if ( v6 < this[3].Ptr )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this[2].Ptr + (_QWORD)v6);
      v9 = this[3].Ptr;
      if ( v6 != v9 - 1 )
      {
        memmove_0(
          (char *)this[2].Ptr + 8 * (_QWORD)v6,
          (char *)this[2].Ptr + 8 * (_QWORD)v6 + 8,
          8 * (v9 - (_BYTE *)v6) - 8);
        v9 = this[3].Ptr;
      }
      this[3].Ptr = v9 - 1;
    }
    v4 = 0;
  }
LABEL_12:
  ReleaseSRWLockExclusive_0(this + 1);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  return v4;
}
