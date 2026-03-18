/*
 * XREFs of RtlpHpVsSubsegmentFree @ 0x14031DFF0
 * Callers:
 *     RtlpHpVsContextFree @ 0x140215910 (RtlpHpVsContextFree.c)
 *     RtlpHpVsContextFreeInternal @ 0x14023B39C (RtlpHpVsContextFreeInternal.c)
 *     RtlpHpHeapDestroy @ 0x140389164 (RtlpHpHeapDestroy.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentFree(__int64 a1, __int64 a2, unsigned int a3)
{
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 144)))(
           a1 ^ *(_QWORD *)(a1 + 128),
           a2,
           16 * ((unsigned int)*(unsigned __int16 *)(a2 + 32) + 3),
           a3);
}
