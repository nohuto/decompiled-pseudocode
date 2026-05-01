/*
 * XREFs of sub_18000C6B0 @ 0x18000C6B0
 * Callers:
 *     sub_18000C860 @ 0x18000C860 (sub_18000C860.c)
 * Callees:
 *     sub_18000C750 @ 0x18000C750 (sub_18000C750.c)
 *     sub_180027D94 @ 0x180027D94 (sub_180027D94.c)
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_18000C6B0(__int64 a1)
{
  int v2; // edi
  __int128 v3; // xmm1
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v6 = 0LL;
  v2 = sub_18000C750(&v5, a1);
  if ( v2 < 0 )
  {
    sub_180027D94(&v5);
  }
  else
  {
    v2 = 0;
    memset((void *)(a1 + 1200), 0, 0x80uLL);
    *(_OWORD *)(a1 + 1168) = 0LL;
    *(_OWORD *)(a1 + 1184) = 0LL;
    *(_DWORD *)(a1 + 1192) = 1;
    RtlInitializeConditionVariable(a1 + 1232);
    v3 = v6;
    *(_OWORD *)(a1 + 1296) = v5;
    *(_OWORD *)(a1 + 1312) = v3;
  }
  return (unsigned int)v2;
}
