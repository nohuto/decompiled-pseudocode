/*
 * XREFs of ?s_CreateInstance@CTaskWindow@@SAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4TASK_WINDOW_TYPE@@PEAUIImmersiveApplicationInternal@@PEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@AEBU_GUID@@PEAPEAX@Z @ 0x180186A7C
 * Callers:
 *     ?HandleCreation@CCharmsWindowManager@@UEAAXPEAUHWND__@@@Z @ 0x180165AC0 (-HandleCreation@CCharmsWindowManager@@UEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ??$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEAPEAUHWND__@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@AEAW4TASK_WINDOW_TYPE@@AEAPEAUIImmersiveApplicationInternal@@AEAPEBUtagRECT@@AEAPEBUAPPLICATION_VIEW_DATA@@@Details@WRL@Microsoft@@YAJPEAPEAUITaskWindow@@AEAPEAUHWND__@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@AEAW4TASK_WINDOW_TYPE@@AEAPEAUIImmersiveApplicationInternal@@AEAPEBUtagRECT@@AEAPEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18001849C (--$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEAPEAUHWND__@@AEAPEAUIViewWrapper@ViewManagerI.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 CTaskWindow::s_CreateInstance(__int64 a1, __int64 a2, unsigned int a3, ...)
{
  _QWORD *v3; // rdi
  int v4; // ebx
  __int64 v6; // [rsp+60h] [rbp+20h] BYREF
  __int64 v7; // [rsp+68h] [rbp+28h] BYREF
  unsigned int v8; // [rsp+70h] [rbp+30h] BYREF
  __int64 v9; // [rsp+78h] [rbp+38h] BYREF
  va_list va; // [rsp+78h] [rbp+38h]
  __int64 v11; // [rsp+80h] [rbp+40h] BYREF
  va_list va1; // [rsp+80h] [rbp+40h]
  __int64 v13; // [rsp+88h] [rbp+48h] BYREF
  va_list va2; // [rsp+88h] [rbp+48h]
  __int64 v15; // [rsp+90h] [rbp+50h]
  _QWORD *v16; // [rsp+98h] [rbp+58h] BYREF
  va_list va3; // [rsp+98h] [rbp+58h]
  va_list va4; // [rsp+A0h] [rbp+60h] BYREF

  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v13 = va_arg(va3, _QWORD);
  v15 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v16 = va_arg(va4, _QWORD *);
  v8 = a3;
  v7 = a2;
  v6 = a1;
  v3 = v16;
  *v16 = 0LL;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)va3);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<CTaskWindow,ITaskWindow,HWND__ * &,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper * &,enum TASK_WINDOW_TYPE &,IImmersiveApplicationInternal * &,tagRECT const * &,APPLICATION_VIEW_DATA const * &>(
         (_QWORD **)va3,
         &v6,
         &v7,
         &v8,
         (__int64 *)va,
         (__int64 *)va1,
         (__int64 *)va2);
  if ( v4 >= 0 )
    v4 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*v16)(
           v16,
           &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee,
           v3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)va3);
  return (unsigned int)v4;
}
