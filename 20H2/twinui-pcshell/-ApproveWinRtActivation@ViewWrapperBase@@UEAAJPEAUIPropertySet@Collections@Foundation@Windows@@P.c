/*
 * XREFs of ?ApproveWinRtActivation@ViewWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@5@@Z @ 0x1802CD7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x1802A46EC (-QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Col.c)
 *     ?GetAppActivationPolicy@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@PEAE@Z @ 0x1802B50B0 (-GetAppActivationPolicy@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHel.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_a454b71a2548c162ba69e30212a6224f___ @ 0x1802CBD70 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_a454b71a2548c162ba69e30212a6224f___.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewWrapperBase::ApproveWinRtActivation(
        signed __int64 this,
        struct Windows::Foundation::Collections::IPropertySet *a2,
        int (__fastcall ***a3)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, __int64 *))
{
  RTL_SRWLOCK *v6; // r14
  unsigned __int8 *v7; // r8
  unsigned int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // ebx
  int (__fastcall *v13)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, __int64 *); // rbx
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // rdx
  unsigned int v18; // r15d
  unsigned int v19; // ebx
  __int64 *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v26[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  char v28; // [rsp+90h] [rbp+40h] BYREF
  __int64 v29; // [rsp+98h] [rbp+48h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+58h] BYREF

  v28 = 0;
  v6 = (RTL_SRWLOCK *)(*(_QWORD *)(this + 160) + 280LL);
  AcquireSRWLockExclusive(v6);
  v25[1] = (__int64)v6;
  v25[0] = (__int64)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v25);
  Windows::Internal::Shell::Desktop::ViewManagerInterop::GetAppActivationPolicy(
    (Windows::Internal::Shell::Desktop::ViewManagerInterop *)v25,
    (struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v28,
    v7);
  v8 = *(_DWORD *)(this + 284);
  if ( v8 - 4 > 1 && v8 )
  {
    if ( (*(_BYTE *)(this + 88) & 4) != 0 )
    {
      v8 = 4 - (v28 != 0);
    }
    else if ( v8 == 1 )
    {
      v8 = 2;
    }
    v29 = this - 8;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v29);
    v26[0] = this - 8;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v26);
    v26[1] = this - 8;
    v12 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_a454b71a2548c162ba69e30212a6224f___(
            v10,
            v9,
            v11,
            v26);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v26);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12D,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)(unsigned int)v12);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
LABEL_16:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v25);
      if ( v6 )
        ReleaseSRWLockExclusive(v6);
      return (unsigned int)v12;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
  }
  v30 = 0LL;
  v13 = **a3;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
  if ( v13(
         (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3,
         &GUID_a8d2a90c_a403_4593_95ff_012516ae9351,
         &v30) >= 0 )
  {
    LOBYTE(v29) = 0;
    v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v30 + 64LL))(v30, &v29);
    v12 = v14;
    if ( v14 < 0 )
    {
      v16 = 309LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)(unsigned int)v14);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
      goto LABEL_16;
    }
    LOBYTE(v15) = (_BYTE)v29 != 0;
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(this + 160) + 504LL) + 224LL))(
            *(_QWORD *)(*(_QWORD *)(this + 160) + 504LL),
            *(unsigned int *)(this + 336),
            v15);
    v12 = v14;
    if ( v14 < 0 )
    {
      v16 = 310LL;
      goto LABEL_15;
    }
  }
  v18 = *(_DWORD *)(this + 336);
  v19 = *(_DWORD *)(this + 140);
  v20 = *(__int64 **)(*(_QWORD *)(this + 160) + 504LL);
  v21 = *v20;
  if ( v8 )
  {
    v24 = v19;
    if ( v18 != v19 )
    {
      (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(v21 + 40))(v20, v19, v18, v8);
      goto LABEL_29;
    }
    v23 = v8;
  }
  else
  {
    if ( v18 == v19 )
      v22 = *(_QWORD *)(this + 184);
    else
      v22 = 0LL;
    (*(void (__fastcall **)(__int64 *, _QWORD, __int64, _QWORD))(v21 + 48))(v20, v18, v22, 0LL);
    if ( v18 == v19 )
      goto LABEL_29;
    v20 = *(__int64 **)(*(_QWORD *)(this + 160) + 504LL);
    v21 = *v20;
    v23 = 0LL;
    v24 = *(unsigned int *)(this + 140);
  }
  (*(void (__fastcall **)(__int64 *, __int64, __int64))(v21 + 32))(v20, v24, v23);
LABEL_29:
  *(_DWORD *)(this + 336) = 0;
  *(_DWORD *)(this + 88) |= 4u;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v25);
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  if ( v28 )
    ViewEventDispatcher::QueuePendingActivation(
      *(ViewEventDispatcher **)(this + 160),
      (struct IViewWrapperInternal *)(this & ((unsigned __int128)-(__int128)(unsigned __int64)(this - 8) >> 64)),
      a2,
      1);
  return 0LL;
}
