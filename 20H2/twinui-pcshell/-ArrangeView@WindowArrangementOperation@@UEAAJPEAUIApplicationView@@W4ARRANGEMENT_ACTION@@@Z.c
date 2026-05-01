/*
 * XREFs of ?ArrangeView@WindowArrangementOperation@@UEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@@Z @ 0x180407E10
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x18001DB14 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007A004 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ @ 0x1800B69D8 (-IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIAppLayoutBuilder@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIAppLayoutBuilder@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800B8650 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIAppLayoutBuilder@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x180136D20 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180147860 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ??B?$ComPtrRef@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180147A68 (--B-$ComPtrRef@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAUI.c)
 *     ?QueryArrangeView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@PEAW4FinalizeLayoutFlags@@@Z @ 0x180408264 (-QueryArrangeView@WindowArrangementOperation@@AEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@P.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x18047FB3C (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x1804804B8 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall WindowArrangementOperation::ArrangeView(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // r12
  int v7; // eax
  unsigned int v8; // ebx
  IUnknown *v9; // rbx
  __int64 *v10; // rax
  HRESULT Service; // eax
  __int64 v12; // rdx
  _QWORD *v13; // rbx
  __int64 v14; // rdi
  __int64 *v15; // rax
  int v16; // eax
  bool v17; // bl
  _QWORD *v18; // rbx
  __int64 v19; // rdi
  __int64 *v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 (__fastcall **v24)(__int64, GUID *, __int64 *); // rdi
  __int64 *v25; // rax
  int v26; // eax
  _QWORD *v27; // rbx
  __int64 v28; // rdi
  __int64 *v29; // rax
  int v30; // eax
  __int64 v31; // rdx
  __int64 *v32; // rbx
  __int64 v33; // rdi
  __int64 *v34; // rax
  _QWORD *v36; // [rsp+30h] [rbp-30h] BYREF
  _QWORD *v37; // [rsp+38h] [rbp-28h] BYREF
  __int64 **v38; // [rsp+40h] [rbp-20h] BYREF
  __int64 v39; // [rsp+48h] [rbp-18h] BYREF
  int v40; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  __int64 (__fastcall ***v42)(__int64, GUID *, __int64 *); // [rsp+A0h] [rbp+40h] BYREF
  __int64 *v43; // [rsp+B8h] [rbp+58h] BYREF

  v6 = a1 - 176;
  v39 = (a1 + 16) & -(__int64)(a1 != 176);
  v40 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v39, 1);
  v7 = CAppLayoutOperation::_VerifyAndPrepareLayout((CAppLayoutOperation *)(a1 - 152), 0LL, 0);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v37 = 0LL;
    if ( !IsSurfaceHubWithWin32VtcEnabled() )
      goto LABEL_27;
    v9 = *(IUnknown **)(a1 - 160);
    v10 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAppLayoutBuilder>>((__int64 *)&v37);
    Service = IUnknown_QueryService(
                v9,
                &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
                &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
                (void **)v10);
    v8 = Service;
    if ( Service < 0 )
    {
      v12 = 68LL;
LABEL_31:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementoperation.cpp",
        (const char *)(unsigned int)Service);
      goto LABEL_25;
    }
    v42 = 0LL;
    v13 = v37;
    v43 = (__int64 *)&v42;
    v14 = *v37;
    v15 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IApplicationView>>::operator IApplicationView * *(&v43);
    v16 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(v14 + 72))(v13, v15);
    v8 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x47,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementoperation.cpp",
        (const char *)(unsigned int)v16);
      Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v42);
LABEL_25:
      Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v37);
      goto LABEL_26;
    }
    v17 = ((unsigned int (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *), __int64))(*v42)[11])(
            v42,
            4LL) != 0;
    Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v42);
    if ( v17 )
    {
      v42 = 0LL;
      v18 = v37;
      v19 = *v37;
      v20 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAppLayoutBuilder>>((__int64 *)&v42);
      v21 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, GUID *, __int64 *))(v19 + 80))(
              v18,
              &CLSID_PPIWin32VtcLayoutOperation,
              &GUID_7f4d2785_4b93_429e_9250_0e9670706fba,
              v20);
      v8 = v21;
      if ( v21 < 0 )
      {
        v22 = 79LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementoperation.cpp",
          (const char *)(unsigned int)v21);
LABEL_22:
        Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v42);
        goto LABEL_25;
      }
      v21 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v42)[13])(v42);
      v8 = v21;
      if ( v21 < 0 )
      {
        v22 = 80LL;
        goto LABEL_13;
      }
      v36 = 0LL;
      v23 = (__int64)v42;
      v24 = *v42;
      v25 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAppLayoutBuilder>>((__int64 *)&v36);
      v26 = (*v24)(v23, &GUID_c28f3b94_b47f_4211_8f2c_88d0b2d975bb, v25);
      v8 = v26;
      if ( v26 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x52,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementoperation.cpp",
          (const char *)(unsigned int)v26);
LABEL_21:
        Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v36);
        goto LABEL_22;
      }
      v43 = 0LL;
      v27 = v36;
      v38 = &v43;
      v28 = *v36;
      v29 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IApplicationView>>::operator IApplicationView * *((__int64 **)&v38);
      v30 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(v28 + 48))(v27, v29);
      v8 = v30;
      if ( v30 < 0 )
      {
        v31 = 84LL;
LABEL_20:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v31,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementoperation.cpp",
          (const char *)(unsigned int)v30);
        Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v43);
        goto LABEL_21;
      }
      v32 = v43;
      v33 = *v43;
      v34 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAppLayoutBuilder>>((__int64 *)(a1 - 112));
      v30 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 *))(v33 + 192))(
              v32,
              &GUID_dad20bf4_9130_4ecb_bcce_cab826dcafae,
              v34);
      v8 = v30;
      if ( v30 < 0 )
      {
        v31 = 85LL;
        goto LABEL_20;
      }
      Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v43);
      Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v36);
      Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v42);
    }
    else
    {
LABEL_27:
      Service = WindowArrangementOperation::QueryArrangeView(v6, a2, a3, &v42);
      v8 = Service;
      if ( Service < 0 )
      {
        v12 = 90LL;
        goto LABEL_31;
      }
      *(_DWORD *)(a1 - 72) = 65539;
      Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 - 88), a2);
      Service = CAppLayoutOperation::_FinalizeLayout(a1 - 152);
      v8 = Service;
      if ( Service < 0 )
      {
        v12 = 93LL;
        goto LABEL_31;
      }
    }
    v8 = 0;
    goto LABEL_25;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3E,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementoperation.cpp",
    (const char *)(unsigned int)v7);
LABEL_26:
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v39);
  return v8;
}
