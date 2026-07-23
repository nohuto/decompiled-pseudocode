/*
 * XREFs of HalpGetMcaPcrContext @ 0x1403A0D18
 * Callers:
 *     HalpCmciPollProcessor @ 0x1403A0BFC (HalpCmciPollProcessor.c)
 *     HalpHvInitMcaPcrContext @ 0x1403C5920 (HalpHvInitMcaPcrContext.c)
 *     HalpMcaReadError @ 0x1404BAA50 (HalpMcaReadError.c)
 *     HalpMceHandlerCore @ 0x1404BB004 (HalpMceHandlerCore.c)
 *     HalpCmciInitProcessor @ 0x14099AD20 (HalpCmciInitProcessor.c)
 *     HalpMceInitializeErrorPacket @ 0x1409A2010 (HalpMceInitializeErrorPacket.c)
 *     HalpCmciInitializeErrorPacket @ 0x1409A229C (HalpCmciInitializeErrorPacket.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpGetMcaPcrContext(__int64 a1)
{
  if ( (a1 & 0x100000000LL) == 0 )
    return HalpMcaPcrContextData + 184LL * (unsigned int)a1;
  LODWORD(a1) = a1 & 0x7FFFFFFF;
  return HalpHvVpMcaPcrContextData + 184LL * (unsigned int)((__int64 (__fastcall *)(__int64))qword_140C4A260)(a1);
}
