/*
 * XREFs of ?SendDisposeProxy@BamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@UEAAXI@Z @ 0x1800739C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::MPCManagerBamo_AutoBamos::BamoPeerImpl::SendDisposeProxy(
        BamoImpl::MPCManagerBamo_AutoBamos::BamoPeerImpl *this,
        int a2)
{
  __int64 v2; // r8
  __int64 v3; // r10
  int v4; // eax
  __int16 v5; // [rsp+20h] [rbp-38h]
  _QWORD v6[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *(_QWORD *)(*((_QWORD *)this + 3) + 32LL);
  v6[0] = *((unsigned int *)this + 9);
  v3 = *(_QWORD *)(v2 + 64);
  v6[1] = *((unsigned int *)this + 10);
  v5 = 11;
  v4 = CoreUICallSend(v3, v6, 2LL, 1LL, v5, &unk_1801C189B, a2);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      3047LL,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.Common.bamo.h",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
}
