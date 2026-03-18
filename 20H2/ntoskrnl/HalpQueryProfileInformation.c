/*
 * XREFs of HalpQueryProfileInformation @ 0x14076FCF8
 * Callers:
 *     HaliQuerySystemInformation @ 0x140992C80 (HaliQuerySystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 HalpQueryProfileInformation()
{
  return (*((__int64 (**)(void))HalpProfileInterface[0] + 4))();
}
