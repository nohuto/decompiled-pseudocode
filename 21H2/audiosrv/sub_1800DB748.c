/*
 * XREFs of sub_1800DB748 @ 0x1800DB748
 * Callers:
 *     sub_1800DB7BC @ 0x1800DB7BC (sub_1800DB7BC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800DB748(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v4; // rax
  bool v5; // zf
  __int64 v6; // rdx
  __int64 v7; // rax

  v2 = 0;
  if ( a2 )
  {
    if ( *(_WORD *)a1 == 0xFFFE )
    {
      v4 = *(_QWORD *)(a1 + 24) - *(_QWORD *)a2;
      if ( !v4 )
        v4 = *(_QWORD *)(a1 + 32) - *(_QWORD *)(a2 + 8);
      v5 = v4 == 0;
      goto LABEL_11;
    }
    v6 = 0x80001000000000LL - *(_QWORD *)(a2 + 2);
    if ( *(_QWORD *)(a2 + 2) == 0x80001000000000LL )
    {
      v7 = *(unsigned int *)(a2 + 10);
      v6 = 939567616 - v7;
      if ( v7 == 939567616 )
        v6 = 29083LL - *(unsigned __int16 *)(a2 + 14);
    }
    if ( !v6 )
    {
      v5 = *(_WORD *)a2 == *(_WORD *)a1;
LABEL_11:
      LOBYTE(v2) = v5;
    }
  }
  return v2;
}
