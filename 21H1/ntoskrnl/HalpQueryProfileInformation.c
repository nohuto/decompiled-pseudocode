/*
 * XREFs of HalpQueryProfileInformation @ 0x14075F2A8
 * Callers:
 *     HaliQuerySystemInformation @ 0x14098B9E0 (HaliQuerySystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 HalpQueryProfileInformation()
{
  return (*((__int64 (**)(void))HalpProfileInterface[0] + 4))();
}
