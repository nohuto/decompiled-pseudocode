/*
 * XREFs of ?SetCenterX@?$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z @ 0x1801A21EC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CScaleTransformGeneratedT<CScaleTransform,CTransform>::SetCenterX(float *a1, float a2)
{
  __int64 v2; // rax

  if ( a2 != a1[42] )
  {
    v2 = *(_QWORD *)a1;
    a1[42] = a2;
    (*(void (__fastcall **)(float *, _QWORD, _QWORD))(v2 + 72))(a1, 0LL, 0LL);
  }
  return 0LL;
}
