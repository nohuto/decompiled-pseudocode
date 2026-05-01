/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_SetRectWithCallback__lambda_97f5dcf4a2c06153ca0bec45e32a16f2___ @ 0x180441E28
 * Callers:
 *     ?Commit@VirtualDesktopGestureWindow@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@M@Z @ 0x1804432F0 (-Commit@VirtualDesktopGestureWindow@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@M@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_06ac9bc0098fdd3d203260c35bf5e579___lambda_97f5dcf4a2c06153ca0bec45e32a16f2___ @ 0x180441EB0 (DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_-__lambda_06.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DCompThumbnailHelpers::DCompThumbnail_SetRectWithCallback__lambda_97f5dcf4a2c06153ca0bec45e32a16f2___(
        int a1,
        int a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5)
{
  int v8; // r8d
  int v9; // r9d
  unsigned int v10; // ebx
  __int64 v11; // rcx

  a5 = *a4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&a5);
  v10 = DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const____lambda_06ac9bc0098fdd3d203260c35bf5e579___lambda_97f5dcf4a2c06153ca0bec45e32a16f2___(
          a1,
          a2,
          v8,
          v9,
          0,
          (__int64)&a5);
  v11 = *a4;
  if ( *a4 )
  {
    *a4 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v10;
}
