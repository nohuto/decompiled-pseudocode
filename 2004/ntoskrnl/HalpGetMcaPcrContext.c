/*
 * XREFs of HalpGetMcaPcrContext @ 0x14039DE38
 * Callers:
 *     HalpCmciPollProcessor @ 0x14039DD1C (HalpCmciPollProcessor.c)
 *     HalpHvInitMcaPcrContext @ 0x1403C2620 (HalpHvInitMcaPcrContext.c)
 *     HalpMcaReadError @ 0x1404B5930 (HalpMcaReadError.c)
 *     HalpMceHandlerCore @ 0x1404B5EE4 (HalpMceHandlerCore.c)
 *     HalpCmciInitProcessor @ 0x140996760 (HalpCmciInitProcessor.c)
 *     HalpMceInitializeErrorPacket @ 0x14099D7C0 (HalpMceInitializeErrorPacket.c)
 *     HalpCmciInitializeErrorPacket @ 0x14099DA4C (HalpCmciInitializeErrorPacket.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpGetMcaPcrContext(__int64 a1)
{
  if ( (a1 & 0x100000000LL) == 0 )
    return HalpMcaPcrContextData + 184LL * (unsigned int)a1;
  LODWORD(a1) = a1 & 0x7FFFFFFF;
  return HalpHvVpMcaPcrContextData + 184LL * (unsigned int)((__int64 (__fastcall *)(__int64))qword_140C4A2A0)(a1);
}
