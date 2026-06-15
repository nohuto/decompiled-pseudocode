/*
 * XREFs of sub_1800DD094 @ 0x1800DD094
 * Callers:
 *     sub_1800DB7BC @ 0x1800DB7BC (sub_1800DB7BC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800DD094(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v4; // rcx
  __int64 v5; // rax

  v2 = 0;
  if ( *(_WORD *)a1 == 0xFFFE )
  {
    *(_OWORD *)(a1 + 24) = *(_OWORD *)a2;
    return 1;
  }
  v4 = 0x80001000000000LL - *(_QWORD *)(a2 + 2);
  if ( *(_QWORD *)(a2 + 2) == 0x80001000000000LL )
  {
    v5 = *(unsigned int *)(a2 + 10);
    v4 = 939567616 - v5;
    if ( v5 == 939567616 )
      v4 = 29083LL - *(unsigned __int16 *)(a2 + 14);
  }
  if ( !v4 )
  {
    *(_WORD *)a1 = *(_WORD *)a2;
    return 1;
  }
  return v2;
}
