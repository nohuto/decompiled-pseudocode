/*
 * XREFs of ?RemoveDesktop@VirtualDesktopController@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@0@Z @ 0x180356830
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall VirtualDesktopController::RemoveDesktop(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *a2,
        struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *a3)
{
  RTL_SRWLOCK *v6; // r14
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rdi
  PVOID Ptr; // rsi
  _QWORD *v14; // rbx
  _QWORD *v15; // rax
  __int64 v17; // [rsp+20h] [rbp-20h] BYREF
  __int64 v18[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v20; // [rsp+60h] [rbp+20h] BYREF
  __int64 v21; // [rsp+78h] [rbp+38h] BYREF

  v6 = this + 15;
  AcquireSRWLockShared(this + 15);
  v18[1] = (__int64)v6;
  if ( !this[10].Ptr )
  {
    v7 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x84,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)0x8007139FLL);
    goto LABEL_12;
  }
  v21 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  v8 = (**(__int64 (__fastcall ***)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *))a2)(
         a2,
         &GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2,
         &v21);
  v7 = v8;
  if ( v8 >= 0 )
  {
    v20 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    v9 = (**(__int64 (__fastcall ***)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *))a3)(
           a3,
           &GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2,
           &v20);
    v7 = v9;
    if ( v9 >= 0 )
    {
      v12 = v21;
      Ptr = this[10].Ptr;
      v14 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 24LL))(v20, v18);
      v15 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 24LL))(v12, &v17);
      v7 = (*(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)Ptr + 88LL))(Ptr, *v15, *v14);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v18);
      if ( v7 >= 0 )
      {
LABEL_10:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
        goto LABEL_11;
      }
      v10 = (unsigned int)v7;
      v11 = 140LL;
    }
    else
    {
      v10 = (unsigned int)v9;
      v11 = 138LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)v10);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x87,
    (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
    (const char *)(unsigned int)v8);
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
LABEL_12:
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return (unsigned int)v7;
}
