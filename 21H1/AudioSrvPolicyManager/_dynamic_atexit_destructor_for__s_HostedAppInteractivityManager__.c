/*
 * XREFs of _dynamic_atexit_destructor_for__s_HostedAppInteractivityManager__ @ 0x180042BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAXXZ @ 0x180027E84 (-RemoveAll@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity.c)
 */

void dynamic_atexit_destructor_for__s_HostedAppInteractivityManager__()
{
  ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::RemoveAll((__int64)&qword_1800561D8);
  DeleteCriticalSection(&stru_1800561B0);
}
