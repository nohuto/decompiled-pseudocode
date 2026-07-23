/*
 * XREFs of HalpQueryProfileInformation @ 0x140773D88
 * Callers:
 *     HaliQuerySystemInformation @ 0x1409909D0 (HaliQuerySystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 HalpQueryProfileInformation()
{
  return (*((__int64 (**)(void))HalpProfileInterface[0] + 4))();
}
