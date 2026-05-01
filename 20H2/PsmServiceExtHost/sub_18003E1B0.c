/*
 * XREFs of sub_18003E1B0 @ 0x18003E1B0
 * Callers:
 *     sub_18003C3C0 @ 0x18003C3C0 (sub_18003C3C0.c)
 *     sub_18003EC60 @ 0x18003EC60 (sub_18003EC60.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003E1B0(__int64 *a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  result = *a1;
  if ( (*(_BYTE *)(*(_QWORD *)(*a1 + 24) + 2712LL) & 1) == 0 )
  {
    if ( a2 == 1 )
      v4 = 0xFFFFFFFFLL;
    else
      v4 = 1000LL;
    v5 = a1[8];
    v6 = -50000000LL;
    if ( a3 > 0 )
      v6 = -10000000LL;
    v7 = v6;
    return TpSetTimer(v5, &v7, 0LL, v4);
  }
  return result;
}
