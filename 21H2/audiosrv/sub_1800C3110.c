/*
 * XREFs of sub_1800C3110 @ 0x1800C3110
 * Callers:
 *     sub_1800C2904 @ 0x1800C2904 (sub_1800C2904.c)
 *     sub_1800C3D30 @ 0x1800C3D30 (sub_1800C3D30.c)
 *     sub_1800FB1A4 @ 0x1800FB1A4 (sub_1800FB1A4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800C3110(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 i; // rbx
  __int64 v5; // rcx
  __int64 result; // rax

  if ( a2 )
  {
    for ( i = 0LL; i < a2; ++i )
    {
      v5 = *(_QWORD *)(a1 + 8 * i);
      if ( v5 )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  return result;
}
