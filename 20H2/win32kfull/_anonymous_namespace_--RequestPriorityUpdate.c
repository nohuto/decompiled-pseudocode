/*
 * XREFs of _anonymous_namespace_::RequestPriorityUpdate @ 0x1C00C3490
 * Callers:
 *     ?UpdateProcessPriorityWhenComponentAdded@PriorityBoostCUI@@YAXPEAUtagWND@@0@Z @ 0x1C0005178 (-UpdateProcessPriorityWhenComponentAdded@PriorityBoostCUI@@YAXPEAUtagWND@@0@Z.c)
 *     _lambda_6b19aae8bfffc3c0d0465fc64ed598e8_::operator() @ 0x1C00C17E4 (_lambda_6b19aae8bfffc3c0d0465fc64ed598e8_--operator().c)
 *     ?TransitionForegroundPriority@PriorityBoostCUI@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C00C40FC (-TransitionForegroundPriority@PriorityBoostCUI@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ?UpdateProcessPriorityWhenEnableStateIsChanging@PriorityBoostCUI@@YAXPEAUtagWND@@H@Z @ 0x1C00C76C4 (-UpdateProcessPriorityWhenEnableStateIsChanging@PriorityBoostCUI@@YAXPEAUtagWND@@H@Z.c)
 *     _anonymous_namespace_::TransitionForegroundPriority_DeBoostWindowHelper @ 0x1C0223150 (_anonymous_namespace_--TransitionForegroundPriority_DeBoostWindowHelper.c)
 *     ?UpdateProcessPriorityWhenComponentRemoved@PriorityBoostCUI@@YAXPEAUtagWND@@0@Z @ 0x1C0223174 (-UpdateProcessPriorityWhenComponentRemoved@PriorityBoostCUI@@YAXPEAUtagWND@@0@Z.c)
 *     SetForegroundPriority @ 0x1C0223220 (SetForegroundPriority.c)
 * Callees:
 *     _anonymous_namespace_::SetForegroundPriorityProcess @ 0x1C00C3614 (_anonymous_namespace_--SetForegroundPriorityProcess.c)
 */

__int64 __fastcall anonymous_namespace_::RequestPriorityUpdate(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 v4; // rcx

  v2 = 0LL;
  v4 = *(_QWORD *)(a1 + 424);
  if ( !a2 )
    v2 = (unsigned int)((*(_DWORD *)(v4 + 12) & 0x800) != 0) + 1;
  return anonymous_namespace_::SetForegroundPriorityProcess(v4, a1, v2);
}
