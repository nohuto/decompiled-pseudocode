/*
 * XREFs of ?OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18017D610
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AE40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000EDF8 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001054C (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x1800C9400 (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 *     ??$MakeAndInitialize@VMagnifierGestureTarget@@UIInputTarget@@AEAV?$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@AEAV?$ComPtr@VInputSite@@@45@AEAW4GestureType@1@@Details@WRL@Microsoft@@YAJPEAPEAUIInputTarget@@AEAV?$ComPtr@VMagnifierControllerProxy@@@12@AEAV?$ComPtr@VInputSite@@@12@AEAW4GestureType@MagnifierGestureTarget@@@Z @ 0x18017C54C (--$MakeAndInitialize@VMagnifierGestureTarget@@UIInputTarget@@AEAV-$ComPtr@VMagnifierControllerPr.c)
 *     ??$MakeAndInitialize@VMagnifierToggleTarget@@UIInputTarget@@AEAV?$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@AEAV?$ComPtr@VInputSite@@@45@@Details@WRL@Microsoft@@YAJPEAPEAUIInputTarget@@AEAV?$ComPtr@VMagnifierControllerProxy@@@12@AEAV?$ComPtr@VInputSite@@@12@@Z @ 0x18017C71C (--$MakeAndInitialize@VMagnifierToggleTarget@@UIInputTarget@@AEAV-$ComPtr@VMagnifierControllerPro.c)
 *     ?Active@MagnifierRecognizer@@QEAA_NXZ @ 0x18017DE64 (-Active@MagnifierRecognizer@@QEAA_NXZ.c)
 *     ?CheckForTwoFingerPan@MagnifierRecognizer@@AEAAXXZ @ 0x18017DE7C (-CheckForTwoFingerPan@MagnifierRecognizer@@AEAAXXZ.c)
 *     ?CheckForTwoFingerTap@MagnifierRecognizer@@AEAAXXZ @ 0x18017E010 (-CheckForTwoFingerTap@MagnifierRecognizer@@AEAAXXZ.c)
 *     ?Reset@MagnifierRecognizer@@QEAAXAEBUThresholds@1@@Z @ 0x18017E1D0 (-Reset@MagnifierRecognizer@@QEAAXAEBUThresholds@1@@Z.c)
 *     ?TimeFromPerfCount@MagnifierRecognizer@@QEAA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@_K@Z @ 0x18017E278 (-TimeFromPerfCount@MagnifierRecognizer@@QEAA-AV-$time_point@Usteady_clock@chrono@std@@V-$duratio.c)
 *     ?UpdateContactState@MagnifierRecognizer@@AEAAXPEBUPointerInputInfo@@@Z @ 0x18017E2CC (-UpdateContactState@MagnifierRecognizer@@AEAAXPEBUPointerInputInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MagnifierProcessor::OnInput(
        MagnifierProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  __int64 v7; // rbx
  int v8; // edi
  int v9; // eax
  int v10; // eax
  const char *v12; // [rsp+28h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  v15 = *(_QWORD *)a4;
  v7 = v15;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v15);
  *((_DWORD *)a4 + 2) = 0;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)a4 + 10);
  *(_QWORD *)(v7 + 24) = *(_QWORD *)MagnifierRecognizer::TimeFromPerfCount(v7 + 32, &v14, *((_QWORD *)a2 + 2));
  MagnifierRecognizer::UpdateContactState((MagnifierRecognizer *)(v7 + 32), a2);
  MagnifierRecognizer::CheckForTwoFingerTap((MagnifierRecognizer *)(v7 + 32));
  MagnifierRecognizer::CheckForTwoFingerPan((MagnifierRecognizer *)(v7 + 32));
  if ( *(_BYTE *)(v7 + 33) )
  {
    v8 = 3;
    wil::details::in1diag3::FailFast_IfMsg(
      retaddr,
      (void *)0x8A,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\magnifier\\processor\\ma"
                    "gnifierprocessor.cpp",
      (const char *)*(unsigned __int8 *)(v7 + 34),
      (void *)"Can't recognize both 2fTap and 2fPan",
      v12);
    if ( *(_BYTE *)(v7 + 18) && *(_BYTE *)(v7 + 16) )
    {
      MagnifierRecognizer::Reset((MagnifierRecognizer *)(v7 + 32), (MagnifierProcessor *)((char *)this + 80));
      v14 = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
      v9 = Microsoft::WRL::Details::MakeAndInitialize<MagnifierToggleTarget,IInputTarget,Microsoft::WRL::ComPtr<MagnifierControllerProxy> &,Microsoft::WRL::ComPtr<InputSite> &>(
             &v14,
             (__int64 *)(v7 + 120),
             (__int64 *)(v7 + 128));
      if ( v9 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          149LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\magnifier\\processor\\mag"
                   "nifierprocessor.cpp",
          (const char *)(unsigned int)v9);
        __debugbreak();
      }
      Microsoft::WRL::ComPtr<IInputTarget>::operator=((__int64 *)a4 + 10, &v14);
      v8 = 2;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
    }
LABEL_12:
    *((_DWORD *)a4 + 2) = v8;
    goto LABEL_15;
  }
  if ( *(_BYTE *)(v7 + 34) )
  {
    if ( !*(_QWORD *)(v7 + 112) )
    {
      LODWORD(v14) = *(_BYTE *)(v7 + 18) != 0;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(v7 + 112));
      v10 = Microsoft::WRL::Details::MakeAndInitialize<MagnifierGestureTarget,IInputTarget,Microsoft::WRL::ComPtr<MagnifierControllerProxy> &,Microsoft::WRL::ComPtr<InputSite> &,enum MagnifierGestureTarget::GestureType &>(
              (_QWORD *)(v7 + 112),
              (__int64 *)(v7 + 120),
              (__int64 *)(v7 + 128),
              (unsigned int *)&v14);
      if ( v10 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          169LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\magnifier\\processor\\mag"
                   "nifierprocessor.cpp",
          (const char *)(unsigned int)v10);
        __debugbreak();
      }
    }
    Microsoft::WRL::ComPtr<IInputTarget>::operator=((__int64 *)a4 + 10, (__int64 *)(v7 + 112));
    v8 = 2;
    goto LABEL_12;
  }
  if ( MagnifierRecognizer::Active((MagnifierRecognizer *)(v7 + 32)) )
    *((_DWORD *)a4 + 2) = 1;
LABEL_15:
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v15);
  return 0LL;
}
