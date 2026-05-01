/*
 * XREFs of sub_1800360B0 @ 0x1800360B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800360B0(__int64 a1, _QWORD *a2)
{
  if ( *a2 != *(_QWORD *)(a1 + 88) )
    return 1LL;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 24)) <= 1 )
    __fastfail(0xEu);
  a2[1] = a1;
  return 0LL;
}
