/*
 * XREFs of sub_18003B878 @ 0x18003B878
 * Callers:
 *     _expandlocale @ 0x18003BFEC (_expandlocale.c)
 * Callees:
 *     sub_18003BF08 @ 0x18003BF08 (sub_18003BF08.c)
 *     memset @ 0x18011E09A (memset.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18003B878(__int64 a1, const wchar_t *a2)
{
  unsigned int v4; // eax
  int v5; // [rsp+20h] [rbp-128h]
  char String[256]; // [rsp+30h] [rbp-118h] BYREF

  if ( a1 )
  {
    memset(String, 0, sizeof(String));
    v5 = dword_1802188BC++;
    sub_18003BF08(String, -1LL, "%S(%u)", a2, v5);
    v4 = strnlen(String, 0x7FFFFFFFuLL);
    (*(void (__fastcall **)(__int64, void *, _QWORD, char *))(*(_QWORD *)a1 + 280LL))(a1, &unk_1801D6830, v4, String);
  }
}
