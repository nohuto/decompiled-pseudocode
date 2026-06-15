/*
 * XREFs of sub_1800DAE04 @ 0x1800DAE04
 * Callers:
 *     sub_18000CBF0 @ 0x18000CBF0 (sub_18000CBF0.c)
 *     sub_180021130 @ 0x180021130 (sub_180021130.c)
 * Callees:
 *     sub_180002574 @ 0x180002574 (sub_180002574.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800DAE04(__int64 a1, unsigned int a2, __int64 a3, int a4, unsigned int a5, int a6)
{
  int v9; // eax
  __int128 *v10; // r11
  __int128 v12; // [rsp+40h] [rbp-18h] BYREF

  v9 = sub_180002574(a2 != 0, a5, 0, a6);
  v12 = *v10;
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int128 *, int, int))(*(_QWORD *)qword_18019EE58 + 80LL))(
           qword_18019EE58,
           a1,
           a2,
           &v12,
           a4,
           v9);
}
