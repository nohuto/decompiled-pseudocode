/*
 * XREFs of sub_180073D58 @ 0x180073D58
 * Callers:
 *     sub_180069EB0 @ 0x180069EB0 (sub_180069EB0.c)
 * Callees:
 *     sub_180008D30 @ 0x180008D30 (sub_180008D30.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180062720 @ 0x180062720 (sub_180062720.c)
 */

__int64 __fastcall sub_180073D58(__int64 a1, __int64 a2, _QWORD *a3, int *a4)
{
  int v4; // edi
  __int64 v5; // r14
  __int64 v6; // rsi
  int v10; // eax
  char *v11; // rcx
  unsigned int v12; // ebx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  PVOID P; // [rsp+40h] [rbp-29h] BYREF
  __int64 v19; // [rsp+48h] [rbp-21h] BYREF
  __int64 v20; // [rsp+50h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+58h] [rbp-11h] BYREF
  __int64 *v22; // [rsp+78h] [rbp+Fh]
  int v23; // [rsp+80h] [rbp+17h]
  int v24; // [rsp+84h] [rbp+1Bh]

  P = 0LL;
  v4 = 6;
  v5 = *(_QWORD *)&qword_1800B41A8;
  v6 = 0LL;
  if ( (unsigned int)dword_1800B31E0 > 5 && sub_180010470((__int64)&dword_1800B31E0, 3LL) )
  {
    v24 = 0;
    v22 = &v19;
    v19 = a2;
    v23 = 8;
    sub_18002E278((__int64)&dword_1800B31E0, (unsigned __int8 *)dword_18009DA72, 0LL, 0LL, 3u, &v21);
  }
  sub_18001E380();
  v10 = sub_180008D30(v5, a2, (__int64 *)&P);
  v11 = (char *)P;
  v12 = v10;
  if ( v10 >= 0 )
  {
    v13 = *((_DWORD *)P + 344);
    v6 = *((_QWORD *)P + 171);
    switch ( v13 )
    {
      case 4:
        v4 = 5;
LABEL_13:
        *a3 = v6;
        v12 = 0;
        *a4 = v4;
        goto LABEL_15;
      case 3:
        v4 = 4;
        goto LABEL_13;
      case 2:
        v4 = 3;
        goto LABEL_13;
      case 1:
        v4 = 2;
        goto LABEL_13;
    }
    v12 = -1073741823;
  }
LABEL_15:
  if ( v11 )
    sub_1800265B0(v11);
  sub_18000F390();
  if ( (unsigned int)dword_1800B31E0 > 5 && sub_180010470((__int64)&dword_1800B31E0, 3LL) )
  {
    LODWORD(v19) = v4;
    v20 = v6;
    LODWORD(P) = v12;
    sub_180062720(v14, byte_18009DA0C, v15, v16, (__int64)&P, (__int64)&v20, (__int64)&v19);
  }
  return v12;
}
