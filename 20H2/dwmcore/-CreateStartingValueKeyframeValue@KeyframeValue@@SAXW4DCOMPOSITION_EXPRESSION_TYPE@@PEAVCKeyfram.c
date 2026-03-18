/*
 * XREFs of ?CreateStartingValueKeyframeValue@KeyframeValue@@SAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCKeyframeAnimation@@PEAPEAV1@@Z @ 0x180024248
 * Callers:
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x1800255B8 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     ??2CSolidColorLegacyMilBrush@@KAPEAX_K@Z @ 0x180026DB8 (--2CSolidColorLegacyMilBrush@@KAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C4C64 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyframeValue::CreateStartingValueKeyframeValue(unsigned __int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // ebp
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v5 = a1;
  v6 = CSolidColorLegacyMilBrush::operator new(a1);
  v7 = v6;
  if ( v6 )
  {
    v6[2] = 0;
    *(_QWORD *)v6 = &KeyframeValue::`vftable';
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
    (**(void (__fastcall ***)(_DWORD *))v7)(v7);
  v9 = 0LL;
  v7[5] = 3;
  *((_QWORD *)v7 + 3) = a2;
  v7[4] = v5;
  *a3 = v7;
  return Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v9);
}
