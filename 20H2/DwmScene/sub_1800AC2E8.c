/*
 * XREFs of sub_1800AC2E8 @ 0x1800AC2E8
 * Callers:
 *     sub_1800C4498 @ 0x1800C4498 (sub_1800C4498.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800AC2E8(__int64 a1, float a2)
{
  if ( a2 != *(float *)(a1 + 332) )
  {
    *(_DWORD *)(a1 + 544) |= 2u;
    *(float *)(a1 + 332) = a2;
  }
}
