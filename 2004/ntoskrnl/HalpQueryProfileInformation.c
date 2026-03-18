/*
 * XREFs of HalpQueryProfileInformation @ 0x1407616E8
 * Callers:
 *     HaliQuerySystemInformation @ 0x14098CF00 (HaliQuerySystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 HalpQueryProfileInformation()
{
  return (*((__int64 (**)(void))HalpProfileInterface[0] + 4))();
}
