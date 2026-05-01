/*
 * XREFs of sub_180076240 @ 0x180076240
 * Callers:
 *     sub_180074FF4 @ 0x180074FF4 (sub_180074FF4.c)
 * Callees:
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_180034F2C @ 0x180034F2C (sub_180034F2C.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18006ACA0 @ 0x18006ACA0 (sub_18006ACA0.c)
 *     sub_180071A28 @ 0x180071A28 (sub_180071A28.c)
 *     sub_180071AA0 @ 0x180071AA0 (sub_180071AA0.c)
 *     sub_180075C4C @ 0x180075C4C (sub_180075C4C.c)
 *     sub_1800763F0 @ 0x1800763F0 (sub_1800763F0.c)
 */

__int64 __fastcall sub_180076240(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r14
  unsigned int v5; // edi
  __int64 v6; // rdx
  int v7; // ebx
  __int64 v8; // rcx
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v11[3]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[16]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v13; // [rsp+60h] [rbp-A0h]
  __int64 v14; // [rsp+70h] [rbp-90h]
  _BYTE v15[128]; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+120h] [rbp+20h] BYREF

  v2 = *(_QWORD *)a1;
  v11[1] = v11;
  v11[0] = v11;
  v11[2] = *(_QWORD **)(a1 + 32);
  sub_18001E380();
  sub_180034F2C(v2, *(_QWORD *)(*(_QWORD *)a1 + 24LL) + 400, v15, (__int64)v12);
  v5 = 2;
  sub_180071A28(v2, 0, v2 + 144, 67, (unsigned __int8 (__fastcall *)(__int64, __int64))sub_1800714F0, 2LL);
  sub_180071AA0((__int64)v12, v2 + 144);
  if ( v13 - v14 < a2 )
  {
    v5 = 3;
LABEL_14:
    sub_18000F390();
    return v5;
  }
  if ( !*(_DWORD *)(v2 + 180) )
    goto LABEL_14;
  v7 = sub_180075C4C(v2, v6, v13 - v14 - a2, 1, 5, (__int64)v11);
  sub_18000F390();
  if ( v7 )
  {
    if ( (unsigned int)sub_1800763F0(a1, 13LL, *(unsigned int *)(a1 + 72), &v10) )
    {
      if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
        sub_18002E278(v8, (unsigned __int8 *)dword_18009E423, 0LL, 0LL, 2u, &v16);
      v5 = 1;
    }
    else if ( v10 == 2 )
    {
      v5 = 4;
    }
    else
    {
      v5 = 0;
    }
    sub_18001E380();
    sub_18006ACA0(v11);
    goto LABEL_14;
  }
  return v5;
}
