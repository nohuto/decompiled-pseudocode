/*
 * XREFs of sub_18009ADC0 @ 0x18009ADC0
 * Callers:
 *     sub_18002D430 @ 0x18002D430 (sub_18002D430.c)
 *     sub_180030200 @ 0x180030200 (sub_180030200.c)
 *     sub_180030E0C @ 0x180030E0C (sub_180030E0C.c)
 *     sub_18003156C @ 0x18003156C (sub_18003156C.c)
 *     sub_180034B50 @ 0x180034B50 (sub_180034B50.c)
 *     sub_1800371F0 @ 0x1800371F0 (sub_1800371F0.c)
 *     sub_180037A70 @ 0x180037A70 (sub_180037A70.c)
 *     sub_1800CAC58 @ 0x1800CAC58 (sub_1800CAC58.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18009ADC0(__int64 a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *(__int64 **)(a1 + 112);
  result = 0LL;
  if ( v1 )
    v3 = *v1;
  else
    v3 = 0LL;
  if ( v3 )
    return *(unsigned int *)(v3 + 16);
  return result;
}
