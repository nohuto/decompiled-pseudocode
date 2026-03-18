/*
 * XREFs of ?CreateConstantKeyframeValue@KeyframeValue@@SAXPEBVCExpressionValue@@PEAPEAV1@@Z @ 0x18004E120
 * Callers:
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x18004D958 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x18004F220 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ??2KeyframeValue@@SAPEAX_K@Z @ 0x18004F5F8 (--2KeyframeValue@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D75D0 (-InternalRelease@-$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall KeyframeValue::CreateConstantKeyframeValue(
        const struct CExpressionValue *a1,
        struct KeyframeValue **a2)
{
  _QWORD *v4; // rax
  _DWORD *v5; // rbx
  int v6; // eax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v4 = KeyframeValue::operator new((unsigned __int64)a1);
  v5 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = 0;
    *v4 = &KeyframeValue::`vftable';
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v4 + 1));
  }
  else
  {
    v5 = 0LL;
  }
  v5[5] = 1;
  CExpressionValue::CopyFrom((CExpressionValue *)(v5 + 6), a1);
  v6 = v5[24];
  v7 = 0LL;
  v5[4] = v6;
  *a2 = (struct KeyframeValue *)v5;
  Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v7);
}
