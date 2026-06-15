/*
 * XREFs of sub_180100608 @ 0x180100608
 * Callers:
 *     sub_180100ADC @ 0x180100ADC (sub_180100ADC.c)
 * Callees:
 *     sub_1800FEBC0 @ 0x1800FEBC0 (sub_1800FEBC0.c)
 */

__int64 __fastcall sub_180100608(volatile signed __int32 **a1, volatile signed __int32 *a2)
{
  volatile signed __int32 *v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = sub_1800FEBC0(v4);
  *a1 = a2;
  return result;
}
