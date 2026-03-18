/*
 * XREFs of ?SendDisposeProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@UEAAXI@Z @ 0x18017DF50
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18016427C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::dataprovider_AutoBamos::BamoPeerImpl::SendDisposeProxy(
        BamoImpl::dataprovider_AutoBamos::BamoPeerImpl *this)
{
  __int64 v1; // r8
  __int64 v2; // r10
  int v3; // eax
  _QWORD v4[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v1 = *(_QWORD *)(*((_QWORD *)this + 3) + 32LL);
  v4[0] = *((unsigned int *)this + 9);
  v2 = *(_QWORD *)(v1 + 64);
  v4[1] = *((unsigned int *)this + 10);
  v3 = CoreUICallSend(v2, v4, 2LL, 6LL, 7, &unk_1802CCA35);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2935,
      (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
}
