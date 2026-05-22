/*
 * XREFs of ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUHitTestResult@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x180017EB0
 * Callers:
 *     ?GetTargetListFromHitTestResult@DWMInputRouter@@AEAA?AV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@W4InputType@@AEBUHitTestResult@@AEAV?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Z @ 0x180017DA0 (-GetTargetListFromHitTestResult@DWMInputRouter@@AEAA-AV-$vector@V-$ComPtr@UIInputTarget@@@WRL@Mi.c)
 * Callees:
 *     ?GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ @ 0x180005510 (-GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x180018060 (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     ?ToCompositionInputType@@YA?AW4CompositionInputType@@W4InputType@@@Z @ 0x180018178 (-ToCompositionInputType@@YA-AW4CompositionInputType@@W4InputType@@@Z.c)
 *     ??$As@UIDCompInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800183B0 (--$As@UIDCompInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z @ 0x180018400 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180018648 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?Create@InputSiteTarget@@SA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@@Z @ 0x1800186AC (-Create@InputSiteTarget@@SA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$ComPtr@VInputSite@@@.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180027FE0 (-IsEdition@@YA_N_K@Z.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18003CBA6 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??8@YA_NAEBU_LUID@@0@Z @ 0x1800B72C0 (--8@YA_NAEBU_LUID@@0@Z.c)
 *     ?GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ @ 0x1800F136C (-GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUIInputTarget@@@Z @ 0x180138310 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJUtagMsgRoutingInfo@@V-$ComPtr@VInputSite@@@WRL@Mic.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall DWMInputRouter::GetTargetFromInputSite(
        DWMInputRouter *a1,
        __int64 *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        void (__fastcall ****a7)(_QWORD, GUID *, __int64 *))
{
  LegacyInputSinkData *v10; // r14
  void (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rdi
  unsigned int v12; // eax
  __int64 CompositionInputQueue; // rbx
  bool v14; // zf
  __int64 v15; // rbx
  DWMInputRouter *v16; // rdi
  __int64 v18; // rax
  void (__fastcall *v19)(_QWORD, GUID *, __int64 *); // rbx
  void *WeakInputSinkHandle; // rax
  void (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // rdi
  void (__fastcall *v22)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v23; // rax
  const struct _LUID *Luid; // rax
  __int64 v25; // [rsp+50h] [rbp-91h] BYREF
  __int64 v26; // [rsp+58h] [rbp-89h] BYREF
  DWMInputRouter *v27; // [rsp+60h] [rbp-81h] BYREF
  int v28; // [rsp+68h] [rbp-79h]
  DWORD dwProcessId; // [rsp+6Ch] [rbp-75h] BYREF
  __int128 pExceptionObject; // [rsp+70h] [rbp-71h] BYREF
  __int128 v31; // [rsp+80h] [rbp-61h]
  __int64 v32; // [rsp+90h] [rbp-51h]
  __int64 *v33; // [rsp+A0h] [rbp-41h]
  _BYTE v34[40]; // [rsp+A8h] [rbp-39h] BYREF

  v27 = a1;
  v33 = a2;
  v26 = a5;
  *a2 = 0LL;
  v28 = 1;
  if ( !*(_BYTE *)(*(_QWORD *)a3 + 392LL) )
  {
LABEL_13:
    v18 = InputSiteTarget::Create(&v27, a3);
    Microsoft::WRL::ComPtr<IInputTarget>::operator=(a2, v18);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v27);
    return a2;
  }
  v10 = (LegacyInputSinkData *)(*(_QWORD *)a3 + 32LL);
  v11 = *a7;
  if ( *a7 )
  {
    v19 = (*v11)[5];
    WeakInputSinkHandle = LegacyInputSinkData::GetWeakInputSinkHandle(v10);
    if ( ((unsigned __int8 (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, __int64 *), void *))v19)(
           v11,
           WeakInputSinkHandle) )
    {
      v21 = *a7;
      v22 = ***a7;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
      v22(v21, &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3, a2);
      goto LABEL_17;
    }
  }
  v12 = ToCompositionInputType(a4);
  CompositionInputQueue = LegacyInputSinkData::GetCompositionInputQueue(v10, v12);
  if ( (unsigned int)(*(_DWORD *)CompositionInputQueue - 3) <= 1 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
    v25 = *(_QWORD *)a3;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v25);
    pExceptionObject = *(_OWORD *)(CompositionInputQueue + 16);
    v31 = *(_OWORD *)(CompositionInputQueue + 32);
    v32 = *(_QWORD *)(CompositionInputQueue + 48);
    DWMInputRouter::CreateAndRegisterTarget(v27, &pExceptionObject, &v25, a2);
    goto LABEL_17;
  }
  if ( !IsEdition(0x224AuLL) )
  {
LABEL_17:
    v15 = v26;
    goto LABEL_9;
  }
  v14 = *(_DWORD *)CompositionInputQueue == 2;
  v15 = v26;
  if ( v14 )
  {
    GetWindowThreadProcessId(*(HWND *)(v26 + 104), &dwProcessId);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
    v16 = v27;
    DWMInputRouter::CreateAndRegisterTarget(
      v27,
      dwProcessId,
      0,
      0,
      0,
      *(_QWORD *)(v26 + 104),
      0,
      0,
      (struct IInputTarget **)a2);
    v25 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IDCompInputTarget>(a2, &v25) >= 0 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
      v27 = (DWMInputRouter *)&v26;
      v26 = *(_QWORD *)a3;
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v26);
      v23 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v25 + 72LL))(v25, v34);
      pExceptionObject = *(_OWORD *)v23;
      v31 = *(_OWORD *)(v23 + 16);
      v32 = *(_QWORD *)(v23 + 32);
      DWMInputRouter::CreateAndRegisterTarget(v16, &pExceptionObject, &v26, a2);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
  }
LABEL_9:
  if ( !*a2 )
    goto LABEL_13;
  if ( *(_BYTE *)(v15 + 112) )
  {
    Luid = LegacyInputSinkData::GetLuid(v10);
    if ( (unsigned __int8)operator==(Luid, a6) )
    {
      v25 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IDCompInputTarget>(a2, &v25) >= 0 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v25 + 80LL))(v25, *(unsigned int *)(v15 + 116));
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
    }
  }
  if ( !*a2 )
    goto LABEL_13;
  return a2;
}
