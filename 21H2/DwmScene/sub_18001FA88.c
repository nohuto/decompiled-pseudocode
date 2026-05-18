/*
 * XREFs of sub_18001FA88 @ 0x18001FA88
 * Callers:
 *     sub_18001D460 @ 0x18001D460 (sub_18001D460.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_180019DCC @ 0x180019DCC (sub_180019DCC.c)
 *     sub_1800AF9DC @ 0x1800AF9DC (sub_1800AF9DC.c)
 *     sub_1800B1EC0 @ 0x1800B1EC0 (sub_1800B1EC0.c)
 *     sub_1800B20E0 @ 0x1800B20E0 (sub_1800B20E0.c)
 *     sub_18011ABCC @ 0x18011ABCC (sub_18011ABCC.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18001FA88(__int64 a1, __int64 a2)
{
  __m128 *v4; // rax
  char result; // al
  _OWORD v6[4]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE pExceptionObject[72]; // [rsp+60h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a1 + 316) != 5 )
  {
    sub_18000FE28(v6);
    sub_18011ABCC(pExceptionObject, v6, 0LL);
    throw (Spectre::Utils::SpectreException *)pExceptionObject;
  }
  v4 = (__m128 *)sub_1800AF9DC(a1, 1LL, 2LL);
  result = sub_180019DCC((__m128 *)a2, v4);
  if ( result )
  {
    v6[0] = *(_OWORD *)a2;
    v6[1] = *(_OWORD *)(a2 + 16);
    v6[2] = *(_OWORD *)(a2 + 32);
    v6[3] = *(_OWORD *)(a2 + 48);
    ((void (__fastcall *)(__int64, __int64, __int64, _OWORD *))sub_1800B20E0)(a1, 1LL, 2LL, v6);
    return sub_1800B1EC0(a1, 2LL);
  }
  return result;
}
