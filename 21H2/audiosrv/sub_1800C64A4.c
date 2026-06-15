/*
 * XREFs of sub_1800C64A4 @ 0x1800C64A4
 * Callers:
 *     sub_180012C30 @ 0x180012C30 (sub_180012C30.c)
 *     sub_180071F6C @ 0x180071F6C (sub_180071F6C.c)
 *     sub_1800C8F7C @ 0x1800C8F7C (sub_1800C8F7C.c)
 *     sub_1800F7230 @ 0x1800F7230 (sub_1800F7230.c)
 *     sub_1800F746C @ 0x1800F746C (sub_1800F746C.c)
 *     sub_180105BEC @ 0x180105BEC (sub_180105BEC.c)
 *     sub_18010B268 @ 0x18010B268 (sub_18010B268.c)
 *     sub_18010D0D0 @ 0x18010D0D0 (sub_18010D0D0.c)
 *     sub_180110050 @ 0x180110050 (sub_180110050.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall sub_1800C64A4(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdi

  v2 = *a1;
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return a1;
}
