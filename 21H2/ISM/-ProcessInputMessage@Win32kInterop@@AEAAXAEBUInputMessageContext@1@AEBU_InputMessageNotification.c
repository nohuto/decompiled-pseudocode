/*
 * XREFs of ?ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification@@_N2@Z @ 0x1800B14BC
 * Callers:
 *     ?ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x1800B2044 (-ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AE40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000EDF8 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z @ 0x1800234E8 (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z.c)
 *     ?Create@KeyboardModifierState@@SAJPEAPEAV1@@Z @ 0x180023BDC (-Create@KeyboardModifierState@@SAJPEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800372E0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?CopyFrom@?$VariableSizedPayloadStorage@UInputInfo@@@@QEAAAEAU1@PEBUInputInfo@@@Z @ 0x1800AF454 (-CopyFrom@-$VariableSizedPayloadStorage@UInputInfo@@@@QEAAAEAU1@PEBUInputInfo@@@Z.c)
 *     ?DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V?$function@$$A6AXPEAVInputContext@@@Z@std@@V?$function@$$A6AXPEAUIInputTarget@@@Z@4@@Z @ 0x1800B0040 (-DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V-$function@$$A6AXPEAVInputCon.c)
 *     ?DropMouseInput@ISM@InputTraceLogging@@SAXAEBU_InputMessageNotification@@@Z @ 0x1800B06BC (-DropMouseInput@ISM@InputTraceLogging@@SAXAEBU_InputMessageNotification@@@Z.c)
 *     ?GenerateMouseLeaveEventMessage@Win32kInterop@@AEBAXAEBV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@Z @ 0x1800B07A4 (-GenerateMouseLeaveEventMessage@Win32kInterop@@AEBAXAEBV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@.c)
 *     ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x1800B0B9C (-IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z.c)
 *     ?IsIdentityTransform@CInputTransform@@SA_NAEBUtagINPUT_TRANSFORM@@@Z @ 0x1800B0CD4 (-IsIdentityTransform@CInputTransform@@SA_NAEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?ReceiveMouseInput@ISM@InputTraceLogging@@SAXAEBU_InputMessageNotification@@@Z @ 0x1800B25A4 (-ReceiveMouseInput@ISM@InputTraceLogging@@SAXAEBU_InputMessageNotification@@@Z.c)
 *     ?ReceivedInputMessage@Win32kInterop@InputETW@@SAXK@Z @ 0x1800B27B0 (-ReceivedInputMessage@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_KeyboardInputInMinQueue@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B28F8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_KeyboardInputInMinQueue@@@details@wil@@QE.c)
 *     ?GetCurrentKeyboardModifierState@KeyboardModifierState@@QEAAJPEAK@Z @ 0x180136D54 (-GetCurrentKeyboardModifierState@KeyboardModifierState@@QEAAJPEAK@Z.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall Win32kInterop::ProcessInputMessage(
        Win32kInterop *this,
        const struct Win32kInterop::InputMessageContext *a2,
        const struct _InputMessageNotification *a3,
        char a4,
        bool a5)
{
  __int64 (__fastcall *v7)(__int64, __int64 *); // rbx
  unsigned int v8; // r12d
  __int64 v9; // r8
  const char *v10; // r9
  __int64 v11; // rsi
  _DWORD *v12; // rdi
  int *v13; // rax
  int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 (__fastcall *v17)(__int64, __int64 *); // rsi
  int v18; // eax
  __int64 (__fastcall *v19)(__int64, _QWORD, __int64, __int64 *); // rsi
  int v20; // eax
  int v21; // eax
  struct KeyboardModifierState *v22; // rbx
  int v23; // ecx
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  char v27; // al
  int v28; // edx
  __int16 v29; // cx
  __int64 v30; // rdx
  int *v31; // r8
  __int16 v32; // r9
  __int64 v33; // rax
  __int16 v34; // ax
  char v35; // r13
  __int64 v36; // rdi
  int v37; // eax
  __int64 v38; // rsi
  __int64 (__fastcall *v39)(__int64, __int128 *); // rdi
  int v40; // eax
  int v41; // eax
  const struct std::nothrow_t *v42; // rdx
  int *v43; // [rsp+30h] [rbp-D0h] BYREF
  char v44; // [rsp+38h] [rbp-C8h]
  __int64 (__fastcall ***v45)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-C0h] BYREF
  __int64 v46; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v47[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v48; // [rsp+60h] [rbp-A0h] BYREF
  __int64 (__fastcall ****v49)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp-90h]
  struct KeyboardModifierState *v50; // [rsp+80h] [rbp-80h] BYREF
  void *v51; // [rsp+88h] [rbp-78h] BYREF
  __int64 (__fastcall **v52)(); // [rsp+90h] [rbp-70h] BYREF
  __int128 v53; // [rsp+98h] [rbp-68h]
  __int64 (__fastcall ****v54)(_QWORD, GUID *, __int64 *); // [rsp+A8h] [rbp-58h]
  __int64 (__fastcall ***v55)(); // [rsp+C8h] [rbp-38h]
  __int64 (__fastcall **v56)(); // [rsp+D0h] [rbp-30h] BYREF
  __int128 v57; // [rsp+D8h] [rbp-28h]
  __int64 (__fastcall ***v58)(); // [rsp+108h] [rbp+8h]
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v44 = a4;
  if ( *(_DWORD *)a2 )
    return;
  v7 = (__int64 (__fastcall *)(__int64, __int64 *))*((_QWORD *)a2 + 1);
  v8 = *((_DWORD *)a3 + 38);
  InputETW::Win32kInterop::ReceivedInputMessage(v8);
  InputTraceLogging::ISM::ReceiveMouseInput(a3);
  LODWORD(v11) = 1;
  if ( v8 )
    goto LABEL_8;
  v8 = -1;
  while ( 1 )
  {
    VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>(&v51, 0x168uLL, v9, v10);
    v12 = v51;
    v43 = (int *)v51;
    *(_DWORD *)v51 = 2;
    v43[1] = v8;
    v43[2] = *((_DWORD *)a3 + 34);
    *((_QWORD *)v43 + 2) = *((_QWORD *)a3 + 18);
    *((_QWORD *)v43 + 25) = v7;
    *((_BYTE *)v43 + 208) = a5;
    v43[53] = v11;
    v13 = v43;
    *(_OWORD *)(v43 + 33) = *(_OWORD *)((char *)a3 + 168);
    *(_OWORD *)(v13 + 37) = *(_OWORD *)((char *)a3 + 184);
    *(_OWORD *)(v13 + 41) = *(_OWORD *)((char *)a3 + 200);
    *(_OWORD *)(v13 + 45) = *(_OWORD *)((char *)a3 + 216);
    *((_QWORD *)v43 + 8) = *((_QWORD *)a3 + 3);
    v43[18] = v11 & *((_DWORD *)a3 + 4);
    if ( ((unsigned __int8)v11 & *((_BYTE *)a3 + 232)) != 0 )
    {
      v43[19] = v11;
      v43[20] = 100;
      v43[21] = 100;
    }
    v47[0] = 0LL;
    v11 = *((_QWORD *)this + 6);
    v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 72LL);
    Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(v47);
    v14 = v7(v11, v47);
    if ( v14 >= 0 )
      break;
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1165LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v14);
LABEL_8:
    if ( v8 != -1 && !Win32kInterop::IsDeviceAttached(this, v8, v11) )
    {
      InputTraceLogging::ISM::DropMouseInput(a3);
      return;
    }
  }
  v46 = 0LL;
  v15 = v47[0];
  v16 = *(_QWORD *)v47[0];
  if ( v8 == -1 )
  {
    v17 = *(__int64 (__fastcall **)(__int64, __int64 *))(v16 + 40);
    Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v46);
    v18 = v17(v15, &v46);
    if ( v18 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1170LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v18);
      __debugbreak();
    }
  }
  else
  {
    v19 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(v16 + 56);
    Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v46);
    v20 = v19(v15, v8, 1LL, &v46);
    if ( v20 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1174LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v20);
      __debugbreak();
    }
  }
  *((_QWORD *)v43 + 7) = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, struct KeyboardModifierState **))(*(_QWORD *)v46 + 40LL))(
                                      v46,
                                      &v50);
  v50 = 0LL;
  v21 = KeyboardModifierState::Create(&v50);
  if ( v21 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1197LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v21);
    __debugbreak();
  }
  v22 = v50;
  KeyboardModifierState::GetCurrentKeyboardModifierState(v50, (unsigned int *)v43 + 32);
  v12[55] = 1;
  v12[57] = 2;
  v23 = *((__int16 *)a3 + 64);
  v12[66] = v23;
  v24 = *((__int16 *)a3 + 65);
  v12[67] = v24;
  v12[62] = v23;
  v12[63] = v24;
  v25 = *((_DWORD *)a3 + 40);
  v12[68] = v25;
  v26 = *((_DWORD *)a3 + 41);
  v12[69] = v26;
  v12[64] = v25;
  v12[65] = v26;
  v12[54] = 4;
  v12[70] = v43[2];
  *((_QWORD *)v12 + 37) = *((_QWORD *)v43 + 2);
  *((_QWORD *)v12 + 29) = (unsigned int)v43[1];
  v27 = 0;
  v28 = 2;
  if ( *((_QWORD *)a3 + 15) )
  {
    v29 = *((_WORD *)a3 + 60);
    if ( (v29 & 1) != 0 )
    {
      v28 = 18;
      v12[57] = 18;
      v27 = 1;
    }
    if ( (v29 & 2) != 0 )
    {
      v28 |= 0x20u;
      v12[57] = v28;
      v27 = 1;
    }
    if ( (v29 & 0x10) != 0 )
    {
      v28 |= 0x40u;
      v12[57] = v28;
      v27 = 1;
    }
    if ( (v29 & 0x20) != 0 )
    {
      v28 |= 0x80u;
      v12[57] = v28;
      v27 = 1;
    }
    if ( (v29 & 0x40) != 0 )
    {
      v28 |= 0x100u;
      v12[57] = v28;
      v27 = 1;
    }
  }
  if ( v27 )
    v12[57] = v28 | 4;
  if ( !CInputTransform::IsIdentityTransform((const struct tagINPUT_TRANSFORM *)(v43 + 33)) )
  {
    LODWORD(v30) = v30 | 0x400000;
    v12[57] = v30;
    v31 = v43;
  }
  v33 = (unsigned int)(*((_DWORD *)a3 + 28) - 512);
  if ( (unsigned int)v33 <= 0xE )
  {
    *((_WORD *)v31 + 98) = word_1801D66B0[v33];
    v31 = v43;
    v34 = *((_WORD *)v43 + 98);
    if ( (v34 & 0xC0) != 0 && *((_WORD *)a3 + 61) == v32 )
    {
      *((_WORD *)v43 + 98) = 4 * v34;
      v31 = v43;
    }
  }
  if ( ((*((_DWORD *)a3 + 28) - 522) & 0xFFFFFFFB) == 0 )
    *((_WORD *)v31 + 99) = *((_WORD *)a3 + 61);
  v35 = v44;
  if ( !v44 )
  {
    LOBYTE(v30) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_KeyboardInputInMinQueue>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_KeyboardInputInMinQueue>::GetImpl'::`2'::impl,
      v30,
      v31);
  }
  v45 = 0LL;
  (*(void (__fastcall **)(_QWORD, const struct _InputMessageNotification *, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(**((_QWORD **)this + 6) + 88LL))(
    *((_QWORD *)this + 6),
    a3,
    *((_QWORD *)this + 33),
    &v45);
  if ( v45 != *((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 33) )
  {
    if ( *((_QWORD *)this + 33) )
    {
      v36 = *((_QWORD *)this + 34);
      *(_DWORD *)(v36 + 228) = 0;
      v37 = 0;
      if ( (v43[57] & 0x8000) != 0 )
        v37 = 0x8000;
      *(_DWORD *)(v36 + 228) = v37;
      if ( *((_BYTE *)this + 280) )
        *(_DWORD *)v36 = 0x1000000;
      if ( *(_BYTE *)(v36 + 208) )
      {
        Win32kInterop::GenerateMouseLeaveEventMessage((__int64)this, &v45);
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 33) + 24LL))(*((_QWORD *)this + 33), v36);
      }
    }
    *((_BYTE *)this + 281) = 1;
    goto LABEL_51;
  }
  if ( *((_BYTE *)this + 281) )
  {
LABEL_51:
    *(_QWORD *)&v48 = 0LL;
    v38 = *((_QWORD *)this + 6);
    v39 = *(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v38 + 72LL);
    Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)&v48);
    v40 = v39(v38, &v48);
    if ( v40 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1479LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v40);
      __debugbreak();
    }
    v41 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v48 + 32LL))(v48, v43 + 14);
    if ( v41 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1480LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v41);
      __debugbreak();
    }
    *((_BYTE *)this + 281) = 0;
    Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)&v48);
  }
  VariableSizedPayloadStorage<InputInfo>::CopyFrom((__int64)this + 272, v43);
  *((_BYTE *)this + 280) = v35;
  if ( v35 )
  {
    *v43 = 0x1000000;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), int *))(*v45)[3])(v45, v43);
  }
  else
  {
    *(_QWORD *)&v48 = this;
    *((_QWORD *)&v48 + 1) = &v43;
    v49 = &v45;
    v52 = off_1801B1648;
    v53 = v48;
    v54 = &v45;
    v55 = &v52;
    *(_QWORD *)&v48 = &v45;
    *((_QWORD *)&v48 + 1) = a3;
    v56 = off_1801B15E8;
    v57 = v48;
    v58 = &v56;
    Win32kInterop::DeliverToContextualProcessing((__int64)this, v43, (__int64)&v56, (__int64)&v52);
  }
  Microsoft::WRL::ComPtr<IInputTarget>::operator=((__int64 *)this + 33, (__int64 *)&v45);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v45);
  if ( v22 )
    (*(void (__fastcall **)(struct KeyboardModifierState *))(*(_QWORD *)v22 + 16LL))(v22);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v46);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(v47);
  if ( v51 )
    operator delete(v51, v42);
}
