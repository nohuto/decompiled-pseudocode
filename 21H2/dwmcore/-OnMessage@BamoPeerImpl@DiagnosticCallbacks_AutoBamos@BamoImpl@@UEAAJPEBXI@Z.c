/*
 * XREFs of ?OnMessage@BamoPeerImpl@DiagnosticCallbacks_AutoBamos@BamoImpl@@UEAAJPEBXI@Z @ 0x180197530
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180195110 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::DiagnosticCallbacks_AutoBamos::BamoPeerImpl::OnMessage(
        BamoImpl::DiagnosticCallbacks_AutoBamos::BamoPeerImpl *this,
        const void *a2)
{
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = (int)this;
  result = CoreUICallReceive(
             *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 32LL) + 80LL),
             &IBamoPeer_DiagnosticCallbacks_AutoBamos_Receive<BamoImpl::DiagnosticCallbacks_AutoBamos::BamoPeerImpl>::Type,
             &Microsoft::CoreUI::MessageCall::DiagnosticCallbacks_g_parameters_sdevGguFXwOtP5_Hldukq$D2_sg_BamoGroup$e6b704d7,
             41LL);
  if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -2018375668 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      5103LL,
      (__int64)"onecoreuap\\Windows\\DWM\\dwmcore\\diagnosticcallbacks\\objfre\\amd64\\diagnosticcallbacks.bamo.h",
      (const char *)(unsigned int)result,
      v3);
  return result;
}
