/*
 * XREFs of sub_180031100 @ 0x180031100
 * Callers:
 *     <none>
 * Callees:
 *     sub_180031128 @ 0x180031128 (sub_180031128.c)
 */

int __fastcall sub_180031100(__int64 a1, unsigned int a2, __int64 a3)
{
  int v3; // eax

  v3 = sub_180031128(a2, a3);
  if ( v3 < 0 )
    return v3 | 0x10000000;
  else
    return 0;
}
