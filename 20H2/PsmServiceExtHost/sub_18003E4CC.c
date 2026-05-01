/*
 * XREFs of sub_18003E4CC @ 0x18003E4CC
 * Callers:
 *     sub_18003E350 @ 0x18003E350 (sub_18003E350.c)
 *     sub_1800408D0 @ 0x1800408D0 (sub_1800408D0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18003E4CC(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v3; // r8d
  __int64 v4; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_BYTE *)(a1 + 2712) & 1) == 0 )
  {
    v3 = a3 - *(_DWORD *)(a1 + 568);
    v4 = a2 - v3;
    if ( v3 > a2 )
      v4 = 0LL;
    v5 = -10000 * v4;
    TpSetTimer(*(_QWORD *)(a1 + 560), &v5, a2, 300000LL);
  }
}
