/*
 * XREFs of _lambda_6b19aae8bfffc3c0d0465fc64ed598e8_::operator() @ 0x1C0035864
 * Callers:
 *     ?TransitionForegroundPriority@PriorityBoostCUI@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C00351B8 (-TransitionForegroundPriority@PriorityBoostCUI@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8___ @ 0x1C0035800 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8__.c)
 * Callees:
 *     _anonymous_namespace_::RequestPriorityUpdate @ 0x1C00354C8 (_anonymous_namespace_--RequestPriorityUpdate.c)
 */

__int64 __fastcall lambda_6b19aae8bfffc3c0d0465fc64ed598e8_::operator()(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    result = *(_QWORD *)(a2 + 40);
    if ( (*(_BYTE *)(result + 31) & 8) == 0 )
      return anonymous_namespace_::RequestPriorityUpdate(*(_QWORD *)(a2 + 16), 0);
  }
  return result;
}
