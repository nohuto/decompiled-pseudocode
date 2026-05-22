/*
 * XREFs of ?UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z @ 0x18017B214
 * Callers:
 *     ?OnHitTest@EdgyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180177C60 (-OnHitTest@EdgyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitial.c)
 *     ?Initialize@EdgyProcessorTarget@@IEAAJAEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX@Z @ 0x18017A46C (-Initialize@EdgyProcessorTarget@@IEAAJAEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX@Z.c)
 * Callees:
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180004B28 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000F088 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180011C88 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUIInputTarget@@@Z @ 0x1800B6324 (-Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@V-$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUI.c)
 *     ?GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAX@Z @ 0x1800F1084 (-GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@P.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall EdgyProcessorTarget::UpdateInputTarget(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4)
{
  _OWORD *v4; // r15
  __int64 v5; // rdi
  __int64 v6; // r13
  __int64 v7; // r14
  char v8; // si
  __int64 *v9; // r12
  int (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rax
  int (__fastcall *v11)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v13; // rbx
  struct InputSiteManager *InputSiteManager; // rax
  __int64 *InputSiteFromInputSinkHandle; // rax
  __int64 v16; // rcx
  unsigned int v17; // esi
  int v18; // eax
  const char *v19; // r9
  __int64 v20; // [rsp+20h] [rbp-88h] BYREF
  int (__fastcall ***v21)(_QWORD, _QWORD, _QWORD); // [rsp+28h] [rbp-80h] BYREF
  __int64 v22; // [rsp+30h] [rbp-78h] BYREF
  __int64 v23; // [rsp+38h] [rbp-70h]
  __int64 *v24; // [rsp+40h] [rbp-68h]
  __int64 v25; // [rsp+48h] [rbp-60h]
  wil::ResultException *v26; // [rsp+50h] [rbp-58h] BYREF
  __int64 v27; // [rsp+60h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  v25 = a1;
  v27 = a2;
  v23 = a3;
  v8 = 0;
  v9 = (__int64 *)(a1 + 128);
  v24 = (__int64 *)(a1 + 128);
  v10 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 128);
  v21 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v10;
  if ( !v10 )
    goto LABEL_9;
  v20 = 0LL;
  v11 = **v10;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  if ( v11(v21, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v20) >= 0 )
  {
    if ( !v20 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x74,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
        (const char *)0x8000FFFFLL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
      return 2147549183LL;
    }
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v20 + 24LL))(v20, v6, v5);
    if ( v8 && v5 )
      NtCloseCompositionInputSink(v5);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  if ( !v8 )
  {
LABEL_9:
    v22 = 0LL;
    v13 = 0LL;
    v21 = 0LL;
    if ( v5 )
    {
      try
      {
        InputSiteManager = ISMStatics::GetInputSiteManager();
        InputSiteFromInputSinkHandle = InputSiteManager::GetInputSiteFromInputSinkHandle(
                                         (__int64)InputSiteManager,
                                         &v20,
                                         v5);
        Microsoft::WRL::ComPtr<InputSite>::operator=((__int64 *)&v21, (char *)InputSiteFromInputSinkHandle);
        v16 = v20;
        if ( v20 )
        {
          v20 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
      catch ( wil::ResultException *v26 )
      {
        v19 = (const char *)*((unsigned int *)v26 + 7);
        LODWORD(v20) = (_DWORD)v19;
        if ( (int)v19 >= 0 )
        {
          v4 = a4;
          v9 = v24;
          v7 = v25;
          LODWORD(v6) = v27;
          v5 = v23;
          goto LABEL_16;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9F,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
          v19);
        if ( v21 )
          ((void (__fastcall *)(int (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v21)[2])(v21);
        v17 = v20;
LABEL_20:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
        return v17;
      }
LABEL_16:
      v13 = (__int64)v21;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
    v21 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v13;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v21);
    v18 = DWMInputTarget::Create(v6, (__int64 *)&v21, &v22);
    v17 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA6,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
        (const char *)(unsigned int)v18);
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      goto LABEL_20;
    }
    NtCloseCompositionInputSink(v5);
    Microsoft::WRL::ComPtr<IInputTarget>::operator=(v9, &v22);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
  }
  *(_DWORD *)(v7 + 32) = 0;
  *(_OWORD *)(v7 + 48) = *v4;
  *(_OWORD *)(v7 + 64) = v4[1];
  return 0LL;
}
