/*
 * XREFs of HalpSetProfileSourceInterval @ 0x14036CF4C
 * Callers:
 *     HalpSetSystemInformation @ 0x1407335A0 (HalpSetSystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 HalpSetProfileSourceInterval()
{
  return (*((__int64 (**)(void))HalpProfileInterface[0] + 3))();
}
