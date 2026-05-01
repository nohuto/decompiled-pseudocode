/*
 * XREFs of ?v_PushBoundsToAppView@WindowWrapper@@EEAAXXZ @ 0x18006A370
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetBatch@WindowWrapper@@AEAAXPEAPEAUIUniversalBatch@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18006A808 (-GetBatch@WindowWrapper@@AEAAXPEAPEAUIUniversalBatch@WindowManagement@ApplicationModel@Internal@.c)
 *     ?PushWindowTransparencyModeToWindow@@YAXPEAUHWND__@@W4WindowTransparencyMode@@W4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18007EF50 (-PushWindowTransparencyModeToWindow@@YAXPEAUHWND__@@W4WindowTransparencyMode@@W4NavigationLevel@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=21
void __fastcall WindowWrapper::v_PushBoundsToAppView(WindowWrapper *this)
{
  WindowWrapper *v1; // rdi
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // r8
  int v6; // eax
  struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // r8
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *v13; // rcx
  _QWORD *v14; // rax
  __int64 **v15; // rax
  __int64 *v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  int v20; // ecx
  int v21; // ecx
  struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  int v25; // eax
  __int64 v26; // rdx
  int v27; // eax
  int v28; // eax
  struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *v29; // rcx
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // r8
  int v33; // eax
  struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *v34; // rcx
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  int v37; // eax
  struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *v38; // rcx
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  int v41; // eax
  struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *v42; // rcx
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  int v45; // eax
  struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *v46; // rcx
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  int v49; // eax
  struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *v50; // rcx
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  int v53; // eax
  __int128 v54; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *v56; // [rsp+50h] [rbp+20h] BYREF
  __int64 v57; // [rsp+58h] [rbp+28h] BYREF
  __int64 v58; // [rsp+60h] [rbp+30h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 36) + 216LL))(*((_QWORD *)this + 36));
  v56 = 0LL;
  LOBYTE(v1) = *((_BYTE *)this + 528) & 1;
  if ( (*((_BYTE *)this + 672) & 1) != (_BYTE)v1 )
  {
    v56 = 0LL;
    WindowWrapper::GetBatch((WindowWrapper *)((char *)this - 8), &v56);
    v3 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 36) + 144LL))(
                     *((_QWORD *)this + 36),
                     &v58);
    v4 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v3 + 40LL))(*v3, &v57);
    LOBYTE(v5) = (_BYTE)v1;
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v4 + 128LL))(
           *v4,
           *((unsigned int *)this + 90),
           v5);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x100,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v6,
        v54);
      goto LABEL_49;
    }
    if ( v57 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
    if ( v58 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
  }
  v1 = (WindowWrapper *)(*((_DWORD *)this + 132) >> 1);
  LOBYTE(v1) = (*((_DWORD *)this + 132) & 2) != 0;
  if ( ((*((_DWORD *)this + 168) & 2) != 0) != (_BYTE)v1 )
  {
    v7 = v56;
    v56 = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v7 + 16LL))(v7);
    WindowWrapper::GetBatch((WindowWrapper *)((char *)this - 8), &v56);
    v8 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 36) + 144LL))(
                     *((_QWORD *)this + 36),
                     &v58);
    v9 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v8 + 40LL))(*v8, &v57);
    LOBYTE(v10) = (_BYTE)v1;
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v9 + 136LL))(
            *v9,
            *((unsigned int *)this + 90),
            v10);
    v12 = retaddr;
    if ( v11 >= 0 )
    {
      if ( v57 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
      if ( v58 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
      goto LABEL_15;
    }
LABEL_49:
    wil::details::in1diag3::Throw_Hr(
      v12,
      (void *)0x108,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
      (const char *)(unsigned int)v11,
      v54);
    goto LABEL_50;
  }
LABEL_15:
  if ( *((float *)this + 162) == *((float *)this + 124)
    && *((float *)this + 163) == *((float *)this + 125)
    && *((float *)this + 164) == *((float *)this + 126)
    && *((float *)this + 165) == *((float *)this + 127) )
  {
    goto LABEL_24;
  }
  v13 = v56;
  v56 = 0LL;
  if ( v13 )
    (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v13 + 16LL))(v13);
  WindowWrapper::GetBatch((WindowWrapper *)((char *)this - 8), &v56);
  v14 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 36) + 144LL))(
                    *((_QWORD *)this + 36),
                    &v58);
  v15 = (__int64 **)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v14 + 40LL))(*v14, &v57);
  v16 = *v15;
  v17 = **v15;
  v54 = *((_OWORD *)this + 31);
  v18 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int128 *))(v17 + 176))(v16, *((unsigned int *)this + 90), &v54);
  v19 = retaddr;
  if ( v18 >= 0 )
  {
    if ( v57 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
    if ( v58 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
LABEL_24:
    v1 = (WindowWrapper *)((char *)this - 8);
    if ( *((_DWORD *)this + 134) == *((_DWORD *)this + 170) )
      goto LABEL_25;
    goto LABEL_51;
  }
LABEL_50:
  wil::details::in1diag3::Throw_Hr(
    v19,
    (void *)0x111,
    (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
    (const char *)(unsigned int)v18,
    v54);
LABEL_51:
  v29 = v56;
  v56 = 0LL;
  if ( v29 )
    (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v29 + 16LL))(v29);
  WindowWrapper::GetBatch(v1, &v56);
  v30 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 36) + 144LL))(
                    *((_QWORD *)this + 36),
                    &v58);
  v31 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v30 + 40LL))(*v30, &v57);
  LOBYTE(v32) = *((_BYTE *)this + 536);
  v33 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v31 + 192LL))(
          *v31,
          *((unsigned int *)this + 90),
          v32);
  if ( v33 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x117,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
      (const char *)(unsigned int)v33,
      v54);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v57);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v58);
LABEL_25:
  v20 = *((_DWORD *)this + 135);
  if ( v20 == *((_DWORD *)this + 171) )
    goto LABEL_26;
  if ( v20 )
  {
    if ( v20 != 1 )
      goto LABEL_26;
    v34 = v56;
    v56 = 0LL;
    if ( v34 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v34 + 16LL))(v34);
    WindowWrapper::GetBatch(v1, &v56);
    v35 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 36) + 144LL))(
                      *((_QWORD *)this + 36),
                      &v58);
    v36 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v35 + 40LL))(*v35, &v57);
    v37 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v36 + 160LL))(
            *v36,
            *((unsigned int *)this + 90),
            1LL);
    if ( v37 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x127,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v37,
        v54);
  }
  else
  {
    v38 = v56;
    v56 = 0LL;
    if ( v38 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v38 + 16LL))(v38);
    WindowWrapper::GetBatch(v1, &v56);
    v39 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 36) + 144LL))(
                      *((_QWORD *)this + 36),
                      &v58);
    v40 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v39 + 40LL))(*v39, &v57);
    v41 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v40 + 160LL))(
            *v40,
            *((unsigned int *)this + 90),
            0LL);
    if ( v41 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x121,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v41,
        v54);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v57);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v58);
LABEL_26:
  v21 = *((_DWORD *)this + 137);
  if ( v21 == *((_DWORD *)this + 173) )
    goto LABEL_27;
  if ( v21 )
  {
    if ( v21 != 1 )
      goto LABEL_27;
    v42 = v56;
    v56 = 0LL;
    if ( v42 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v42 + 16LL))(v42);
    WindowWrapper::GetBatch(v1, &v56);
    v43 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 36) + 144LL))(
                      *((_QWORD *)this + 36),
                      &v58);
    v44 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v43 + 40LL))(*v43, &v57);
    v45 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v44 + 144LL))(
            *v44,
            *((unsigned int *)this + 90),
            2LL);
    if ( v45 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x13C,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v45,
        v54);
  }
  else
  {
    v46 = v56;
    v56 = 0LL;
    if ( v46 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v46 + 16LL))(v46);
    WindowWrapper::GetBatch(v1, &v56);
    v47 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 36) + 144LL))(
                      *((_QWORD *)this + 36),
                      &v58);
    v48 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v47 + 40LL))(*v47, &v57);
    v49 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v48 + 144LL))(
            *v48,
            *((unsigned int *)this + 90),
            1LL);
    if ( v49 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x136,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v49,
        v54);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v57);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v58);
LABEL_27:
  if ( *((_DWORD *)this + 138) == *((_DWORD *)this + 174) )
    goto LABEL_35;
  v22 = v56;
  v56 = 0LL;
  if ( v22 )
    (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v22 + 16LL))(v22);
  WindowWrapper::GetBatch(v1, &v56);
  v23 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 36) + 144LL))(
                    *((_QWORD *)this + 36),
                    &v58);
  v24 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v23 + 40LL))(*v23, &v57);
  v25 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v24 + 224LL))(
          *v24,
          *((unsigned int *)this + 90),
          *((unsigned int *)this + 138));
  if ( v25 >= 0 )
  {
    if ( v57 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
    if ( v58 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
LABEL_35:
    if ( *((_DWORD *)this + 172) == *((_DWORD *)this + 136) )
      goto LABEL_36;
    goto LABEL_81;
  }
  wil::details::in1diag3::Throw_Hr(
    retaddr,
    (void *)0x147,
    (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
    (const char *)(unsigned int)v25,
    v54);
LABEL_81:
  v50 = v56;
  v56 = 0LL;
  if ( v50 )
    (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v50 + 16LL))(v50);
  WindowWrapper::GetBatch(v1, &v56);
  v51 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 36) + 144LL))(
                    *((_QWORD *)this + 36),
                    &v58);
  v52 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v51 + 40LL))(*v51, &v57);
  v53 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v52 + 208LL))(
          *v52,
          *((unsigned int *)this + 90),
          *((unsigned int *)this + 136));
  if ( v53 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x14D,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
      (const char *)(unsigned int)v53,
      v54);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v57);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v58);
LABEL_36:
  v26 = *((unsigned int *)this + 139);
  if ( (_DWORD)v26 != *((_DWORD *)this + 175) )
    PushWindowTransparencyModeToWindow(*((int *)this + 76), v26, *((unsigned int *)this + 161));
  v27 = *((_DWORD *)this + 140);
  if ( v27 != *((_DWORD *)this + 176) )
    SetPropW((HWND)*((int *)this + 76), L"CanOpenInNewTab", (HANDLE)(v27 != 0));
  if ( v56 )
  {
    v28 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v56 + 56LL))(v56);
    if ( v28 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x15D,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v28,
        v54);
      __debugbreak();
    }
  }
  *(_OWORD *)((char *)this + 664) = *(_OWORD *)((char *)this + 520);
  *(_OWORD *)((char *)this + 680) = *(_OWORD *)((char *)this + 536);
  *((_QWORD *)this + 87) = *((_QWORD *)this + 69);
  *((_DWORD *)this + 176) = *((_DWORD *)this + 140);
  *(_OWORD *)((char *)this + 648) = *((_OWORD *)this + 31);
  if ( v56 )
    (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalBatch *))(*(_QWORD *)v56 + 16LL))(v56);
}
