/*
 * XREFs of sub_180035020 @ 0x180035020
 * Callers:
 *     sub_180074630 @ 0x180074630 (sub_180074630.c)
 *     sub_180074640 @ 0x180074640 (sub_180074640.c)
 *     sub_180074650 @ 0x180074650 (sub_180074650.c)
 *     sub_180074660 @ 0x180074660 (sub_180074660.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180035020(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int32 v2; // ebx

  v1 = a1 + 32;
  v2 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 40));
  if ( !v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 32LL))(a1 + 32);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
