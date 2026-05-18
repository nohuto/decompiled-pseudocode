/*
 * XREFs of sub_1800D5F90 @ 0x1800D5F90
 * Callers:
 *     sub_180070EC0 @ 0x180070EC0 (sub_180070EC0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1800D5F90(__int64 a1)
{
  char result; // al

  result = *(_BYTE *)(a1 + 184);
  if ( result )
    return sub_1800D5F30(a1, *(_QWORD *)(a1 + 192));
  return result;
}
