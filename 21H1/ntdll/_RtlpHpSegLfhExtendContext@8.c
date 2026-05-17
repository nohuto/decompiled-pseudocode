/*
 * XREFs of _RtlpHpSegLfhExtendContext@8 @ 0x4B37BCF0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpHpHeapExtendContext@8 @ 0x4B378E8C (_RtlpHpHeapExtendContext@8.c)
 */

signed __int32 __stdcall RtlpHpSegLfhExtendContext(int a1, int a2)
{
  return RtlpHpHeapExtendContext(*(_DWORD *)(a1 + 36), a2);
}
