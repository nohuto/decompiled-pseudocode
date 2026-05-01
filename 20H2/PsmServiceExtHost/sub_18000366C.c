/*
 * XREFs of sub_18000366C @ 0x18000366C
 * Callers:
 *     sub_180004214 @ 0x180004214 (sub_180004214.c)
 *     sub_18007D9F0 @ 0x18007D9F0 (sub_18007D9F0.c)
 *     sub_18007E664 @ 0x18007E664 (sub_18007E664.c)
 * Callees:
 *     sub_180006258 @ 0x180006258 (sub_180006258.c)
 *     sub_1800062A4 @ 0x1800062A4 (sub_1800062A4.c)
 */

__int64 __fastcall sub_18000366C(__int64 a1, __int64 a2)
{
  __int64 i; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  int v5; // ecx

  for ( i = sub_180006258(a1, a2, 0LL); i; i = sub_1800062A4(i, v3, v4) )
  {
    if ( *(_BYTE *)(i + 548) == 3 )
    {
      v5 = *(_DWORD *)(i + 112) & 0x7F;
      if ( v5 != 64 )
        v4 |= 1LL << v5;
    }
  }
  return v4;
}
