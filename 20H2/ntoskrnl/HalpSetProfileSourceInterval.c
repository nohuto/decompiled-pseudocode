/*
 * XREFs of HalpSetProfileSourceInterval @ 0x14036C76C
 * Callers:
 *     HalpSetSystemInformation @ 0x14072F190 (HalpSetSystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 HalpSetProfileSourceInterval()
{
  return (*((__int64 (**)(void))HalpProfileInterface[0] + 3))();
}
