/*
 * XREFs of ?SendDisposeProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@UEAAXI@Z @ 0x1801B9F20
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180195110 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::dataprovider_AutoBamos::BamoPeerImpl::SendDisposeProxy(
        BamoImpl::dataprovider_AutoBamos::BamoPeerImpl *this)
{
  __int64 v1; // r8
  __int64 v2; // r10
  int v3; // eax
  int v4; // [rsp+20h] [rbp-38h]
  _QWORD v5[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v1 = *(_QWORD *)(*((_QWORD *)this + 3) + 32LL);
  v5[0] = *((unsigned int *)this + 9);
  v2 = *(_QWORD *)(v1 + 72);
  v5[1] = *((unsigned int *)this + 10);
  v3 = CoreUICallSend(v2, v5, 2LL, 6LL, 7, &unk_1803434A5);
  if ( v3 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      12048LL,
      (__int64)"onecoreuap\\Windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v3,
      v4);
}
