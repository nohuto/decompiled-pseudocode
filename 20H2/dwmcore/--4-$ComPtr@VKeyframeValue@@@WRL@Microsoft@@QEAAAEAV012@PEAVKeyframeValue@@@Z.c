/*
 * XREFs of ??4?$ComPtr@VKeyframeValue@@@WRL@Microsoft@@QEAAAEAV012@PEAVKeyframeValue@@@Z @ 0x180026D60
 * Callers:
 *     ?AddKeyframe@KeyframeSequence@@QEAAXIMPEAVKeyframeValue@@PEAVKeyframeInterpolation@@@Z @ 0x180025C1C (-AddKeyframe@KeyframeSequence@@QEAAXIMPEAVKeyframeValue@@PEAVKeyframeInterpolation@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C4C64 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::ComPtr<KeyframeValue>::operator=(_QWORD *a1, void (__fastcall ***a2)(_QWORD))
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
