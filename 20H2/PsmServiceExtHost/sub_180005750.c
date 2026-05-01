/*
 * XREFs of sub_180005750 @ 0x180005750
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800053EC @ 0x1800053EC (sub_1800053EC.c)
 *     sub_1800054FC @ 0x1800054FC (sub_1800054FC.c)
 *     sub_180005A68 @ 0x180005A68 (sub_180005A68.c)
 *     sub_180006158 @ 0x180006158 (sub_180006158.c)
 *     sub_1800062C8 @ 0x1800062C8 (sub_1800062C8.c)
 *     sub_1800066B0 @ 0x1800066B0 (sub_1800066B0.c)
 *     sub_1800067F0 @ 0x1800067F0 (sub_1800067F0.c)
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_18000EE4C @ 0x18000EE4C (sub_18000EE4C.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_180022120 @ 0x180022120 (sub_180022120.c)
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 *     sub_180026FA4 @ 0x180026FA4 (sub_180026FA4.c)
 *     sub_180029BA8 @ 0x180029BA8 (sub_180029BA8.c)
 *     sub_18002E0B4 @ 0x18002E0B4 (sub_18002E0B4.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18007C8DC @ 0x18007C8DC (sub_18007C8DC.c)
 */

int __fastcall sub_180005750(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r12
  int v4; // edi
  unsigned __int64 v5; // r13
  __int64 v6; // rcx
  int v7; // r15d
  __int64 v8; // r14
  unsigned int v9; // esi
  int v10; // edi
  unsigned int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // rcx
  bool v14; // zf
  int result; // eax
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  DWORD v19; // ebx
  _BYTE v20[4]; // [rsp+58h] [rbp-B0h] BYREF
  int v21; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned __int64 v22; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+68h] [rbp-A0h]
  _QWORD v24[3]; // [rsp+70h] [rbp-98h] BYREF
  char TlsValue[144]; // [rsp+88h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+118h] [rbp+10h] BYREF
  __int64 v27; // [rsp+128h] [rbp+20h]

  sub_18000B7F8(TlsValue);
  if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)sub_180010470(&dword_1800B3218, 64LL) )
    sub_18002E278((int)&dword_1800B3218, (int)&dword_1800A0BF1, 0, 0, 2u, &v26);
  v3 = *(_QWORD *)(a2 - 32);
  v4 = 0;
  v21 = 0;
  RtlQueryUnbiasedInterruptTime(v24);
  v26 = 0LL;
  v27 = 0LL;
  v5 = v24[0] / 0x2710uLL;
  sub_18001E380(v6);
  v7 = sub_18000EE4C(a2);
  sub_18000F390();
  sub_1800093A0(a2, 0LL);
  v8 = *(_QWORD *)(a2 + 648) >> 16;
  v9 = (unsigned __int16)*(_DWORD *)(a2 + 648);
  LODWORD(v24[0]) = WORD1(*(_QWORD *)(a2 + 648)) & 3;
  sub_180026FA4(a2);
  if ( v7 && (unsigned int)sub_180006158(a2) )
  {
    v10 = 1;
    if ( (v9 & 0xFFFFFF00) == 0x700 )
      sub_1800062C8(a2, v9, 0LL, 1LL);
    sub_18000A110(a2);
    if ( (*(_QWORD *)(a2 + 648) & 0x2000000000000LL) == 0
      || (int)sub_180022120(a2 - 64, 4096LL, 1LL, &v26) >= 0
      && (v11 = sub_1800053EC((__int64)&v26, v9), (unsigned int)v27 <= v11) )
    {
      if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)sub_180010470(&dword_1800B3218, 64LL) )
      {
        v20[0] = *(_BYTE *)(a2 + 560);
        LODWORD(v23) = v9;
        v22 = a2 + 24;
        v20[1] = v8 & 3;
        v24[1] = v3;
        sub_18007C8DC(&v22, &unk_1800A0D34);
      }
      v10 = 0;
    }
    sub_1800054FC(a2, (__int64)&v26);
    RtlQueryUnbiasedInterruptTime(&v22);
    sub_180029BA8(a2, v10 != 0 ? LODWORD(v24[0]) : 0, v10 != 0 ? v9 : 0, v22 / 0x2710 - v5, (__int64)&v21);
    v4 = v21;
  }
  *(_QWORD *)(a2 + 648) &= ~0x1000000000000uLL;
  RtlWakeAllConditionVariable(a2 + 680);
  v12 = sub_1800067F0(a2);
  *(_QWORD *)(a2 + 648) &= ~0x800000000uLL;
  sub_1800066B0(a2, v12);
  sub_18000A110(a2);
  sub_180005A68(&v26);
  if ( v4 )
  {
    sub_18001E380(v13);
    v14 = (*(_QWORD *)(a2 + 592))-- == 1LL;
    if ( v14 )
      sub_18000A1AC(a2 - 64);
    sub_18000F390();
  }
  if ( v7 )
  {
    sub_18001E380(v13);
    v14 = (*(_QWORD *)(a2 + 592))-- == 1LL;
    if ( v14 )
      sub_18000A1AC(a2 - 64);
    sub_18000F390();
  }
  result = sub_1800265B0((PVOID)(a2 - 64));
  if ( (unsigned int)dword_1800B3218 > 4 )
  {
    result = sub_180010470(&dword_1800B3218, 8LL);
    if ( (_BYTE)result )
    {
      v20[0] = v7;
      v22 = v3;
      result = sub_18002E0B4(v16, (unsigned int)&unk_1800A0CB7, v17, v18, (__int64)&v22, (__int64)v20);
    }
  }
  v19 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    return TlsSetValue(v19, 0LL);
  }
  return result;
}
