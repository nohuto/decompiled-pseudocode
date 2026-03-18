/*
 * XREFs of ?GetNearestCoreWindowAncestor@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00C77C0
 * Callers:
 *     ?TransitionForegroundPriority@PriorityBoostCUI@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C00C40FC (-TransitionForegroundPriority@PriorityBoostCUI@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ?UpdateProcessPriorityWhenEnableStateIsChanging@PriorityBoostCUI@@YAXPEAUtagWND@@H@Z @ 0x1C00C76C4 (-UpdateProcessPriorityWhenEnableStateIsChanging@PriorityBoostCUI@@YAXPEAUtagWND@@H@Z.c)
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall CoreWindowProp::GetNearestCoreWindowAncestor(const struct tagWND *a1)
{
  const struct tagWND *v1; // rdx

  v1 = a1;
  if ( !a1 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 235LL) & 2) == 0 )
    return 0LL;
  while ( (*(_BYTE *)(*((_QWORD *)v1 + 5) + 235LL) & 1) == 0 )
  {
    v1 = (const struct tagWND *)*((_QWORD *)v1 + 13);
    if ( !v1 )
      return 0LL;
  }
  return v1;
}
