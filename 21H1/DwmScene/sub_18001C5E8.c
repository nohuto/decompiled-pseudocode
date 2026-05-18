/*
 * XREFs of sub_18001C5E8 @ 0x18001C5E8
 * Callers:
 *     sub_18001A5D0 @ 0x18001A5D0 (sub_18001A5D0.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180019328 @ 0x180019328 (sub_180019328.c)
 *     sub_1800AA10C @ 0x1800AA10C (sub_1800AA10C.c)
 *     sub_1800AC5F0 @ 0x1800AC5F0 (sub_1800AC5F0.c)
 *     sub_1800AC810 @ 0x1800AC810 (sub_1800AC810.c)
 *     sub_1801152FC @ 0x1801152FC (sub_1801152FC.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18001C5E8(__int64 a1, __int64 a2)
{
  __m128 *v4; // rax
  char result; // al
  _OWORD v6[4]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE pExceptionObject[72]; // [rsp+60h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a1 + 316) != 5 )
  {
    sub_18000FD48(v6);
    sub_1801152FC(pExceptionObject, v6, 0LL);
    throw (Spectre::Utils::SpectreException *)pExceptionObject;
  }
  v4 = (__m128 *)sub_1800AA10C(a1, 1LL, 2LL);
  result = sub_180019328((__m128 *)a2, v4);
  if ( result )
  {
    v6[0] = *(_OWORD *)a2;
    v6[1] = *(_OWORD *)(a2 + 16);
    v6[2] = *(_OWORD *)(a2 + 32);
    v6[3] = *(_OWORD *)(a2 + 48);
    ((void (__fastcall *)(__int64, __int64, __int64, _OWORD *))sub_1800AC810)(a1, 1LL, 2LL, v6);
    return sub_1800AC5F0(a1, 2LL);
  }
  return result;
}
