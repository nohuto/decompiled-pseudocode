/*
 * XREFs of sub_180029BA8 @ 0x180029BA8
 * Callers:
 *     sub_180005750 @ 0x180005750 (sub_180005750.c)
 *     sub_180028ECC @ 0x180028ECC (sub_180028ECC.c)
 * Callees:
 *     sub_1800062C8 @ 0x1800062C8 (sub_1800062C8.c)
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001BD70 @ 0x18001BD70 (sub_18001BD70.c)
 *     sub_180023230 @ 0x180023230 (sub_180023230.c)
 *     sub_180025C98 @ 0x180025C98 (sub_180025C98.c)
 *     sub_180025F88 @ 0x180025F88 (sub_180025F88.c)
 *     sub_1800277CC @ 0x1800277CC (sub_1800277CC.c)
 *     sub_1800297B0 @ 0x1800297B0 (sub_1800297B0.c)
 *     sub_180029A00 @ 0x180029A00 (sub_180029A00.c)
 *     sub_180029B00 @ 0x180029B00 (sub_180029B00.c)
 *     sub_180029ED0 @ 0x180029ED0 (sub_180029ED0.c)
 *     sub_180029F0C @ 0x180029F0C (sub_180029F0C.c)
 *     sub_18002AC2C @ 0x18002AC2C (sub_18002AC2C.c)
 *     sub_18002ADE0 @ 0x18002ADE0 (sub_18002ADE0.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180029BA8(__int64 a1, UINT32 a2, unsigned int a3, UINT32 a4, _DWORD *a5)
{
  UINT32 v5; // ebx
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdx
  __int64 v11; // r14
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v15; // rbx
  UINT32 v16[5]; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned __int64 v17; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v18[6]; // [rsp+A0h] [rbp-60h] BYREF
  WCHAR v19[136]; // [rsp+D0h] [rbp-30h] BYREF

  v5 = 0;
  v16[1] = a2;
  if ( (*(_QWORD *)(a1 + 648) & 0x2000000000000LL) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 968);
    if ( (int)sub_180029B00(a1, &v17) < 0 || (v10 = v17, v17 == -1LL) )
      v10 = v9;
    sub_180029A00(a1, (v9 >> 1) + (v10 >> 1));
    if ( *(_DWORD *)(a1 + 560) == 2 )
      sub_18002AC2C(*(_QWORD *)(a1 + 776), a3);
    sub_180025F88((_QWORD *)a1);
    v5 = 0;
  }
  sub_1800093A0(a1, 0);
  v11 = *(_QWORD *)(a1 + 800) + 1LL;
  sub_1800062C8(a1, a3, v11, 0);
  if ( (*(_QWORD *)(a1 + 648) & 0x2000000000000LL) != 0 )
  {
    *a5 = 1;
    if ( *(_DWORD *)(a1 + 836) )
    {
      RtlQueryUnbiasedInterruptTime(v18);
      v5 = v18[0] / 0x2710uLL - *(_DWORD *)(a1 + 836);
    }
    if ( dword_1800B3218 )
    {
      v16[0] = 130;
      sub_1800297B0(a1 + 24, v16, v19);
      if ( (unsigned int)dword_1800B3218 > 4 )
      {
        if ( sub_180010470((__int64)&dword_1800B3218, 0x400000000008LL) )
        {
          v18[1] = 0x1000000LL;
          v18[2] = v19;
          v16[2] = a4;
          v18[3] = v11 - 1;
          v18[4] = *(_QWORD *)(a1 - 32);
          v16[3] = v5;
          v16[4] = a3;
          v18[5] = a1 + 24;
          sub_18002ADE0(v12, &unk_1800A0FAC);
        }
      }
    }
    if ( *(_DWORD *)(a1 + 560) == 2 )
    {
      v15 = *(_QWORD *)(a1 + 776);
      sub_1800277CC(v15);
      *(_WORD *)(v15 + 608) = a3;
      sub_180023230(v15);
    }
  }
  else
  {
    *a5 = 0;
  }
  *(_QWORD *)(a1 + 648) &= 0xFFFFFFFFFFFCFFFFuLL;
  *(_QWORD *)(a1 + 832) = 0LL;
  *(_WORD *)(a1 + 648) = 0;
  v13 = *(_QWORD *)(a1 + 648) & 0xFFEDFFFFFD97FFFFuLL;
  *(_QWORD *)(a1 + 800) = v11;
  *(_QWORD *)(a1 + 952) = 0LL;
  *(_QWORD *)(a1 + 648) = v13 | 0x1940000;
  *(_QWORD *)(a1 + 968) = 0LL;
  *(_DWORD *)(a1 + 840) = 0;
  sub_18001BD70(a1);
  sub_180029F0C(a1);
  RtlWakeAddressAll(a1 + 800);
  sub_180029ED0(a1);
  return sub_180025C98(a1, 3u);
}
