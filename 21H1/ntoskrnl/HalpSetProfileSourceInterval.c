/*
 * XREFs of HalpSetProfileSourceInterval @ 0x140369DCC
 * Callers:
 *     HalpSetSystemInformation @ 0x14071F2E0 (HalpSetSystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 HalpSetProfileSourceInterval()
{
  return (*((__int64 (**)(void))HalpProfileInterface[0] + 3))();
}
