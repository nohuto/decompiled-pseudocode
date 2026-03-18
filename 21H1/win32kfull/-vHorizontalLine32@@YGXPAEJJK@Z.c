/*
 * XREFs of ?vHorizontalLine32@@YGXPAEJJK@Z @ 0x240236
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vHorizontalLine32(unsigned __int8 *a1, int a2, int a3, ULONG Pattern)
{
  if ( a3 != a2 )
    RtlFillMemoryUlong(&a1[4 * a2], 4 * (a3 - a2), Pattern);
}
