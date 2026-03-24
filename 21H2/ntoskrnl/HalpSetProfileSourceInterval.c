/*
 * XREFs of HalpSetProfileSourceInterval @ 0x14036CD9C
 * Callers:
 *     HalpSetSystemInformation @ 0x1407333E0 (HalpSetSystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 HalpSetProfileSourceInterval()
{
  return (*((__int64 (**)(void))HalpProfileInterface[0] + 3))();
}
