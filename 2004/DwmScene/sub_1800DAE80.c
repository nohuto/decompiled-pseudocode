/*
 * XREFs of sub_1800DAE80 @ 0x1800DAE80
 * Callers:
 *     sub_1800686A4 @ 0x1800686A4 (sub_1800686A4.c)
 * Callees:
 *     sub_18008A608 @ 0x18008A608 (sub_18008A608.c)
 */

char __fastcall sub_1800DAE80(__int64 a1, __m128 *a2)
{
  __int32 v4; // eax

  LOBYTE(v4) = sub_18008A608(a2, (__m128 *)(a1 + 44));
  if ( (_BYTE)v4 )
  {
    *(_DWORD *)(a1 + 44) = a2->m128_i32[0];
    *(_DWORD *)(a1 + 48) = a2->m128_i32[1];
    *(_DWORD *)(a1 + 52) = a2->m128_i32[2];
    v4 = a2->m128_i32[3];
    *(_DWORD *)(a1 + 56) = v4;
    *(_BYTE *)(a1 + 61) = 1;
  }
  return v4;
}
