/*
 * XREFs of HalpGetMcaPcrContext @ 0x1403AAB1C
 * Callers:
 *     HalpCmciPollProcessor @ 0x1403AAA10 (HalpCmciPollProcessor.c)
 *     HalpHvInitMcaPcrContext @ 0x1403D2700 (HalpHvInitMcaPcrContext.c)
 *     HalpCmciInitializeErrorPacket @ 0x1403D2750 (HalpCmciInitializeErrorPacket.c)
 *     HalpMcaStuckErrorCheck @ 0x1405075B4 (HalpMcaStuckErrorCheck.c)
 *     HalpMceHandlerCore @ 0x140507820 (HalpMceHandlerCore.c)
 *     HalpCmciInitProcessor @ 0x140A53718 (HalpCmciInitProcessor.c)
 *     HalpMceInitializeErrorPacket @ 0x140A5A98C (HalpMceInitializeErrorPacket.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpGetMcaPcrContext(__int64 a1)
{
  if ( (a1 & 0x100000000LL) == 0 )
    return HalpMcaPcrContextData + 192LL * (unsigned int)a1;
  LODWORD(a1) = a1 & 0x7FFFFFFF;
  return HalpHvVpMcaPcrContextData + 192LL * (unsigned int)((__int64 (__fastcall *)(__int64))qword_140C4C520)(a1);
}
