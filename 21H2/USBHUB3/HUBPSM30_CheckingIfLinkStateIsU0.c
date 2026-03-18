/*
 * XREFs of HUBPSM30_CheckingIfLinkStateIsU0 @ 0x1C0011DD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBPSM30_CheckingIfLinkStateIsU0(__int64 a1)
{
  __int16 v1; // cx
  __int64 result; // rax

  v1 = *(_WORD *)(*(_QWORD *)(a1 + 960) + 184LL) & 0x1E0;
  if ( (v1 & 0xFF9F) != 0 )
    return 3005LL;
  result = 3089LL;
  if ( v1 == 96 )
    return 3005LL;
  return result;
}
