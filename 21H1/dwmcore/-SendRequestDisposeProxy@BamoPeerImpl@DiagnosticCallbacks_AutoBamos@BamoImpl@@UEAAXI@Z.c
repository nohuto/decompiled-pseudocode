/*
 * XREFs of ?SendRequestDisposeProxy@BamoPeerImpl@DiagnosticCallbacks_AutoBamos@BamoImpl@@UEAAXI@Z @ 0x18016B400
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180168BDC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::DiagnosticCallbacks_AutoBamos::BamoPeerImpl::SendRequestDisposeProxy(
        BamoImpl::DiagnosticCallbacks_AutoBamos::BamoPeerImpl *this,
        int a2)
{
  __int64 v2; // r8
  __int64 v3; // r10
  int v4; // eax
  int v5; // [rsp+20h] [rbp-38h]
  __int64 v6; // [rsp+38h] [rbp-20h]
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *(_QWORD *)(*((_QWORD *)this + 3) + 32LL);
  v7[0] = *((unsigned int *)this + 9);
  v3 = *(_QWORD *)(v2 + 64);
  v7[1] = *((unsigned int *)this + 10);
  LOWORD(v5) = 5;
  v4 = CoreUICallSend(v3, v7, 2LL, 1LL, v5, &unk_1802DB08A, a2, v6);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x11C3,
      (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\diagnosticcallbacks\\objfre\\amd64\\diagnosticcallbacks.bamo.h",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
}
