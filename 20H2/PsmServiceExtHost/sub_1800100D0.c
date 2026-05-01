/*
 * XREFs of sub_1800100D0 @ 0x1800100D0
 * Callers:
 *     sub_18000FFE4 @ 0x18000FFE4 (sub_18000FFE4.c)
 *     sub_180010560 @ 0x180010560 (sub_180010560.c)
 *     sub_180012984 @ 0x180012984 (sub_180012984.c)
 *     sub_180016AF0 @ 0x180016AF0 (sub_180016AF0.c)
 *     sub_180034F98 @ 0x180034F98 (sub_180034F98.c)
 *     sub_180072790 @ 0x180072790 (sub_180072790.c)
 *     sub_180072FA0 @ 0x180072FA0 (sub_180072FA0.c)
 *     sub_1800730C0 @ 0x1800730C0 (sub_1800730C0.c)
 *     sub_180074BB0 @ 0x180074BB0 (sub_180074BB0.c)
 *     sub_180075DA0 @ 0x180075DA0 (sub_180075DA0.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_1800100D0(__int64 a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD v15[30]; // [rsp+30h] [rbp-D0h] BYREF

  memset(v15, 0, sizeof(v15));
  v4 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)((char *)v15 + 4) = -1LL;
  NtManagePartition(v4, 0LL, 0LL, v15, 240);
  v5 = qword_1800B41B0;
  v6 = qword_1800B41B0;
  v7 = v15[28] * qword_1800B41B0;
  a2[4] = 0LL;
  a2[8] = 0LL;
  a2[9] = 0LL;
  v8 = v15[6] * v5;
  v9 = v15[4] * v6 - v7;
  v10 = v15[27] * v5 - v7;
  a2[1] = v9;
  *a2 = v10;
  v11 = v8 - v7;
  result = v15[3] * v5 - v7;
  a2[5] = v11;
  v13 = v15[19] + v15[20] + v15[21] + v15[22] + v15[23] + v15[24] + v15[25] + v15[26];
  a2[3] = v9 - result;
  v14 = v5 * (v15[8] + v15[9] + v15[16] + v15[15] + v15[14] + v15[13] + v15[11] + v15[12]);
  a2[2] = result;
  a2[6] = v14;
  a2[8] += v13;
  a2[7] = v11 - v14;
  return result;
}
