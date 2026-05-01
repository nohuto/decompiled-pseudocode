/*
 * XREFs of sub_1800759A8 @ 0x1800759A8
 * Callers:
 *     sub_180016AF0 @ 0x180016AF0 (sub_180016AF0.c)
 *     StartAddress @ 0x18003E530 (StartAddress.c)
 *     sub_180074FF4 @ 0x180074FF4 (sub_180074FF4.c)
 * Callees:
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18006ACA0 @ 0x18006ACA0 (sub_18006ACA0.c)
 *     sub_180071A28 @ 0x180071A28 (sub_180071A28.c)
 *     sub_1800752F4 @ 0x1800752F4 (sub_1800752F4.c)
 *     sub_180075688 @ 0x180075688 (sub_180075688.c)
 *     sub_1800763F0 @ 0x1800763F0 (sub_1800763F0.c)
 */

__int64 __fastcall sub_1800759A8(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // r15d
  unsigned int v7; // esi
  __int64 v8; // r12
  int v9; // ecx
  int v10; // r8d
  __int64 v11; // r12
  unsigned int v12; // ebx
  __int16 v13; // ax
  __int16 v14; // dx
  bool v15; // zf
  __int64 v16; // rcx
  __int16 v17; // r9
  unsigned int v18; // edx
  char v19; // al
  char v21; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v22[3]; // [rsp+41h] [rbp-38h] BYREF
  int v23; // [rsp+44h] [rbp-35h] BYREF
  int v24; // [rsp+48h] [rbp-31h]
  _QWORD *v25[3]; // [rsp+50h] [rbp-29h] BYREF
  __int64 v26; // [rsp+68h] [rbp-11h]
  __int64 v27; // [rsp+70h] [rbp-9h]
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+78h] [rbp-1h] BYREF

  v27 = a3;
  v25[1] = v25;
  v26 = a2;
  v21 = 0;
  v25[0] = v25;
  v25[2] = *(_QWORD **)(a1 + 32);
  v22[0] = 0;
  if ( (a4 & 0x20) != 0 )
  {
    v6 = 0;
LABEL_4:
    v7 = 0;
    goto LABEL_5;
  }
  v6 = 1;
  v7 = 1;
  if ( (a4 & 8) == 0 )
    goto LABEL_4;
LABEL_5:
  sub_18001E380();
  v8 = *(_QWORD *)a1;
  v9 = a4 & 1;
  v10 = a4 & 0x10;
  v23 = v9;
  v24 = (unsigned __int8)v10;
  v11 = v8 + 144;
  v12 = 2;
  while ( 1 )
  {
    *(_WORD *)(v11 + 44) = 0;
    v13 = 40;
    if ( v7 != 1 )
      v13 = 8;
    v14 = v13 | 0x13;
    v15 = v9 == 0;
    v16 = a4 | 0x20;
    if ( v15 )
      v14 = v13;
    if ( v7 == 1 )
      v16 = a4;
    v17 = v14 | 2;
    if ( !v10 )
      v17 = v14;
    sub_180071A28(*(_QWORD *)a1, 0, v11, v17, (unsigned __int8 (__fastcall *)(__int64, __int64))sub_1800755F0, v16);
    v18 = *(_DWORD *)(v11 + 36);
    if ( v18 )
    {
      sub_180075688(*(_WORD **)v11, v18, a4);
      sub_1800752F4(
        (__int64 *)a1,
        *(_QWORD *)v11,
        *(_DWORD *)(v11 + 36),
        *(_QWORD *)(v26 + 56) - *(_QWORD *)(v27 + 56),
        a4,
        (__int64)v25,
        &v21,
        v22);
      v19 = v21;
    }
    else
    {
      v19 = 0;
      v21 = 0;
    }
    if ( v19 )
      break;
    v9 = v23;
    ++v7;
    v10 = v24;
    if ( v7 > v6 )
      goto LABEL_34;
  }
  sub_18000F390();
  if ( (unsigned int)sub_1800763F0(a1, 13LL, *(unsigned int *)(a1 + 72), &v23) )
  {
    if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
      sub_18002E278((__int64)&dword_1800B31E0, (unsigned __int8 *)dword_18009E1B5, 0LL, 0LL, 2u, &v28);
    goto LABEL_32;
  }
  if ( v23 != 3 || !v22[0] )
    goto LABEL_32;
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
    sub_18002E278((__int64)&dword_1800B31E0, (unsigned __int8 *)dword_18009DD12, 0LL, 0LL, 2u, &v28);
  if ( (unsigned int)sub_1800763F0(a1, 5LL, *(unsigned int *)(a1 + 72), &v23) || v23 != 2 )
  {
LABEL_32:
    v12 = 0;
    goto LABEL_33;
  }
  v12 = 4;
LABEL_33:
  sub_18001E380();
LABEL_34:
  sub_18006ACA0(v25);
  sub_18000F390();
  return v12;
}
