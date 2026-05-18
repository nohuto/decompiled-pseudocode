/*
 * XREFs of sub_1800100A0 @ 0x1800100A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180028F70 @ 0x180028F70 (sub_180028F70.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800100A0(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 280LL))(a1);
  if ( !(_BYTE)result )
    return sub_180028F70(a1);
  return result;
}
