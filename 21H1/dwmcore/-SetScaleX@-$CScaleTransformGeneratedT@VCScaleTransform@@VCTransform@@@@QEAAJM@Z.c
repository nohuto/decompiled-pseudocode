/*
 * XREFs of ?SetScaleX@?$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z @ 0x1800CBE9C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CScaleTransformGeneratedT<CScaleTransform,CTransform>::SetScaleX(float *a1, float a2)
{
  __int64 v2; // rax

  if ( a2 != a1[38] )
  {
    v2 = *(_QWORD *)a1;
    a1[38] = a2;
    (*(void (__fastcall **)(float *, _QWORD, _QWORD))(v2 + 72))(a1, 0LL, 0LL);
  }
  return 0LL;
}
