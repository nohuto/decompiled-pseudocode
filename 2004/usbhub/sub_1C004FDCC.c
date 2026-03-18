/*
 * XREFs of sub_1C004FDCC @ 0x1C004FDCC
 * Callers:
 *     sub_1C004F5D0 @ 0x1C004F5D0 (sub_1C004F5D0.c)
 * Callees:
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 */

__int64 __fastcall sub_1C004FDCC(__int64 a1, __int64 a2, __int64 a3)
{
  __m128 *PoolWithTag; // rax
  __m128 *v5; // rbx
  __int64 result; // rax

  PoolWithTag = (__m128 *)ExAllocatePoolWithTag(PoolType, 0xBEuLL, 0x42554855u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  sub_1C001D340(PoolWithTag, 0, 0xBEuLL);
  *v5 = *(__m128 *)L"USB\\DevClass_00&SubClass_00&Prot_00";
  v5[1] = *(__m128 *)L"lass_00&SubClass_00&Prot_00";
  v5[2] = *(__m128 *)L"SubClass_00&Prot_00";
  v5[3] = *(__m128 *)L"_00&Prot_00";
  v5[4] = *(__m128 *)L"_00";
  v5[5] = *(__m128 *)&aUsbDevclass00S[40];
  v5[6] = *(__m128 *)&aUsbDevclass00S[48];
  v5[7] = *(__m128 *)&aUsbDevclass00S[56];
  v5[8] = *(__m128 *)&aUsbDevclass00S[64];
  v5[9] = *(__m128 *)&aUsbDevclass00S[72];
  v5[10] = *(__m128 *)&aUsbDevclass00S[80];
  v5[11].m128_u64[0] = *(_QWORD *)&aUsbDevclass00S[88];
  v5[11].m128_i32[2] = *(_DWORD *)&aUsbDevclass00S[92];
  v5[11].m128_i16[6] = aUsbDevclass00S[94];
  result = 0LL;
  *(_QWORD *)(a3 + 8) = v5;
  *(_DWORD *)(a3 + 4) = 190;
  return result;
}
