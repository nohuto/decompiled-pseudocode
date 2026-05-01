/*
 * XREFs of sub_180079A1C @ 0x180079A1C
 * Callers:
 *     sub_180080430 @ 0x180080430 (sub_180080430.c)
 * Callees:
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_180022D04 @ 0x180022D04 (sub_180022D04.c)
 *     sub_18002A350 @ 0x18002A350 (sub_18002A350.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_180035B88 @ 0x180035B88 (sub_180035B88.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180078690 @ 0x180078690 (sub_180078690.c)
 */

__int64 __fastcall sub_180079A1C(
        __int64 *a1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        bool *a8)
{
  char v11; // si
  int v12; // ebx
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // rdi
  int v16; // eax
  __int64 v17; // rdx
  DWORD v19; // edi
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _BYTE v24[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v25; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h] BYREF
  _BYTE TlsValue[144]; // [rsp+70h] [rbp-90h] BYREF
  char v30[560]; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+330h] [rbp+230h] BYREF

  v27 = a2;
  sub_18000B7F8(TlsValue);
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_18009F051, 0LL, 0LL, 2u, &v31);
  v11 = 0;
  v26 = 0LL;
  v25 = 0;
  v12 = sub_180035B88(v30, v27, a3, a4, a5, a6, a7);
  if ( v12 >= 0 )
  {
    v13 = sub_180022D04(*a1, (__int64)v30, &v26);
    v15 = v26;
    v12 = v13;
    if ( v13 >= 0 )
    {
      v16 = sub_18002A350(v26, &v25, v14);
      v11 = v25;
      v12 = v16;
      if ( v16 >= 0 )
      {
        v12 = 0;
        *a8 = v25 != 0;
      }
    }
    if ( v15 )
    {
      sub_18001E380();
      if ( (*(_QWORD *)(v15 + 592))-- == 1LL )
        sub_18000A1AC(v15 - 64, v17);
      sub_18000F390();
    }
  }
  v19 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v19, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
  {
    v24[0] = v11;
    v28 = a7;
    v25 = a6;
    LODWORD(v26) = v12;
    sub_180078690(
      v20,
      byte_18009FB8D,
      v21,
      v22,
      (__int64)&v26,
      (void **)&v27,
      (__int64)&v25,
      (__int64)&v28,
      (__int64)v24);
  }
  return (unsigned int)v12;
}
