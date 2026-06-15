/*
 * XREFs of sub_180068310 @ 0x180068310
 * Callers:
 *     sub_180029880 @ 0x180029880 (sub_180029880.c)
 *     sub_18005535C @ 0x18005535C (sub_18005535C.c)
 *     sub_180055424 @ 0x180055424 (sub_180055424.c)
 *     sub_18005C098 @ 0x18005C098 (sub_18005C098.c)
 *     sub_18005C280 @ 0x18005C280 (sub_18005C280.c)
 *     sub_180128D24 @ 0x180128D24 (sub_180128D24.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180068310(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v1 + 568) + 16LL))(v1 + 568);
  }
  return result;
}
