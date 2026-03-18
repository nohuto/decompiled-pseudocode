/*
 * XREFs of ?RemoveTarget@CCompositionSpotLight@@UEAAXPEAVCVisual@@@Z @ 0x1800BCEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveTarget@CCompositionLight@@UEAAXPEAVCVisual@@@Z @ 0x1800BCF10 (-RemoveTarget@CCompositionLight@@UEAAXPEAVCVisual@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z @ 0x1800BCF48 (-Remove@-$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z.c)
 */

void __fastcall CCompositionSpotLight::RemoveTarget(CCompositionSpotLight *this, struct CVisual *a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  struct CVisual *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  CCompositionLight::RemoveTarget(this, a2);
  DynArray<CVisual *,0>::Remove((char *)this + 256, &v5, v3, v4);
}
