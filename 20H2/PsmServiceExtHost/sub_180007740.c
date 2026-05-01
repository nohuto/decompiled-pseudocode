/*
 * XREFs of sub_180007740 @ 0x180007740
 * Callers:
 *     sub_180007610 @ 0x180007610 (sub_180007610.c)
 *     sub_180062D70 @ 0x180062D70 (sub_180062D70.c)
 * Callees:
 *     sub_180007634 @ 0x180007634 (sub_180007634.c)
 *     sub_180007880 @ 0x180007880 (sub_180007880.c)
 *     sub_18000B63C @ 0x18000B63C (sub_18000B63C.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_180063424 @ 0x180063424 (sub_180063424.c)
 */

__int64 __fastcall sub_180007740(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rdi
  int v7; // ebx
  int v8; // r8d
  int v9; // r9d
  DWORD v10; // edi
  __int64 v12; // [rsp+30h] [rbp-E8h] BYREF
  int v13; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+40h] [rbp-D8h] BYREF
  _BYTE v15[144]; // [rsp+50h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+E0h] [rbp-38h] BYREF

  sub_18000B63C(&v13, v15);
  if ( (unsigned int)dword_1800B31E0 > 4 && (unsigned __int8)sub_180010470(&dword_1800B31E0, 1LL) )
    sub_18002E278((int)&dword_1800B31E0, (int)&dword_18009B468, 0, 0, 2u, &v16);
  v12 = 0LL;
  sub_18001E380(v4);
  v5 = sub_180007634(a1 + 536, a2, &v12);
  v6 = v12;
  if ( v5 < 0 )
  {
    v7 = v5 | 0x10000000;
    sub_18000F390();
  }
  else
  {
    sub_18000F390();
    v7 = sub_180007880(v6);
    if ( v7 >= 0 )
      v7 = 0;
  }
  if ( (unsigned int)dword_1800B31E0 > 4 && (unsigned __int8)sub_180010470(&dword_1800B31E0, 9LL) )
  {
    v14 = a2;
    LODWORD(v12) = v7;
    sub_180063424((unsigned int)&dword_1800B31E0, (unsigned int)&unk_18009B180, v8, v9, (__int64)&v12, (__int64)&v14);
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v13 )
  {
    v10 = dwTlsIndex;
    if ( dwTlsIndex != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
        __int2c();
      TlsSetValue(v10, 0LL);
    }
  }
  return (unsigned int)v7;
}
