/*
 * XREFs of sub_180031660 @ 0x180031660
 * Callers:
 *     <none>
 * Callees:
 *     sub_180031DD0 @ 0x180031DD0 (sub_180031DD0.c)
 *     sub_180032108 @ 0x180032108 (sub_180032108.c)
 */

__int64 __fastcall sub_180031660(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // rdi
  int v4; // ebx
  bool v5; // si

  *a3 = 0;
  v3 = a1;
  if ( *(_BYTE *)(a1 + 109) )
  {
    v5 = 0;
    v4 = 0;
    while ( !v5 )
    {
      if ( !v3 || !*(_DWORD *)(v3 + 104) )
        return 0;
      v4 = sub_180032108(v3);
      if ( v4 < 0 )
        return (unsigned int)v4;
      v4 = sub_180031DD0(*(_QWORD *)(v3 + 80), a2, a3);
      if ( v4 < 0 )
        return (unsigned int)v4;
      v5 = *a3 != 0;
      v3 = *(_QWORD *)(v3 + 88);
    }
  }
  else
  {
    v4 = -2147418113;
    RoOriginateError(2147549183LL, 0LL);
  }
  return (unsigned int)v4;
}
