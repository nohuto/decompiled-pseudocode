/*
 * XREFs of sub_180069BA4 @ 0x180069BA4
 * Callers:
 *     sub_180062DB0 @ 0x180062DB0 (sub_180062DB0.c)
 *     sub_18007FA28 @ 0x18007FA28 (sub_18007FA28.c)
 *     sub_18007FAEC @ 0x18007FAEC (sub_18007FAEC.c)
 * Callees:
 *     sub_180007634 @ 0x180007634 (sub_180007634.c)
 *     sub_18000B63C @ 0x18000B63C (sub_18000B63C.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_180063424 @ 0x180063424 (sub_180063424.c)
 *     sub_180072A4C @ 0x180072A4C (sub_180072A4C.c)
 */

__int64 __fastcall sub_180069BA4(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v8; // eax
  __int64 v9; // rdi
  int v10; // ebx
  __int64 v11; // r8
  __int64 v12; // r9
  DWORD v13; // edi
  __int64 v15; // [rsp+30h] [rbp-108h] BYREF
  int v16; // [rsp+38h] [rbp-100h] BYREF
  __int64 v17; // [rsp+40h] [rbp-F8h] BYREF
  _BYTE v18[144]; // [rsp+50h] [rbp-E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+E0h] [rbp-58h] BYREF

  sub_18000B63C(&v16, v18);
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
    sub_18002E278((__int64)&dword_1800B31E0, (unsigned __int8 *)dword_18009B9CE, 0LL, 0LL, 2u, &v19);
  v15 = 0LL;
  sub_18001E380();
  v8 = sub_180007634(a1 + 536, a2, &v15);
  v9 = v15;
  if ( v8 >= 0 )
  {
    sub_18000F390();
    v10 = sub_180072A4C(v9, a3, a4);
    if ( v10 >= 0 )
      v10 = 0;
  }
  else
  {
    v10 = v8 | 0x10000000;
    sub_18000F390();
  }
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 9LL) )
  {
    v17 = a2;
    LODWORD(v15) = v10;
    sub_180063424((__int64)&dword_1800B31E0, byte_18009BBB4, v11, v12, (__int64)&v15, (__int64)&v17);
  }
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v16 )
  {
    v13 = dwTlsIndex;
    if ( dwTlsIndex != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
        __int2c();
      TlsSetValue(v13, 0LL);
    }
  }
  return (unsigned int)v10;
}
