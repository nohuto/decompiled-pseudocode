/*
 * XREFs of sub_180030270 @ 0x180030270
 * Callers:
 *     sub_18002D560 @ 0x18002D560 (sub_18002D560.c)
 * Callees:
 *     sub_180032AD0 @ 0x180032AD0 (sub_180032AD0.c)
 *     sub_180034AFC @ 0x180034AFC (sub_180034AFC.c)
 *     sub_180034D48 @ 0x180034D48 (sub_180034D48.c)
 */

__int64 __fastcall sub_180030270(__int64 a1, int a2, __int128 *a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v9; // r8
  __int64 v10; // rbx
  __int128 v11; // xmm0
  _BYTE v12[4]; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+34h] [rbp-24h] BYREF
  int v14; // [rsp+38h] [rbp-20h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h] BYREF
  __int64 v16; // [rsp+48h] [rbp-10h] BYREF

  result = sub_180032AD0(a1, a2, (unsigned int)&v14, (unsigned int)&v13, (__int64)&v16, (__int64)&v15);
  if ( (int)result >= 0 )
  {
    v10 = v15;
    if ( v15 )
    {
LABEL_9:
      v11 = *a3;
      *a4 = v10;
      result = 0LL;
      *(_OWORD *)(v10 + 8) = v11;
      return result;
    }
    if ( !*(_QWORD *)(a1 + 8) )
    {
      LOBYTE(v9) = 1;
      result = sub_180034AFC(a1, *(unsigned int *)(a1 + 24), v9, v12);
      if ( (int)result < 0 )
        return result;
      if ( !v12[0] )
        return 2147942414LL;
    }
    result = sub_180034D48(a1, a2, v14, v13, (__int64)&v15);
    if ( (int)result >= 0 )
    {
      v10 = v15;
      goto LABEL_9;
    }
  }
  return result;
}
