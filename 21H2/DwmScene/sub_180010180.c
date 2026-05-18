/*
 * XREFs of sub_180010180 @ 0x180010180
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002E840 @ 0x18002E840 (sub_18002E840.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180010180(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 280LL))(a1);
  if ( !(_BYTE)result )
    return sub_18002E840(a1);
  return result;
}
