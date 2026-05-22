/*
 * XREFs of ?SendRequestDisposeProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@UEAAXI@Z @ 0x180006650
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl::SendRequestDisposeProxy(
        BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl *this,
        int a2)
{
  __int64 v2; // r8
  __int64 v3; // r10
  int v4; // eax
  __int16 v5; // [rsp+20h] [rbp-38h]
  int v6; // [rsp+20h] [rbp-38h]
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *(_QWORD *)(*((_QWORD *)this + 3) + 32LL);
  v7[0] = *((unsigned int *)this + 9);
  v3 = *(_QWORD *)(v2 + 64);
  v7[1] = *((unsigned int *)this + 10);
  v5 = 57;
  v4 = CoreUICallSend(v3, v7, 2LL, 74LL, v5, &unk_1801C019A, a2);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xDDBF,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v4,
      v6);
    __debugbreak();
  }
}
