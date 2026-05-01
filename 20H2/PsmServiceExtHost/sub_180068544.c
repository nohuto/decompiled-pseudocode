/*
 * XREFs of sub_180068544 @ 0x180068544
 * Callers:
 *     sub_180062DD0 @ 0x180062DD0 (sub_180062DD0.c)
 * Callees:
 *     sub_18000B63C @ 0x18000B63C (sub_18000B63C.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180068238 @ 0x180068238 (sub_180068238.c)
 *     sub_18006BAD0 @ 0x18006BAD0 (sub_18006BAD0.c)
 *     sub_18006D504 @ 0x18006D504 (sub_18006D504.c)
 */

__int64 __fastcall sub_180068544(__int64 a1, ULONG *a2, __int64 *a3)
{
  __int64 v6; // rsi
  int v7; // edi
  PVOID v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  DWORD v12; // ebx
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v15; // [rsp+58h] [rbp-A8h] BYREF
  ULONG v16; // [rsp+5Ch] [rbp-A4h] BYREF
  ULONG v17; // [rsp+60h] [rbp-A0h] BYREF
  int v18; // [rsp+64h] [rbp-9Ch] BYREF
  int v19; // [rsp+68h] [rbp-98h] BYREF
  char v20[144]; // [rsp+70h] [rbp-90h] BYREF
  struct _RTL_BITMAP BitMapHeader; // [rsp+100h] [rbp+0h] BYREF

  sub_18000B63C(&v19, v20);
  P = 0LL;
  v6 = -1LL;
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
    sub_18002E278(
      (__int64)&dword_1800B31E0,
      (unsigned __int8 *)dword_18009BA5D,
      0LL,
      0LL,
      2u,
      (PEVENT_DATA_DESCRIPTOR)&BitMapHeader);
  RtlInitializeBitMap(&BitMapHeader, a2 + 2, 0x500u);
  if ( *a2 && a2[42] < 2 && a2[43] < 8 && RtlNumberOfSetBits(&BitMapHeader) <= *a2 )
  {
    sub_18001E380();
    v7 = sub_18006BAD0(a1, a2, 0LL, &P);
    if ( v7 < 0 )
    {
      v8 = P;
    }
    else
    {
      v8 = 0LL;
      v7 = 0;
      v6 = *((_QWORD *)P + 4);
      *a3 = v6;
    }
    if ( v8 )
      sub_18006D504(v8);
    sub_18000F390();
  }
  else
  {
    v7 = -1073741584;
  }
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 9LL) )
  {
    v15 = *a2;
    v16 = a2[43];
    v17 = a2[42];
    v18 = *(_DWORD *)(a1 + 56);
    *(_QWORD *)&BitMapHeader.SizeOfBitMap = v6;
    LODWORD(P) = v7;
    sub_180068238(
      v9,
      byte_18009B3D4,
      v10,
      v11,
      (__int64)&P,
      (__int64)&BitMapHeader,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15);
  }
  if ( v19 )
  {
    v12 = dwTlsIndex;
    if ( dwTlsIndex != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
        __int2c();
      TlsSetValue(v12, 0LL);
    }
  }
  return (unsigned int)v7;
}
