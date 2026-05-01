/*
 * XREFs of sub_1800678A8 @ 0x1800678A8
 * Callers:
 *     sub_180062AC0 @ 0x180062AC0 (sub_180062AC0.c)
 * Callees:
 *     sub_180003420 @ 0x180003420 (sub_180003420.c)
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_180062720 @ 0x180062720 (sub_180062720.c)
 *     sub_180073708 @ 0x180073708 (sub_180073708.c)
 */

__int64 __fastcall sub_1800678A8(__int64 a1, __int64 a2, int *a3)
{
  __int64 v3; // rbx
  int v6; // eax
  __int64 v7; // rdi
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  DWORD v12; // edi
  __int64 v14; // [rsp+40h] [rbp-D8h] BYREF
  int v15; // [rsp+48h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+50h] [rbp-C8h] BYREF
  _BYTE TlsValue[144]; // [rsp+60h] [rbp-B8h] BYREF

  v3 = qword_1800B41A0;
  sub_18000B7F8(TlsValue);
  v14 = 0LL;
  sub_18001E380();
  v6 = sub_180003420(v3, a2, &v14);
  v7 = v14;
  v8 = v6;
  if ( v6 >= 0 )
  {
    v8 = sub_180073708(v14, a3);
    if ( v8 >= 0 )
      v8 = 0;
  }
  sub_18000F390();
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
  {
    v15 = *a3;
    v16 = a2;
    LODWORD(v14) = v8;
    sub_180062720(v9, byte_18009B07B, v10, v11, (__int64)&v14, (__int64)&v16, (__int64)&v15);
  }
  v12 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v12, 0LL);
  }
  return (unsigned int)v8;
}
