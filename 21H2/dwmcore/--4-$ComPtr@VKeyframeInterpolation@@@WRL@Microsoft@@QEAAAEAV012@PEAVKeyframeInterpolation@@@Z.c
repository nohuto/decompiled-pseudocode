/*
 * XREFs of ??4?$ComPtr@VKeyframeInterpolation@@@WRL@Microsoft@@QEAAAEAV012@PEAVKeyframeInterpolation@@@Z @ 0x18004E060
 * Callers:
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x18004D958 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D5C3C (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::ComPtr<KeyframeInterpolation>::operator=(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD))
{
  void (__fastcall ***v2)(_QWORD); // rax
  void (__fastcall ***v6)(_QWORD); // [rsp+30h] [rbp+8h] BYREF

  v2 = (void (__fastcall ***)(_QWORD))*a1;
  if ( (void (__fastcall ***)(_QWORD))*a1 != a2 )
  {
    if ( a2 )
    {
      (**a2)(a2);
      v2 = (void (__fastcall ***)(_QWORD))*a1;
    }
    v6 = v2;
    *a1 = a2;
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v6);
  }
  return a1;
}
