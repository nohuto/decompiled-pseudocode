/*
 * XREFs of sub_180010534 @ 0x180010534
 * Callers:
 *     sub_1800101B0 @ 0x1800101B0 (sub_1800101B0.c)
 *     sub_18002A430 @ 0x18002A430 (sub_18002A430.c)
 *     sub_1800321A0 @ 0x1800321A0 (sub_1800321A0.c)
 *     sub_180032554 @ 0x180032554 (sub_180032554.c)
 *     sub_180035404 @ 0x180035404 (sub_180035404.c)
 *     sub_180035708 @ 0x180035708 (sub_180035708.c)
 *     sub_180038AF0 @ 0x180038AF0 (sub_180038AF0.c)
 *     sub_180038F20 @ 0x180038F20 (sub_180038F20.c)
 *     sub_18003F150 @ 0x18003F150 (sub_18003F150.c)
 *     _setlocale_set_cat @ 0x18003FAC0 (_setlocale_set_cat.c)
 *     sub_18003FE78 @ 0x18003FE78 (sub_18003FE78.c)
 *     sub_180044EE0 @ 0x180044EE0 (sub_180044EE0.c)
 * Callees:
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180010534(__int64 *a1, const char *a2)
{
  __int64 v2; // rax
  unsigned int v4; // ebx
  int v6; // [rsp+30h] [rbp-18h] BYREF

  if ( a1 )
  {
    v2 = *a1;
    v4 = 0;
    v6 = 0;
    (*(void (__fastcall **)(__int64 *, void *, int *, _QWORD))(v2 + 32))(a1, &unk_1801DCBC0, &v6, 0LL);
    if ( !v6 )
    {
      if ( a2 )
        v4 = strnlen(a2, 0xFFuLL);
      (*(void (__fastcall **)(__int64 *, void *, _QWORD, const char *))(*a1 + 40))(a1, &unk_1801DCBC0, v4, a2);
    }
  }
}
