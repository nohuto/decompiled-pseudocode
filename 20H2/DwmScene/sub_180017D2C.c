/*
 * XREFs of sub_180017D2C @ 0x180017D2C
 * Callers:
 *     sub_180019C80 @ 0x180019C80 (sub_180019C80.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180017D2C(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx

  v4 = *a1;
  if ( v4 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return sub_180017C4C(a1, a2);
}
