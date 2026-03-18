/*
 * XREFs of ?Materialize_BamoCompObjectDiagnosticsRootProxy@BamoPeerImpl@DiagnosticCallbacks_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x1801972F8
 * Callers:
 *     ?Thunk_Materialize_BamoCompObjectDiagnosticsRootProxy_34@?$IBamoPeer_DiagnosticCallbacks_AutoBamos_Receive@VBamoPeerImpl@DiagnosticCallbacks_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180198800 (-Thunk_Materialize_BamoCompObjectDiagnosticsRootProxy_34@-$IBamoPeer_DiagnosticCallbacks_AutoBam.c)
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1800269A0 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800269E8 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVBaseBamoPeerImpl@BamoImpl@Microsoft@@@Z @ 0x1800F801C (--4-$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180177B90 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180195110 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateCompObjectDiagnosticsRootProxy@@YAJPEAVBamoPeer@DiagnosticCallbacks_AutoBamos@@PEAPEAVBamoCompObjectDiagnosticsRootProxy@@@Z @ 0x1801BEDB8 (-CreateCompObjectDiagnosticsRootProxy@@YAJPEAVBamoPeer@DiagnosticCallbacks_AutoBamos@@PEAPEAVBam.c)
 */

__int64 __fastcall BamoImpl::DiagnosticCallbacks_AutoBamos::BamoPeerImpl::Materialize_BamoCompObjectDiagnosticsRootProxy(
        BamoImpl::DiagnosticCallbacks_AutoBamos::BamoPeerImpl *this,
        unsigned int a2)
{
  struct DiagnosticCallbacks_AutoBamos::BamoPeer *v4; // rcx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  const char *v8; // r9
  const char *v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v12; // eax
  int v14; // [rsp+20h] [rbp-38h]
  _BYTE v15[40]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct BamoCompObjectDiagnosticsRootProxy *v17; // [rsp+60h] [rbp+8h] BYREF

  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v15,
    *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)this + 3) + 32LL));
  v5 = CreateCompObjectDiagnosticsRootProxy(v4, &v17);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      3866LL,
      (__int64)"onecoreuap\\Windows\\DWM\\dwmcore\\diagnosticcallbacks\\objfre\\amd64\\diagnosticcallbacks.bamo.h",
      (const char *)(unsigned int)v5,
      v14);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v15,
    v6,
    v7,
    v8);
  if ( !v17 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      3871LL,
      (__int64)"onecoreuap\\Windows\\DWM\\dwmcore\\diagnosticcallbacks\\objfre\\amd64\\diagnosticcallbacks.bamo.h",
      v9);
  v10 = (*(__int64 (__fastcall **)(struct BamoCompObjectDiagnosticsRootProxy *))(*(_QWORD *)v17 + 56LL))(v17);
  wil::com_ptr_t<Microsoft::BamoImpl::BaseBamoPeerImpl,wil::err_returncode_policy>::operator=(
    (__int64 *)(v10 + 16),
    (void (__fastcall ***)(_QWORD))this);
  *(_DWORD *)(v10 + 24) = a2;
  v11 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 32LL) + 64LL);
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v11 + 40LL))(
          v11,
          *((unsigned int *)this + 9),
          a2,
          v10);
  if ( v12 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      5081LL,
      (__int64)"onecoreuap\\Windows\\DWM\\dwmcore\\diagnosticcallbacks\\objfre\\amd64\\diagnosticcallbacks.bamo.h",
      (const char *)(unsigned int)v12,
      v14);
  return 0LL;
}
