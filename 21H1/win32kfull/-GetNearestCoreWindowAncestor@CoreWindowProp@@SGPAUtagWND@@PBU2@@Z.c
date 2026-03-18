/*
 * XREFs of ?GetNearestCoreWindowAncestor@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0x18CFA
 * Callers:
 *     ?UpdateProcessPriorityWhenEnableStateIsChanging@PriorityBoostCUI@@YGXPAUtagWND@@H@Z @ 0x18B3C (-UpdateProcessPriorityWhenEnableStateIsChanging@PriorityBoostCUI@@YGXPAUtagWND@@H@Z.c)
 *     ?TransitionForegroundPriority@PriorityBoostCUI@@YGXPAUtagTHREADINFO@@PAUtagWND@@@Z @ 0x18BD2 (-TransitionForegroundPriority@PriorityBoostCUI@@YGXPAUtagTHREADINFO@@PAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

struct tagWND *__thiscall CoreWindowProp::GetNearestCoreWindowAncestor(_DWORD *this)
{
  if ( !this || (*(_BYTE *)(this[5] + 147) & 2) == 0 )
    return 0;
  while ( (*(_BYTE *)(this[5] + 147) & 1) == 0 )
  {
    this = (_DWORD *)this[14];
    if ( !this )
      return 0;
  }
  return (struct tagWND *)this;
}
