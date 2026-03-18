/*
 * XREFs of EtwInitializeProcessorActivityId @ 0x140829EC8
 * Callers:
 *     EtwpInitialize @ 0x140B0433C (EtwpInitialize.c)
 * Callees:
 *     EtwpInitializeActivityIdSeed @ 0x140829EEC (EtwpInitializeActivityIdSeed.c)
 */

__int64 __fastcall EtwInitializeProcessorActivityId(__int64 a1)
{
  EtwpInitializeActivityIdSeed(*(_QWORD *)(a1 + 34472), *(unsigned int *)(a1 + 36));
  return 0LL;
}
