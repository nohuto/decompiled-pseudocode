/*
 * XREFs of sub_180074BB0 @ 0x180074BB0
 * Callers:
 *     StartAddress @ 0x18003E530 (StartAddress.c)
 * Callees:
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_1800100D0 @ 0x1800100D0 (sub_1800100D0.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_180034F2C @ 0x180034F2C (sub_180034F2C.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18006ACA0 @ 0x18006ACA0 (sub_18006ACA0.c)
 *     sub_180071A28 @ 0x180071A28 (sub_180071A28.c)
 *     sub_180073F88 @ 0x180073F88 (sub_180073F88.c)
 *     sub_180074A1C @ 0x180074A1C (sub_180074A1C.c)
 *     sub_180075C4C @ 0x180075C4C (sub_180075C4C.c)
 *     sub_1800763F0 @ 0x1800763F0 (sub_1800763F0.c)
 */

_QWORD *__fastcall sub_180074BB0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r14
  __int64 v5; // rbx
  __int64 v6; // r15
  unsigned __int64 v7; // rsi
  int v8; // edx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r10
  int v16; // r11d
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r10
  __int64 v21; // rcx
  unsigned int v22; // r9d
  int v23; // r10d
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  int v29; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD *v32[3]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v33[10]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v34[10]; // [rsp+C0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+110h] [rbp+10h] BYREF

  v2 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
  v32[1] = v32;
  v32[0] = v32;
  v32[2] = *(_QWORD **)(a1 + 32);
  sub_180034F2C(v2, v5 + 400, a2, 0LL);
  sub_18001E380();
  v6 = *(_QWORD *)a1;
  v7 = 0LL;
  *(_WORD *)(v6 + 188) = 0;
  sub_180071A28(
    v2,
    *(_DWORD *)(v5 + 516),
    v6 + 144,
    3,
    (unsigned __int8 (__fastcall *)(__int64, __int64))sub_180074B80,
    0LL);
  if ( *(_DWORD *)(v6 + 180) )
  {
    v10 = *(_QWORD **)(v6 + 144);
    v11 = *(unsigned int *)(v6 + 180);
    do
    {
      v7 += *v10;
      v10 += 8;
      --v11;
    }
    while ( v11 );
    if ( v7 >= a2[12] )
    {
      v16 = dword_1800B31E0;
      if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
      {
        v29 = v19;
        v31 = v20;
        v30 = v7;
        sub_180073F88(v17, byte_18009E481, v18, v19, (__int64)&v30, (__int64)&v31, (__int64)&v29);
        v16 = dword_1800B31E0;
      }
      if ( v16 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
        sub_1800100D0(v2, v34);
      sub_180075C4C(v2, v8, a2[12] - v7, 1, 5, (__int64)v32);
      sub_18000F390();
      sub_1800763F0(a1, 13LL, *(unsigned int *)(a1 + 72), &v29);
      if ( dword_1800B31E0 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
      {
        if ( v23 )
        {
          if ( v22 > 4 && sub_180010470(v21, 0x200000000001LL) )
            sub_18002E278(v27, (unsigned __int8 *)dword_18009DFB0, 0LL, 0LL, 2u, &v35);
        }
        else
        {
          sub_1800100D0(v2, v33);
          if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 0x200000000001LL) )
          {
            v31 = v33[2];
            v30 = v34[2];
            sub_180074A1C(v24, byte_18009E1E4, v25, v26, (__int64)&v29, (__int64)&v30, (__int64)&v31);
          }
        }
      }
      sub_18001E380();
    }
    else if ( (unsigned int)dword_1800B31E0 > 5 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
    {
      v29 = v14;
      v30 = v15;
      v31 = v7;
      sub_180073F88(v12, byte_18009E2E7, v13, v14, (__int64)&v31, (__int64)&v30, (__int64)&v29);
    }
  }
  else if ( (unsigned int)dword_1800B31E0 > 5 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
  {
    sub_18002E278(v9, (unsigned __int8 *)dword_18009E3B5, 0LL, 0LL, 2u, &v35);
  }
  sub_18006ACA0(v32);
  return sub_18000F390();
}
