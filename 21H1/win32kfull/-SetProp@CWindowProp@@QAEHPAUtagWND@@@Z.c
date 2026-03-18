/*
 * XREFs of ?SetProp@CWindowProp@@QAEHPAUtagWND@@@Z @ 0xB4F1C
 * Callers:
 *     ?_AttachWindowCompositionTarget@@YGJPAUtagWND@@HPAUCompositionObject@@@Z @ 0xB2A44 (-_AttachWindowCompositionTarget@@YGJPAUtagWND@@HPAUCompositionObject@@@Z.c)
 *     ?AttachInputQueueToWindow@@YGJPAUtagWND@@PAVIInputQueue@@@Z @ 0xB3874 (-AttachInputQueueToWindow@@YGJPAUtagWND@@PAVIInputQueue@@@Z.c)
 *     _UserSetWindowedSwapChain@12 @ 0xC2B6E (_UserSetWindowedSwapChain@12.c)
 *     ?GetOrCreate@CoreWindowProp@@KGJPAUtagWND@@PAPAV1@@Z @ 0xCC6FC (-GetOrCreate@CoreWindowProp@@KGJPAUtagWND@@PAPAV1@@Z.c)
 *     _CreateVisRgnTracker@8 @ 0xF4C7C (_CreateVisRgnTracker@8.c)
 * Callees:
 *     _InternalSetProp@16 @ 0xB4FE8 (_InternalSetProp@16.c)
 *     _InternalRemoveProp@12 @ 0xB50F2 (_InternalRemoveProp@12.c)
 */

int __thiscall CWindowProp::SetProp(CWindowProp *this, struct tagWND *a2)
{
  CWindowProp *v3; // eax
  int result; // eax

  (*(void (__thiscall **)(CWindowProp *))(*(_DWORD *)this + 4))(this);
  v3 = (CWindowProp *)InternalRemoveProp(1);
  if ( v3 && v3 != this )
    (**(void (__thiscall ***)(CWindowProp *))v3)(v3);
  (*(void (__thiscall **)(CWindowProp *))(*(_DWORD *)this + 4))(this);
  result = InternalSetProp(this, 32769);
  *((_DWORD *)this + 1) = result != 0 ? a2 : 0;
  return result;
}
