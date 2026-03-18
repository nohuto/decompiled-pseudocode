/*
 * XREFs of RtlpHpSegLfhExtendContext @ 0x14032C0B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpHeapExtendContext @ 0x14032C0CC (RtlpHpHeapExtendContext.c)
 */

__int64 __fastcall RtlpHpSegLfhExtendContext(__int64 a1)
{
  return RtlpHpHeapExtendContext(*(_QWORD *)(a1 + 56));
}
