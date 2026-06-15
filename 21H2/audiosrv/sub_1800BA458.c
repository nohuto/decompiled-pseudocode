/*
 * XREFs of sub_1800BA458 @ 0x1800BA458
 * Callers:
 *     sub_1800B8C00 @ 0x1800B8C00 (sub_1800B8C00.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B78D0 @ 0x1800B78D0 (sub_1800B78D0.c)
 *     sub_1800B8EB0 @ 0x1800B8EB0 (sub_1800B8EB0.c)
 */

char __fastcall sub_1800BA458(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 (__fastcall *v6)(_QWORD, char *); // rax
  _BYTE v8[144]; // [rsp+20h] [rbp-248h] BYREF
  char v9[400]; // [rsp+B0h] [rbp-1B8h] BYREF

  memset(v8, 0, sizeof(v8));
  LOBYTE(v6) = sub_1800B8EB0(a1, (int)v8, a3);
  if ( (_BYTE)v6 )
  {
    sub_1800B78D0(v9, (__int64)v8, a3);
    v6 = (__int64 (__fastcall *)(_QWORD, char *))qword_18019FA40;
    if ( qword_18019FA40 || (v6 = (__int64 (__fastcall *)(_QWORD, char *))qword_18019FA38) != 0LL )
      LOBYTE(v6) = v6(a2, v9);
  }
  return (char)v6;
}
