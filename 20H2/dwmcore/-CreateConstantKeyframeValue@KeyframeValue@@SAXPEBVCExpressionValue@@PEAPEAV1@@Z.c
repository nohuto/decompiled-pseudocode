/*
 * XREFs of ?CreateConstantKeyframeValue@KeyframeValue@@SAXPEBVCExpressionValue@@PEAPEAV1@@Z @ 0x180025390
 * Callers:
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x1800255B8 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x180026A70 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ??2CSolidColorLegacyMilBrush@@KAPEAX_K@Z @ 0x180026DB8 (--2CSolidColorLegacyMilBrush@@KAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C4C64 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall KeyframeValue::CreateConstantKeyframeValue(
        const struct CExpressionValue *a1,
        struct KeyframeValue **a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  int v6; // eax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v4 = CSolidColorLegacyMilBrush::operator new((unsigned __int64)a1);
  v5 = v4;
  if ( v4 )
  {
    v4[2] = 0;
    *(_QWORD *)v4 = &KeyframeValue::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
    (**(void (__fastcall ***)(_DWORD *))v5)(v5);
  v5[5] = 1;
  CExpressionValue::CopyFrom((CExpressionValue *)(v5 + 6), a1);
  v6 = v5[24];
  v7 = 0LL;
  v5[4] = v6;
  *a2 = (struct KeyframeValue *)v5;
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v7);
}
