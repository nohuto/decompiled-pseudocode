/*
 * XREFs of sub_1800270E0 @ 0x1800270E0
 * Callers:
 *     sub_180027048 @ 0x180027048 (sub_180027048.c)
 * Callees:
 *     sub_180027150 @ 0x180027150 (sub_180027150.c)
 */

__int64 __fastcall sub_1800270E0(__int64 a1)
{
  int v2; // edx
  __int16 v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = TpAllocWork(a1 + 560, sub_180023070, a1, 0LL);
  if ( v2 >= 0 )
  {
    v2 = sub_180027150(a1, &v4);
    if ( (int)(v2 + 0x80000000) < 0 || v2 == -1073283070 )
    {
      v2 = 0;
      *(_WORD *)(a1 + 608) = v4;
    }
  }
  return (unsigned int)v2;
}
