/*
 * XREFs of RtlSetBit @ 0x1800811A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

signed __int32 *__fastcall RtlSetBit(__int64 a1, unsigned int a2)
{
  signed __int32 *result; // rax

  result = *(signed __int32 **)(a1 + 8);
  _bittestandset(result, a2);
  return result;
}
