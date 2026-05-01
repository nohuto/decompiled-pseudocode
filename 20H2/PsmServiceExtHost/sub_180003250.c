/*
 * XREFs of sub_180003250 @ 0x180003250
 * Callers:
 *     sub_1800031A0 @ 0x1800031A0 (sub_1800031A0.c)
 *     sub_1800627C0 @ 0x1800627C0 (sub_1800627C0.c)
 * Callees:
 *     sub_18000334C @ 0x18000334C (sub_18000334C.c)
 *     sub_180003420 @ 0x180003420 (sub_180003420.c)
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_180063424 @ 0x180063424 (sub_180063424.c)
 */

__int64 __fastcall sub_180003250(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rcx
  int v5; // edi
  __int64 v6; // rbx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  DWORD v10; // ebx
  __int64 v12; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v13; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE TlsValue[144]; // [rsp+40h] [rbp-A8h] BYREF

  v2 = qword_1800B41A0;
  sub_18000B7F8(TlsValue);
  sub_18001E380(v4);
  v5 = sub_180003420(v2, a2, &v12);
  if ( v5 >= 0 )
  {
    v6 = v12;
    sub_18000334C(v12);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    v5 = 0;
  }
  sub_18000F390();
  if ( (unsigned int)dword_1800B31E0 > 4 && (unsigned __int8)sub_180010470(&dword_1800B31E0, 9LL) )
  {
    v13 = a2;
    LODWORD(v12) = v5;
    sub_180063424(v7, (unsigned int)&unk_18009AD71, v8, v9, (__int64)&v12, (__int64)&v13);
  }
  v10 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v10, 0LL);
  }
  return (unsigned int)v5;
}
