/*
 * XREFs of sub_180108150 @ 0x180108150
 * Callers:
 *     sub_180074B80 @ 0x180074B80 (sub_180074B80.c)
 *     sub_180074B90 @ 0x180074B90 (sub_180074B90.c)
 *     sub_1801051F8 @ 0x1801051F8 (sub_1801051F8.c)
 *     sub_1801058B0 @ 0x1801058B0 (sub_1801058B0.c)
 *     sub_180105924 @ 0x180105924 (sub_180105924.c)
 *     sub_1801059D0 @ 0x1801059D0 (sub_1801059D0.c)
 *     sub_180109610 @ 0x180109610 (sub_180109610.c)
 * Callees:
 *     sub_18006D208 @ 0x18006D208 (sub_18006D208.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180108150(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r10

  v1 = sub_18006D208((volatile signed __int32 *)(a1 + 52));
  if ( !v1 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 64LL))(v2, v1 + 1);
    if ( qword_18019E418 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 16LL))(qword_18019E418);
  }
  return v1;
}
