/*
 * XREFs of HalpGetMcaPcrContext @ 0x1403A0308
 * Callers:
 *     HalpCmciPollProcessor @ 0x1403A01EC (HalpCmciPollProcessor.c)
 *     HalpHvInitMcaPcrContext @ 0x1403C4D90 (HalpHvInitMcaPcrContext.c)
 *     HalpMcaReadError @ 0x1404B8E50 (HalpMcaReadError.c)
 *     HalpMceHandlerCore @ 0x1404B9404 (HalpMceHandlerCore.c)
 *     HalpCmciInitProcessor @ 0x14099C7A0 (HalpCmciInitProcessor.c)
 *     HalpMceInitializeErrorPacket @ 0x1409A38C0 (HalpMceInitializeErrorPacket.c)
 *     HalpCmciInitializeErrorPacket @ 0x1409A3B4C (HalpCmciInitializeErrorPacket.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpGetMcaPcrContext(__int64 a1)
{
  if ( (a1 & 0x100000000LL) == 0 )
    return HalpMcaPcrContextData + 184LL * (unsigned int)a1;
  LODWORD(a1) = a1 & 0x7FFFFFFF;
  return HalpHvVpMcaPcrContextData + 184LL * (unsigned int)((__int64 (__fastcall *)(__int64))qword_140C4A300)(a1);
}
