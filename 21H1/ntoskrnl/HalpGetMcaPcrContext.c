/*
 * XREFs of HalpGetMcaPcrContext @ 0x14039D6A8
 * Callers:
 *     HalpCmciPollProcessor @ 0x14039D58C (HalpCmciPollProcessor.c)
 *     HalpHvInitMcaPcrContext @ 0x1403C1760 (HalpHvInitMcaPcrContext.c)
 *     HalpMcaReadError @ 0x1404B5250 (HalpMcaReadError.c)
 *     HalpMceHandlerCore @ 0x1404B5804 (HalpMceHandlerCore.c)
 *     HalpCmciInitProcessor @ 0x140995390 (HalpCmciInitProcessor.c)
 *     HalpMceInitializeErrorPacket @ 0x14099C020 (HalpMceInitializeErrorPacket.c)
 *     HalpCmciInitializeErrorPacket @ 0x14099C2AC (HalpCmciInitializeErrorPacket.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpGetMcaPcrContext(__int64 a1)
{
  if ( (a1 & 0x100000000LL) == 0 )
    return HalpMcaPcrContextData + 184LL * (unsigned int)a1;
  LODWORD(a1) = a1 & 0x7FFFFFFF;
  return HalpHvVpMcaPcrContextData + 184LL * (unsigned int)((__int64 (__fastcall *)(__int64))qword_140C4A400)(a1);
}
