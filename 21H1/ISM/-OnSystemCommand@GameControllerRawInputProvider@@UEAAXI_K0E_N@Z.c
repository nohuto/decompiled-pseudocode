/*
 * XREFs of ?OnSystemCommand@GameControllerRawInputProvider@@UEAAXI_K0E_N@Z @ 0x180089070
 * Callers:
 *     <none>
 * Callees:
 *     ??B?$unique_ptr@VMPCSpatialGestureRecognizerHandler@@U?$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@@std@@QEBA_NXZ @ 0x180018610 (--B-$unique_ptr@VMPCSpatialGestureRecognizerHandler@@U-$default_delete@VMPCSpatialGestureRecogni.c)
 *     memset_0 @ 0x18003C460 (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D280 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??9details_abi@wil@@YA_NAEBV?$heap_vector_iterator@UCachedFeaturePropertyData@EnabledStateManager@details@wil@@@01@0@Z @ 0x18003DC5C (--9details_abi@wil@@YA_NAEBV-$heap_vector_iterator@UCachedFeaturePropertyData@EnabledStateManage.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FAC8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@UShellButtonListEntry@GameControllerRawInputProvider@@U?$default_delete@UShellButtonListEntry@GameControllerRawInputProvider@@@std@@@std@@QEAA@XZ @ 0x180041100 (--1-$unique_ptr@UShellButtonListEntry@GameControllerRawInputProvider@@U-$default_delete@UShellBu.c)
 *     ??4?$com_ptr_t@UIRawInputClient@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x180041120 (--4-$com_ptr_t@UIRawInputClient@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??I?$com_ptr_t@UIMessageTimer@@Uerr_exception_policy@wil@@@wil@@QEAAPEAPEAUIMessageTimer@@XZ @ 0x180041174 (--I-$com_ptr_t@UIMessageTimer@@Uerr_exception_policy@wil@@@wil@@QEAAPEAPEAUIMessageTimer@@XZ.c)
 *     ??_GShellButtonListEntry@GameControllerRawInputProvider@@QEAAPEAXI@Z @ 0x1800411A8 (--_GShellButtonListEntry@GameControllerRawInputProvider@@QEAAPEAXI@Z.c)
 *     ?PushBack@?$NtList@UShellButtonListEntry@GameControllerRawInputProvider@@@@QEAAXPEAUShellButtonListEntry@GameControllerRawInputProvider@@@Z @ 0x1800411F0 (-PushBack@-$NtList@UShellButtonListEntry@GameControllerRawInputProvider@@@@QEAAXPEAUShellButtonL.c)
 *     ?RemoveAt@?$NtList@UShellButtonListEntry@GameControllerRawInputProvider@@@@QEAAPEAUShellButtonListEntry@GameControllerRawInputProvider@@PEAU23@@Z @ 0x18004121C (-RemoveAt@-$NtList@UShellButtonListEntry@GameControllerRawInputProvider@@@@QEAAPEAUShellButtonLi.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?SetTimestampsFromInput@GameControllerRawInputProvider@@AEAAX_KPEAUInputInfo@@@Z @ 0x180089554 (-SetTimestampsFromInput@GameControllerRawInputProvider@@AEAAX_KPEAUInputInfo@@@Z.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008961C (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall GameControllerRawInputProvider::OnSystemCommand(
        GameControllerRawInputProvider *this,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int8 a5,
        bool a6)
{
  int v8; // edi
  int v10; // ebp
  char *v11; // rsi
  _QWORD *v12; // rbx
  _QWORD *v13; // rdi
  _QWORD *v14; // rcx
  GameControllerRawInputProvider::ShellButtonListEntry *v15; // rax
  _DWORD *v16; // rax
  unsigned int v17; // r8d
  const char *v18; // r9
  _DWORD *v19; // rbx
  int v20; // eax
  __int64 *v21; // rax
  unsigned int v22; // r8d
  const char *v23; // r9
  __int64 *v24; // rsi
  unsigned int v25; // edx
  __int64 v26; // rdi
  __int64 (__fastcall *v27)(__int64, __int64 (__fastcall *)(_DWORD *), __int64 *, __int64 *); // rbx
  __int64 *v28; // rax
  int v29; // eax
  __int64 v30; // rdx
  _QWORD *v31; // [rsp+30h] [rbp-38h] BYREF
  GameControllerRawInputProvider::ShellButtonListEntry *v32; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v8 = a2;
  v10 = a5 + 45;
  if ( !a6 )
  {
    v11 = (char *)this + 88;
    v12 = (_QWORD *)*((_QWORD *)this + 11);
    v31 = v12;
    v32 = (GameControllerRawInputProvider *)((char *)this + 88);
    if ( wil::details_abi::operator!=(&v31, &v32) )
    {
      v13 = v12;
      do
      {
        if ( *((_DWORD *)v13 + 8) == v10 )
        {
          if ( std::unique_ptr<MPCSpatialGestureRecognizerHandler>::operator bool(v13 + 3) )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v14 + 96LL))(*v14);
          v15 = (GameControllerRawInputProvider::ShellButtonListEntry *)NtList<GameControllerRawInputProvider::ShellButtonListEntry>::RemoveAt(
                                                                          (__int64)v11,
                                                                          v13);
          if ( v15 )
            GameControllerRawInputProvider::ShellButtonListEntry::`scalar deleting destructor'(v15);
        }
        v13 = (_QWORD *)*v12;
        v12 = (_QWORD *)*v12;
        v31 = v12;
      }
      while ( wil::details_abi::operator!=(&v31, &v32) );
      v8 = a2;
    }
  }
  v16 = operator new(0x7F0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v19 = v16;
  if ( v16 )
  {
    memset_0(v16, 0, 0x7F0uLL);
    v19[6] = 2032;
  }
  else
  {
    v19 = 0LL;
  }
  if ( !v19 )
  {
    wil::details::in1diag3::_Log_NullAlloc(retaddr, (void *)0x20A, v17, v18);
    return;
  }
  *v19 = 128;
  v19[1] = v8;
  *((_QWORD *)v19 + 4) = a3;
  v19[16] = v10;
  *((_BYTE *)v19 + 68) = a6;
  GameControllerRawInputProvider::SetTimestampsFromInput(
    (GameControllerRawInputProvider *)((char *)this - 16),
    a4,
    (struct InputInfo *)v19);
  v20 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *), _DWORD *, __int64))(**((_QWORD **)this + 4)
                                                                                             + 144LL))(
          *((_QWORD *)this + 4),
          GameControllerRawInputProvider::InputReportCallback,
          v19,
          4LL);
  if ( v20 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      533LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawinputprovider.cpp",
      (const char *)(unsigned int)v20);
    operator delete(v19, (const struct std::nothrow_t *)0x7F0);
    return;
  }
  if ( a6 )
  {
    v21 = (__int64 *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
    v24 = v21;
    if ( v21 )
    {
      *v21 = 0LL;
      v21[1] = 0LL;
      v21[4] = 0LL;
      v21[5] = 0LL;
      v21[2] = 0LL;
      v21[3] = 0LL;
    }
    else
    {
      v24 = 0LL;
    }
    v32 = (GameControllerRawInputProvider::ShellButtonListEntry *)v24;
    if ( !v24 )
    {
      wil::details::in1diag3::_Log_NullAlloc(retaddr, (void *)0x222, v22, v23);
LABEL_30:
      std::unique_ptr<GameControllerRawInputProvider::ShellButtonListEntry>::~unique_ptr<GameControllerRawInputProvider::ShellButtonListEntry>(
        &v32,
        v25);
      return;
    }
    wil::com_ptr_t<IRawInputClient,wil::err_exception_policy>::operator=(v24 + 2, (__int64 *)this + 3);
    *((_DWORD *)v24 + 8) = v10;
    *((_DWORD *)v24 + 9) = v8;
    v24[5] = a3;
    v26 = *((_QWORD *)this + 4);
    v27 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(_DWORD *), __int64 *, __int64 *))(*(_QWORD *)v26 + 136LL);
    v28 = wil::com_ptr_t<IMessageTimer,wil::err_exception_policy>::operator&(v24 + 3);
    v29 = v27(v26, GameControllerRawInputProvider::ShellButtonRepeatCallback, v24, v28);
    if ( v29 >= 0 )
    {
      v29 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v24[3] + 80LL))(
              v24[3],
              250000LL,
              250000LL);
      if ( v29 >= 0 )
      {
LABEL_29:
        v32 = 0LL;
        NtList<GameControllerRawInputProvider::ShellButtonListEntry>::PushBack((__int64)this + 88, v24);
        goto LABEL_30;
      }
      v30 = 560LL;
    }
    else
    {
      v30 = 556LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      v30,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawinputprovider.cpp",
      (const char *)(unsigned int)v29);
    goto LABEL_29;
  }
}
