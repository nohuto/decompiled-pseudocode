/*
 * XREFs of _UserGetLastStatus@0 @ 0xAC892
 * Callers:
 *     _lambda_7493114f859391c63e08f81e8f0a9f3f_::operator() @ 0xAC81E (_lambda_7493114f859391c63e08f81e8f0a9f3f_--operator().c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

PVOID __stdcall UserGetLastStatus()
{
  if ( (unsigned __int8)KeIsAttachedProcess() )
    return 0;
  else
    return KeGetPcr()->NtTib.Self[109].StackLimit;
}
