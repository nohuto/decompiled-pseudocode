/*
 * XREFs of sub_180038EC0 @ 0x180038EC0
 * Callers:
 *     sub_1800384E4 @ 0x1800384E4 (sub_1800384E4.c)
 * Callees:
 *     sub_180039324 @ 0x180039324 (sub_180039324.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180038EC0(__int64 a1, char a2)
{
  __int64 result; // rax

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 144) + 880LL))(*(_QWORD *)(a1 + 144));
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 144) + 888LL))(*(_QWORD *)(a1 + 144));
  if ( a2 )
    return sub_180039324(a1);
  return result;
}
