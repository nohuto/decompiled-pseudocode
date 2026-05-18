/*
 * XREFs of sub_1800F6F34 @ 0x1800F6F34
 * Callers:
 *     sub_1800AA400 @ 0x1800AA400 (sub_1800AA400.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1800F6F34(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // r9

  v2 = *(_QWORD **)(a1 + 24);
  v3 = *(_QWORD **)(a1 + 32);
  if ( v2 != v3 )
  {
    while ( (a2 & *v2) != *v2 || (a2 & v2[1]) != 0 )
    {
      v2 += 2;
      if ( v2 == v3 )
        return 0;
    }
  }
  return 1;
}
