/*
 * XREFs of sub_1800760A8 @ 0x1800760A8
 * Callers:
 *     sub_180016AF0 @ 0x180016AF0 (sub_180016AF0.c)
 * Callees:
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18006ACA0 @ 0x18006ACA0 (sub_18006ACA0.c)
 *     sub_180071A28 @ 0x180071A28 (sub_180071A28.c)
 *     sub_180075C4C @ 0x180075C4C (sub_180075C4C.c)
 *     sub_180075DA0 @ 0x180075DA0 (sub_180075DA0.c)
 *     sub_1800763F0 @ 0x1800763F0 (sub_1800763F0.c)
 */

__int64 __fastcall sub_1800760A8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  unsigned int v8; // ebx
  __int64 v9; // rdx
  char v10; // si
  __int64 v11; // rcx
  __int64 v13; // [rsp+30h] [rbp-50h] BYREF
  _QWORD *v14[3]; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+50h] [rbp-30h] BYREF

  v4 = *(_QWORD *)a1;
  v14[1] = v14;
  v13 = a3;
  v14[0] = v14;
  v14[2] = *(_QWORD **)(a1 + 32);
  sub_18001E380();
  v8 = 0;
  *(_WORD *)(v4 + 188) = 0;
  sub_180071A28(v4, 0, v4 + 144, 67, (unsigned __int8 (__fastcall *)(__int64, __int64))sub_1800714F0, 2LL);
  v10 = 0;
  if ( *(_DWORD *)(v4 + 180) )
  {
    sub_180075C4C(v4, v9, *(_QWORD *)(v13 + 24) - *(_QWORD *)(a2 + 24), 3, 7, (__int64)v14);
    if ( *(_DWORD *)(v4 + 184) )
    {
      if ( v14[0] == v14 )
        goto LABEL_14;
      v10 = 1;
    }
  }
  sub_18000F390();
  if ( !v10 )
  {
    sub_180075DA0((unsigned int *)a1, a4);
    return 2;
  }
  if ( (unsigned int)sub_1800763F0(a1, 28LL, *(unsigned int *)(a1 + 72), &v13) )
  {
    if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
      sub_18002E278(v11, (unsigned __int8 *)dword_18009E3F0, 0LL, 0LL, 2u, &v15);
    v8 = 1;
  }
  else if ( (_DWORD)v13 == 2 )
  {
    v8 = 4;
  }
  sub_18001E380();
  sub_18006ACA0(v14);
LABEL_14:
  sub_18000F390();
  return v8;
}
