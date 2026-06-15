/*
 * XREFs of sub_18005FE78 @ 0x18005FE78
 * Callers:
 *     sub_18005EF08 @ 0x18005EF08 (sub_18005EF08.c)
 * Callees:
 *     sub_180009DE0 @ 0x180009DE0 (sub_180009DE0.c)
 */

bool __fastcall sub_18005FE78(__int64 a1)
{
  bool result; // al

  if ( *(_DWORD *)(a1 + 192) == 3 )
    return 1;
  result = sub_180009DE0(a1);
  if ( result )
    return 1;
  return result;
}
