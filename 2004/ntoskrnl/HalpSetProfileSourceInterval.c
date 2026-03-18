/*
 * XREFs of HalpSetProfileSourceInterval @ 0x14036A78C
 * Callers:
 *     HalpSetSystemInformation @ 0x1407211A0 (HalpSetSystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 HalpSetProfileSourceInterval()
{
  return (*((__int64 (**)(void))HalpProfileInterface[0] + 3))();
}
