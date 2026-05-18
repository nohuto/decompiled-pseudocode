/*
 * XREFs of sub_18012FC9B @ 0x18012FC9B
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800BDAD4 @ 0x1800BDAD4 (sub_1800BDAD4.c)
 */

void __fastcall sub_18012FC9B(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    sub_1800BDAD4(*(void **)(a2 + 256));
  }
}
