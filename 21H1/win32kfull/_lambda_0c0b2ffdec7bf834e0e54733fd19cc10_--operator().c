/*
 * XREFs of _lambda_0c0b2ffdec7bf834e0e54733fd19cc10_::operator() @ 0x9BEF4
 * Callers:
 *     ?xxxSetWindowBand@@YGHPAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x9BDF2 (-xxxSetWindowBand@@YGHPAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_9eec84fa5d6124b437e3ad3c3e50d459___ @ 0x9BED0 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_9eec84fa5d6124b437e3ad3c3e50d459__.c)
 * Callees:
 *     ?_DeferWindowPosAndBand@@YGPAUtagSMWP@@PAU1@PAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x7705E (-_DeferWindowPosAndBand@@YGPAUtagSMWP@@PAU1@PAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 */

_DWORD *__thiscall lambda_0c0b2ffdec7bf834e0e54733fd19cc10_::operator()(_DWORD **this, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax
  _DWORD *v5; // ecx

  result = *this;
  v5 = (_DWORD *)**this;
  if ( v5 )
  {
    result = _DeferWindowPosAndBand(v5, a2, a3, 0, 0, 0, 0, *this[1], *this[2], *this[3]);
    **this = result;
  }
  return result;
}
