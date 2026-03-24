/*
 * XREFs of HalpGetMcaPcrContext @ 0x1403A0BC8
 * Callers:
 *     HalpCmciPollProcessor @ 0x1403A0AAC (HalpCmciPollProcessor.c)
 *     HalpHvInitMcaPcrContext @ 0x1403C54F0 (HalpHvInitMcaPcrContext.c)
 *     HalpMcaReadError @ 0x1404BA810 (HalpMcaReadError.c)
 *     HalpMceHandlerCore @ 0x1404BADC4 (HalpMceHandlerCore.c)
 *     HalpCmciInitProcessor @ 0x140999D20 (HalpCmciInitProcessor.c)
 *     HalpMceInitializeErrorPacket @ 0x1409A10E0 (HalpMceInitializeErrorPacket.c)
 *     HalpCmciInitializeErrorPacket @ 0x1409A136C (HalpCmciInitializeErrorPacket.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpGetMcaPcrContext(__int64 a1)
{
  if ( (a1 & 0x100000000LL) == 0 )
    return HalpMcaPcrContextData + 184LL * (unsigned int)a1;
  LODWORD(a1) = a1 & 0x7FFFFFFF;
  return HalpHvVpMcaPcrContextData + 184LL * (unsigned int)((__int64 (__fastcall *)(__int64))qword_140C4A220)(a1);
}
