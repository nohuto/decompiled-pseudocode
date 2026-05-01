/*
 * XREFs of sub_1800061F8 @ 0x1800061F8
 * Callers:
 *     sub_18000DA20 @ 0x18000DA20 (sub_18000DA20.c)
 * Callees:
 *     sub_180006258 @ 0x180006258 (sub_180006258.c)
 *     sub_180006278 @ 0x180006278 (sub_180006278.c)
 *     sub_1800062A4 @ 0x1800062A4 (sub_1800062A4.c)
 *     sub_1800179D8 @ 0x1800179D8 (sub_1800179D8.c)
 */

__int64 __fastcall sub_1800061F8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rax
  __int64 v4; // rdx
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // eax
  int v9; // ecx

  for ( i = sub_180006258(a1, a2, a3); ; i = sub_1800062A4(v7, v6, v7) )
  {
    if ( !i )
      return 0LL;
    LOBYTE(v4) = 1;
    if ( (unsigned int)sub_180006278(i, v4) )
    {
      v8 = sub_1800179D8(*(unsigned int *)(v7 + 424));
      v9 = *(_DWORD *)(v7 + 480) & 3;
      if ( v9 <= v8 )
        v9 = v8;
      if ( v9 >= 2 )
        break;
    }
  }
  return 1LL;
}
