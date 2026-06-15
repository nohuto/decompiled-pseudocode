/*
 * XREFs of sub_18012D260 @ 0x18012D260
 * Callers:
 *     sub_180074FC0 @ 0x180074FC0 (sub_180074FC0.c)
 *     sub_180074FD0 @ 0x180074FD0 (sub_180074FD0.c)
 * Callees:
 *     sub_18006D208 @ 0x18006D208 (sub_18006D208.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18012D260(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r10

  v1 = sub_18006D208((volatile signed __int32 *)(a1 + 52));
  if ( !v1 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 88LL))(v2, v1 + 1);
    if ( qword_18019E418 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 16LL))(qword_18019E418);
  }
  return v1;
}
