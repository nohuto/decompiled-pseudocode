/*
 * XREFs of ?OnFocusedThreadChanged@DWMInputRouter@@IEAAXPEBU_MIT_INPUT_FOCUS_MESSAGE@@@Z @ 0x1800148F0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_be1afa1ad46a34c97b71e3333d61116f__void__MIT_INPUT_FOCUS_MESSAGE_const___::_Do_call @ 0x180013E80 (std--_Func_impl_no_alloc__lambda_be1afa1ad46a34c97b71e3333d61116f__void__MIT_INPUT_FOCUS_MESSAGE.c)
 *     ?OnFocusedThreadChangedStatic@DWMInputRouter@@KAJPEAXPEBXH@Z @ 0x1800148C0 (-OnFocusedThreadChangedStatic@DWMInputRouter@@KAJPEAXPEBXH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@DWMFocusedInputTarget@@SAJPEAUIInputTarget@@KKK_KKKPEAPEAU2@@Z @ 0x180028344 (-Create@DWMFocusedInputTarget@@SAJPEAUIInputTarget@@KKK_KKKPEAPEAU2@@Z.c)
 *     ?Create@InputSystemServerConnection@@SA?AV?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x180030EC8 (-Create@InputSystemServerConnection@@SA-AV-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180033548 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180037660 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FA98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall DWMInputRouter::OnFocusedThreadChanged(DWMInputRouter *this, const struct _MIT_INPUT_FOCUS_MESSAGE *a2)
{
  int v4; // r15d
  int v5; // esi
  struct InputSystemServerConnection *v6; // rbx
  _QWORD *v7; // rbx
  __int64 v8; // rax
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rcx
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  bool v19; // bl
  __int64 v20; // rcx
  unsigned int v21; // r12d
  unsigned int v22; // r13d
  int v23; // r15d
  __int64 **v24; // rcx
  __int64 *i; // rax
  struct IInputTarget *v26; // rdi
  struct IInputTarget *v27; // rbx
  _QWORD *v28; // rax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  struct InputSystemServerConnection **v33; // rax
  struct InputSystemServerConnection *v34; // rcx
  Microsoft::Bamo::BaseBamoConnection *v35; // rcx
  int v36; // [rsp+20h] [rbp-59h]
  __int64 v37; // [rsp+40h] [rbp-39h] BYREF
  int v38; // [rsp+48h] [rbp-31h] BYREF
  int v39; // [rsp+4Ch] [rbp-2Dh] BYREF
  int v40; // [rsp+50h] [rbp-29h] BYREF
  unsigned int v41; // [rsp+54h] [rbp-25h]
  unsigned int v42; // [rsp+58h] [rbp-21h]
  unsigned int v43; // [rsp+5Ch] [rbp-1Dh]
  struct IInputTarget *v44; // [rsp+60h] [rbp-19h] BYREF
  __int64 v45; // [rsp+68h] [rbp-11h] BYREF
  Microsoft::Bamo::BaseBamoConnection *v46; // [rsp+70h] [rbp-9h] BYREF
  __int64 v47; // [rsp+78h] [rbp-1h] BYREF
  unsigned __int64 v48; // [rsp+80h] [rbp+7h]
  struct IInputTarget *v49; // [rsp+88h] [rbp+Fh] BYREF
  _QWORD *v50; // [rsp+90h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  int v52; // [rsp+E8h] [rbp+6Fh] BYREF
  int v53; // [rsp+F0h] [rbp+77h] BYREF
  int v54; // [rsp+F8h] [rbp+7Fh] BYREF

  v4 = *(_DWORD *)a2;
  v5 = 0;
  v6 = ISMStatics::s_inputSystemBamoConnection;
  if ( ISMStatics::s_inputSystemBamoConnection )
    goto LABEL_2;
  v45 = 0LL;
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v45);
  v32 = CoreUICreate(&v45);
  if ( v32 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3B,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismstatics.cpp",
      (const char *)(unsigned int)v32,
      v36);
    __debugbreak();
  }
  v33 = (struct InputSystemServerConnection **)InputSystemServerConnection::Create((unsigned int)&v46);
  v34 = *v33;
  *v33 = 0LL;
  ISMStatics::s_inputSystemBamoConnection = v34;
  v35 = v46;
  if ( v46 )
  {
    v46 = 0LL;
    Microsoft::Bamo::BaseBamoConnection::Release(v35);
  }
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v45);
  v6 = ISMStatics::s_inputSystemBamoConnection;
  if ( ISMStatics::s_inputSystemBamoConnection )
  {
LABEL_2:
    v7 = (_QWORD *)*((_QWORD *)v6 + 23);
    v50 = v7;
    if ( v7 )
    {
      (*(void (__fastcall **)(_QWORD *))*v7)(v7);
      v8 = (*(__int64 (__fastcall **)(_QWORD *))(v7[1] + 184LL))(v7 + 1);
      if ( v8 )
        *(_DWORD *)(v8 + 192) = v4;
    }
    if ( v7 )
    {
      v50 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v7 + 8LL))(v7);
    }
  }
  v9 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 34);
  if ( !*(_DWORD *)a2 )
  {
    if ( !v9 )
      return;
    v30 = (*(__int64 (__fastcall **)(DWMInputRouter *, _QWORD))(*(_QWORD *)this + 96LL))(this, 0LL);
    if ( v30 >= 0 )
      return;
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x717,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v30,
      v36);
    goto LABEL_55;
  }
  if ( !v9 )
  {
LABEL_24:
    v44 = 0LL;
    v21 = *((_DWORD *)a2 + 8);
    v22 = *((_DWORD *)a2 + 7);
    v48 = *((_QWORD *)a2 + 2);
    v43 = *((_DWORD *)a2 + 6);
    v42 = *((_DWORD *)a2 + 2);
    v41 = *((_DWORD *)a2 + 1);
    v23 = *(_DWORD *)a2;
    v24 = (__int64 **)*((_QWORD *)this + 11);
    for ( i = *v24; ; i = (__int64 *)*i )
    {
      if ( i == (__int64 *)v24 )
      {
        v26 = 0LL;
        goto LABEL_29;
      }
      if ( *((_DWORD *)i + 4) == v23 )
        break;
    }
    v26 = (struct IInputTarget *)i[7];
LABEL_29:
    v49 = v26;
    if ( v26 )
    {
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v26 + 8LL))(v26);
      v31 = DWMFocusedInputTarget::Create(v26, v41, v42, v43, v48, v22, v21, &v44);
      if ( v31 >= 0 )
      {
        v27 = v44;
        goto LABEL_34;
      }
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3A8,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v31,
        v36);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v49);
      v27 = v44;
    }
    else
    {
      v27 = 0LL;
      v44 = 0LL;
      v28 = malloc(0x48uLL);
      if ( v28 )
      {
        *v28 = 0LL;
        v28[1] = 0LL;
        v28[2] = 0LL;
        v28[4] = 0LL;
        v28[5] = 0LL;
        v28[6] = 0LL;
        v28[7] = 0LL;
        v28[8] = 0LL;
        v28[3] = &RefCountedObject::`vftable';
        *((_DWORD *)v28 + 8) = 1;
        *v28 = &DWMLegacyInputTarget::`vftable'{for `IInputTarget'};
        v28[1] = &DWMLegacyInputTarget::`vftable'{for `IInputTarget2'};
        v28[2] = &DWMLegacyInputTarget::`vftable'{for `IFocusInputTarget'};
        v28[3] = &DWMLegacyInputTarget::`vftable'{for `RefCountedObject'};
        *((_DWORD *)v28 + 10) = v23;
        *((_DWORD *)v28 + 11) = v41;
        *((_DWORD *)v28 + 12) = v42;
        *((_DWORD *)v28 + 13) = v43;
        v28[7] = v48;
        *((_DWORD *)v28 + 16) = v22;
        *((_DWORD *)v28 + 17) = v21;
        v27 = (struct IInputTarget *)v28;
        v44 = (struct IInputTarget *)v28;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x43,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwmlegacyinputtarget.cpp",
          (const char *)0x8007000ELL,
          v36);
        v5 = -2147024882;
      }
      if ( v5 >= 0 )
      {
LABEL_34:
        if ( v26 )
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v26 + 16LL))(v26);
        goto LABEL_36;
      }
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3B4,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v5,
        v36);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v49);
    }
LABEL_36:
    v29 = (*(__int64 (__fastcall **)(DWMInputRouter *, struct IInputTarget *))(*(_QWORD *)this + 96LL))(this, v27);
    if ( v29 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x74F,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v29,
        v36);
      __debugbreak();
    }
    if ( v27 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v27 + 16LL))(v27);
    return;
  }
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v38 = 0;
  v47 = 0LL;
  v39 = 0;
  v40 = 0;
  v37 = 0LL;
  v10 = (**v9)(v9, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v37);
  v11 = retaddr;
  if ( v10 < 0 )
  {
LABEL_55:
    wil::details::in1diag3::FailFast_Hr(
      v11,
      (void *)0x72C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v10,
      v36);
    __debugbreak();
  }
  v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v37 + 32LL))(v37, &v52);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x72E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v12,
      v36);
    __debugbreak();
  }
  v13 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v37 + 40LL))(v37, &v53);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x72F,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v13,
      v36);
    __debugbreak();
  }
  v14 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v37 + 48LL))(v37, &v54);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x730,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v14,
      v36);
    __debugbreak();
  }
  v15 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v37 + 56LL))(v37, &v38);
  if ( v15 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x731,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v15,
      v36);
    __debugbreak();
  }
  v16 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v37 + 64LL))(v37, &v47);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x732,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v16,
      v36);
    __debugbreak();
  }
  v17 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v37 + 72LL))(v37, &v39);
  if ( v17 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x733,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v17,
      v36);
    __debugbreak();
  }
  v18 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v37 + 80LL))(v37, &v40);
  if ( v18 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x734,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v18,
      v36);
    __debugbreak();
  }
  v19 = *(_DWORD *)a2 == v52
     && *((_DWORD *)a2 + 1) == v53
     && *((_DWORD *)a2 + 2) == v54
     && *((_DWORD *)a2 + 6) == v38
     && *((_QWORD *)a2 + 2) == v47
     && *((_DWORD *)a2 + 7) == v39
     && *((_DWORD *)a2 + 8) == v40;
  v20 = v37;
  if ( v37 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  if ( !v19 )
    goto LABEL_24;
}
