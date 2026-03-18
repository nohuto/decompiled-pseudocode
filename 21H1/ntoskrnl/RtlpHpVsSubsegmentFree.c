/*
 * XREFs of RtlpHpVsSubsegmentFree @ 0x14030F9E4
 * Callers:
 *     RtlpHpVsContextFree @ 0x14024E150 (RtlpHpVsContextFree.c)
 *     RtlpHpVsContextFreeInternal @ 0x14035E130 (RtlpHpVsContextFreeInternal.c)
 *     RtlpHpHeapDestroy @ 0x140386034 (RtlpHpHeapDestroy.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentFree(__int64 a1, __int64 a2, unsigned int a3)
{
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 144)))(
           a1 ^ *(_QWORD *)(a1 + 128),
           a2,
           16 * ((unsigned int)*(unsigned __int16 *)(a2 + 32) + 3),
           a3);
}
