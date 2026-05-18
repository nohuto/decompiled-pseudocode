/*
 * XREFs of sub_180041148 @ 0x180041148
 * Callers:
 *     _expandlocale @ 0x1800418BC (_expandlocale.c)
 * Callees:
 *     sub_1800417D8 @ 0x1800417D8 (sub_1800417D8.c)
 *     memset @ 0x18012396A (memset.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180041148(__int64 a1, const wchar_t *a2)
{
  unsigned int v4; // eax
  int v5; // [rsp+20h] [rbp-128h]
  char String[256]; // [rsp+30h] [rbp-118h] BYREF

  if ( a1 )
  {
    memset(String, 0, sizeof(String));
    v5 = dword_18021FBEC++;
    sub_1800417D8(String, -1LL, "%S(%u)", a2, v5);
    v4 = strnlen(String, 0x7FFFFFFFuLL);
    (*(void (__fastcall **)(__int64, void *, _QWORD, char *))(*(_QWORD *)a1 + 280LL))(a1, &unk_1801DCBC0, v4, String);
  }
}
