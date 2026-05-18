/*
 * XREFs of sub_18002D430 @ 0x18002D430
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009ADC0 @ 0x18009ADC0 (sub_18009ADC0.c)
 */

__int64 __fastcall sub_18002D430(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_QWORD *)(a1 + 96) )
    return sub_18009ADC0();
  return result;
}
