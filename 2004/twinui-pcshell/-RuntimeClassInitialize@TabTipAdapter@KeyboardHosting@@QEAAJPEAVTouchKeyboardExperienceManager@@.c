/*
 * XREFs of ?RuntimeClassInitialize@TabTipAdapter@KeyboardHosting@@QEAAJPEAVTouchKeyboardExperienceManager@@@Z @ 0x180362E14
 * Callers:
 *     ??$MakeAndInitialize@VTabTipAdapter@KeyboardHosting@@V12@PEAVTouchKeyboardExperienceManager@@@Details@WRL@Microsoft@@YAJPEAPEAVTabTipAdapter@KeyboardHosting@@$$QEAPEAVTouchKeyboardExperienceManager@@@Z @ 0x180344FF8 (--$MakeAndInitialize@VTabTipAdapter@KeyboardHosting@@V12@PEAVTouchKeyboardExperienceManager@@@De.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     memset_0 @ 0x18008DF08 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180139748 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x180175CA8 (-Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ??$?0$0DC@@StringReference@Internal@Windows@@QEAA@AEAY0DC@$$CBG@Z @ 0x18035782C (--$-0$0DC@@StringReference@Internal@Windows@@QEAA@AEAY0DC@$$CBG@Z.c)
 *     ??$?0$0DD@@StringReference@Internal@Windows@@QEAA@AEAY0DD@$$CBG@Z @ 0x180357884 (--$-0$0DD@@StringReference@Internal@Windows@@QEAA@AEAY0DD@$$CBG@Z.c)
 *     ??$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTabTipAdapterPolicy@KeyboardHosting@@@Z @ 0x1803581F8 (--$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEA.c)
 *     ?AddEventHandlersFromCoreKeyboardManager@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18035B7DC (-AddEventHandlersFromCoreKeyboardManager@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@VTabTipAdapterPolicy@KeyboardHosting@@@WRL@Microsoft@@IEAAKXZ @ 0x18035E434 (-InternalRelease@-$ComPtr@VTabTipAdapterPolicy@KeyboardHosting@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z @ 0x180467F78 (-Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z.c)
 *     ?Release@SharedMessagePortRefPtr@@QEAAXXZ @ 0x180468104 (-Release@SharedMessagePortRefPtr@@QEAAXXZ.c)
 *     ?GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z @ 0x180468248 (-GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall KeyboardHosting::TabTipAdapter::RuntimeClassInitialize(
        KeyboardHosting::TabTipAdapter *this,
        struct TouchKeyboardExperienceManager *a2,
        __int64 a3,
        const char *a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  _QWORD *v8; // r15
  _QWORD *v9; // rsi
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, __int64 *); // rbx
  int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rsi
  __int64 (__fastcall *v17)(__int64, unsigned __int64, _QWORD, _QWORD, wchar_t *, _QWORD, char *); // rdi
  const unsigned __int16 (*v18)[50]; // rdx
  HSTRING v19; // rbx
  int ActivationFactory; // eax
  __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 (__fastcall *v23)(__int64, char *); // rdi
  __int64 v24; // rdx
  const unsigned __int16 *v25; // rdx
  HSTRING v26; // rbx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rbx
  __int64 (__fastcall *v30)(__int64, char *); // rsi
  __int64 v31; // rsi
  __int64 (__fastcall *v32)(__int64, int (*)(void *), KeyboardHosting::TabTipAdapter *, char *); // rdi
  __int64 v34; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v35; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v39; // [rsp+70h] [rbp-98h] BYREF
  HSTRING string[5]; // [rsp+80h] [rbp-88h] BYREF
  wchar_t v41[256]; // [rsp+A8h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2D0h] [rbp+1C8h]

  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      91LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      a4);
    __debugbreak();
  }
  LODWORD(v34) = 0;
  v39 = 0LL;
  *((_QWORD *)this + 8) = a2;
  Microsoft::WRL::ComPtr<KeyboardHosting::TabTipAdapterPolicy>::InternalRelease((__int64 *)this + 13);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<KeyboardHosting::TabTipAdapterPolicy,KeyboardHosting::TabTipAdapterPolicy,>((volatile signed __int64 **)this + 13);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = (_QWORD *)((char *)this + 88);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 11);
    v5 = CoreUICreate((char *)this + 88);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 100LL;
      goto LABEL_13;
    }
    v9 = (_QWORD *)((char *)this + 72);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 9);
    v5 = CoreUIFactoryCreate((char *)this + 72);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 101LL;
      goto LABEL_13;
    }
    v5 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(*(_QWORD *)*v9 + 24LL))(
           *v9,
           &GUID_8b1dca19_456d_4f77_b1e3_0e88328842f9,
           &v34);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 105LL;
      goto LABEL_13;
    }
    v5 = SharedMessagePortRefPtr::Initialize(&v39);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 107LL;
      goto LABEL_13;
    }
    memset_0(v41, 0, 0x1FEuLL);
    GetDesktopUniqueName(L"System\\RemoteTabTipAdapter", v41, 0xFFu);
    v35 = 0LL;
    v10 = *v8;
    v11 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v8 + 24LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
    v12 = v11(v10, &v35);
    v6 = v12;
    if ( v12 < 0 )
    {
      v13 = 114LL;
LABEL_25:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v12);
LABEL_45:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
      goto LABEL_46;
    }
    v36 = 0LL;
    if ( (*(int (__fastcall **)(__int64, wchar_t *, __int64, __int64 *))(*(_QWORD *)v35 + 24LL))(v35, v41, 1LL, &v36) >= 0
      && v36 )
    {
      wil::details::in1diag3::Log_IfFailedMsg(
        retaddr,
        119LL,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)0x8000FFFFLL,
        (int)"Endpoint %ls is already exists",
        (const char *)v41);
      v14 = (*(__int64 (__fastcall **)(__int64, wchar_t *, __int64))(*(_QWORD *)v35 + 48LL))(v35, v41, 1LL);
      if ( v14 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x78,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v14);
      v15 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v8 + 160LL))(*v8, v36);
      if ( v15 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x79,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v15);
      v36 = 0LL;
    }
    v16 = *v9;
    v17 = *(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD, _QWORD, wchar_t *, _QWORD, char *))(*(_QWORD *)v16 + 32LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 10);
    v12 = v17(
            v16,
            ((unsigned __int64)this + 8) & -(__int64)(this != 0LL),
            0LL,
            (unsigned int)v34,
            v41,
            *((_QWORD *)&v39 + 1),
            (char *)this + 80);
    v6 = v12;
    if ( v12 < 0 )
    {
      v13 = 131LL;
      goto LABEL_25;
    }
    SharedMessagePortRefPtr::Release((SharedMessagePortRefPtr *)&v39);
    v38 = 0LL;
    v19 = *Windows::Internal::StringReference::StringReference(string, v18);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v38);
    ActivationFactory = RoGetActivationFactory(v19, &GUID_4781e102_173f_40ee_b985_685f98a866aa, &v38);
    v6 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      v21 = 138LL;
LABEL_34:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v21,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)ActivationFactory);
LABEL_44:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v38);
      goto LABEL_45;
    }
    v22 = v38;
    v23 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v38 + 48LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 3);
    ActivationFactory = v23(v22, (char *)this + 24);
    v6 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      v21 = 139LL;
      goto LABEL_34;
    }
    ActivationFactory = KeyboardHosting::TabTipAdapter::AddEventHandlersFromCoreKeyboardManager(this);
    v6 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      v21 = 140LL;
      goto LABEL_34;
    }
    LOBYTE(v24) = 1;
    ActivationFactory = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 3) + 544LL))(
                          *((_QWORD *)this + 3),
                          v24,
                          0LL);
    v6 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      v21 = 142LL;
      goto LABEL_34;
    }
    v37 = 0LL;
    v26 = *Windows::Internal::StringReference::StringReference(string, (const unsigned __int16 (*)[51])v25);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v37);
    v27 = RoGetActivationFactory(v26, &GUID_6fa49ca9_046b_4d5c_b942_7dbc066f6579, &v37);
    v6 = v27;
    if ( v27 >= 0 )
    {
      v29 = v37;
      v30 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v37 + 48LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 5);
      v27 = v30(v29, (char *)this + 40);
      v6 = v27;
      if ( v27 >= 0 )
      {
        v31 = *v8;
        v32 = *(__int64 (__fastcall **)(__int64, int (*)(void *), KeyboardHosting::TabTipAdapter *, char *))(*(_QWORD *)*v8 + 136LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 12);
        v27 = v32(v31, KeyboardHosting::TabTipAdapter::TimerDeferredShowRequestCallback, this, (char *)this + 96);
        v6 = v27;
        if ( v27 >= 0 )
        {
          v6 = 0;
          goto LABEL_43;
        }
        v28 = 154LL;
      }
      else
      {
        v28 = 149LL;
      }
    }
    else
    {
      v28 = 148LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v28,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v27);
LABEL_43:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v37);
    goto LABEL_44;
  }
  v7 = 98LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v5);
LABEL_46:
  SharedMessagePortRefPtr::Release((SharedMessagePortRefPtr *)&v39);
  return v6;
}
