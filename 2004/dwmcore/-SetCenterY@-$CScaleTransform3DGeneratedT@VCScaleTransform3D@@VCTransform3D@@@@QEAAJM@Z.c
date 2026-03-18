/*
 * XREFs of ?SetCenterY@?$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@QEAAJM@Z @ 0x180172024
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CScaleTransform3DGeneratedT<CScaleTransform3D,CTransform3D>::SetCenterY(float *a1, float a2)
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
