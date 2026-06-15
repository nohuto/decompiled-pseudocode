/*
 * XREFs of sub_180114590 @ 0x180114590
 * Callers:
 *     sub_180113F9C @ 0x180113F9C (sub_180113F9C.c)
 * Callees:
 *     sub_18002BB14 @ 0x18002BB14 (sub_18002BB14.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180114510 @ 0x180114510 (sub_180114510.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180114590(void (__fastcall ***a1)(_QWORD, __int64, __int64 *))
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
    sub_18002BB14(&v2, a1, (__int64)&unk_18015B040);
  return 2147942487LL;
}
