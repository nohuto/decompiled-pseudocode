/*
 * XREFs of ?get_FrameworkViewType@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAH@Z @ 0x1802344F0
 * Callers:
 *     ?_GetIsSlate@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA_NXZ @ 0x1802327AC (-_GetIsSlate@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA_NXZ.c)
 *     ?add_PresentationReadyChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x180233CC0 (-add_PresentationReadyChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJP.c)
 *     ?put_Visibility@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z @ 0x180234D30 (-put_Visibility@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180014EB0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::get_FrameworkViewType(
        Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *this,
        int *a2)
{
  RTL_SRWLOCK *v4; // rbx
  int v5; // edi
  int v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 6;
  v8 = 0LL;
  v4 = (RTL_SRWLOCK *)((char *)this + 216);
  AcquireSRWLockShared((PSRWLOCK)this + 27);
  v5 = *((_DWORD *)this + 138);
  Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v8, (__int64 *)this + 70);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  if ( v5 == 6 )
  {
    v7 = 6;
    if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 400LL))(v8, &v7) >= 0 )
    {
      AcquireSRWLockExclusive(v4);
      v5 = v7;
      *((_DWORD *)this + 138) = v7;
      if ( v4 )
        ReleaseSRWLockExclusive(v4);
    }
  }
  *a2 = v5;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  return 0LL;
}
