/*
 * XREFs of sub_180006158 @ 0x180006158
 * Callers:
 *     sub_180005750 @ 0x180005750 (sub_180005750.c)
 *     sub_180006018 @ 0x180006018 (sub_180006018.c)
 * Callees:
 *     sub_180006258 @ 0x180006258 (sub_180006258.c)
 *     sub_180006278 @ 0x180006278 (sub_180006278.c)
 *     sub_1800062A4 @ 0x1800062A4 (sub_1800062A4.c)
 *     sub_1800468FC @ 0x1800468FC (sub_1800468FC.c)
 */

__int64 __fastcall sub_180006158(__int64 a1)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rdx
  __int64 i; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  char v9; // [rsp+30h] [rbp+8h] BYREF
  char v10; // [rsp+38h] [rbp+10h] BYREF

  sub_1800468FC(a1, &v9, &v10);
  v3 = *(_QWORD *)(a1 + 648);
  if ( ((v3 >> 16) & 3) == 0 )
    return 0LL;
  if ( ((v3 >> 16) & 3) == 1 )
  {
    if ( v9 < 0 && v10 >= 0 && (v3 & 0x40000000000LL) == 0 )
    {
      for ( i = sub_180006258(a1, v3, v2); ; i = sub_1800062A4(v7, v5, v6) )
      {
        v7 = i;
        if ( !i )
          break;
        if ( (*(_BYTE *)(i + 544) & 0x28) == 0 )
        {
          LOBYTE(v5) = 5;
          if ( (unsigned int)sub_180006278(i, v5) )
          {
            if ( (*(_DWORD *)(v7 + 112) & 0x2000) != 0 )
              return 0LL;
          }
        }
      }
      return 1LL;
    }
    return 0LL;
  }
  if ( ((v3 >> 16) & 3) != 2 )
    return ((v3 >> 16) & 3) == 3;
  return (v3 & 0x10000000000000LL) == 0;
}
