/*
 * XREFs of sub_1800E0750 @ 0x1800E0750
 * Callers:
 *     sub_18006DF74 @ 0x18006DF74 (sub_18006DF74.c)
 * Callees:
 *     sub_18008FED8 @ 0x18008FED8 (sub_18008FED8.c)
 */

char __fastcall sub_1800E0750(__int64 a1, __m128 *a2)
{
  __int32 v4; // eax

  LOBYTE(v4) = sub_18008FED8(a2, (__m128 *)(a1 + 44));
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
