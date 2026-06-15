/*
 * XREFs of sub_180069288 @ 0x180069288
 * Callers:
 *     sub_18007CF40 @ 0x18007CF40 (sub_18007CF40.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_180069288()
{
  __int64 result; // rax

  if ( byte_18019E510 )
  {
    result = (*(__int64 (__fastcall **)(__int64 *, _QWORD))qword_18019E4F8)(&qword_18019E4F8, 0LL);
    byte_18019E510 = 0;
  }
  return result;
}
