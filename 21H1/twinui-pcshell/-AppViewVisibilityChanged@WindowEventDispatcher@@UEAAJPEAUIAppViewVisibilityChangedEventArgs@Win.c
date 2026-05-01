/*
 * XREFs of ?AppViewVisibilityChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewVisibilityChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1800322E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAW4AppModelKind@2345@PEAPEAUIAppModel@2345@@Z @ 0x18002BBD0 (-IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Interna.c)
 *     ?UpdateAudioState@WindowEventDispatcher@@AEAAXPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@W4HOSTED_APP_CHANGED@@@Z @ 0x180058228 (-UpdateAudioState@WindowEventDispatcher@@AEAAXPEAUIAppView@WindowManagement@ApplicationModel@Int.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall WindowEventDispatcher::AppViewVisibilityChanged(
        RTL_SRWLOCK *this,
        __int64 (__fastcall ***a2)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewVisibilityChangedEventArgs *, GUID *, __int64 **))
{
  __int64 (__fastcall **v4)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewVisibilityChangedEventArgs *, GUID *, __int64 **); // rax
  int v5; // eax
  __int64 v6; // rax
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  RTL_SRWLOCK *v13; // r14
  int v14; // edi
  __int64 v15; // rbx
  _QWORD *Ptr; // rsi
  _QWORD *v17; // r15
  __int64 v18; // rcx
  wil::details::in1diag3 *v19; // rcx
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v21; // [rsp+20h] [rbp-58h] BYREF
  __int64 *v22; // [rsp+28h] [rbp-50h] BYREF
  __int64 v23; // [rsp+30h] [rbp-48h]
  __int64 v24; // [rsp+38h] [rbp-40h]
  RTL_SRWLOCK *v25; // [rsp+40h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v27; // [rsp+88h] [rbp+10h] BYREF
  int v28; // [rsp+90h] [rbp+18h] BYREF
  int v29; // [rsp+98h] [rbp+20h]

  v29 = 0;
  v4 = *a2;
  v22 = 0LL;
  v5 = (*v4)(
         (struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewVisibilityChangedEventArgs *)a2,
         &GUID_a5447aa8_063b_4ddc_8b81_021591a43bf1,
         &v22);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3E6,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v5,
      (int)v21);
    goto LABEL_23;
  }
  v21 = 0LL;
  v6 = *v22;
  v21 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *, struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **))(v6 + 48))(
         v22,
         &v21);
  v8 = retaddr;
  if ( v7 < 0 )
  {
LABEL_23:
    wil::details::in1diag3::Throw_Hr(
      v8,
      (void *)0x3E9,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v7,
      (int)v21);
    goto LABEL_24;
  }
  v9 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewVisibilityChangedEventArgs *, GUID *, __int64 **), int *))(*a2)[6])(
         a2,
         &v27);
  v10 = retaddr;
  if ( v9 < 0 )
  {
LABEL_24:
    wil::details::in1diag3::Throw_Hr(
      v10,
      (void *)0x3EC,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v9,
      (int)v21);
LABEL_25:
    wil::details::in1diag3::Throw_Hr(
      v12,
      (void *)0x3F1,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v11,
      (int)v21);
    goto LABEL_26;
  }
  if ( IsComponentAppViewAndGetKindAndModel(v21, 0LL, 0LL) )
  {
    WindowEventDispatcher::UpdateAudioState(&this[-2], v21, (unsigned int)(v27 != 1) + 2);
    goto LABEL_16;
  }
  v11 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, int *))(*(_QWORD *)v21 + 48LL))(
          v21,
          &v28);
  v12 = retaddr;
  if ( v11 < 0 )
    goto LABEL_25;
  v24 = 0LL;
  v13 = this + 57;
  AcquireSRWLockShared(this + 57);
  v25 = this + 57;
  v14 = v28;
  v15 = 0LL;
  v23 = 0LL;
  v29 = 2;
  Ptr = this[44].Ptr;
  v17 = this[45].Ptr;
  while ( Ptr != v17 )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*Ptr + 288LL))(*Ptr) == v14 )
    {
      v18 = *Ptr;
      v15 = v18;
      v23 = *Ptr;
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
      break;
    }
    ++Ptr;
  }
  v24 = v15;
  v19 = retaddr;
  if ( !v15 )
  {
LABEL_26:
    wil::details::in1diag3::Throw_Hr(
      v19,
      (void *)0x3F7,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)0x80070490LL,
      (int)v21);
    __debugbreak();
    JUMPOUT(0x1800F35D5LL);
  }
  if ( v13 )
    ReleaseSRWLockShared(v13);
  (*(void (__fastcall **)(__int64, __int64, bool))(*(_QWORD *)v15 + 320LL))(v15, 1LL, v27 == 1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
LABEL_16:
  if ( v21 )
    (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v22 )
    (*(void (__fastcall **)(__int64 *))(*v22 + 16))(v22);
  return 0LL;
}
