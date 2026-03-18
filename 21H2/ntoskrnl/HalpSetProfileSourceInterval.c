/*
 * XREFs of HalpSetProfileSourceInterval @ 0x140376DC4
 * Callers:
 *     HalpSetSystemInformation @ 0x1407F8580 (HalpSetSystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 HalpSetProfileSourceInterval()
{
  return HalpProfileInterface[3]();
}
